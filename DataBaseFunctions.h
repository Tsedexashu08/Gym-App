#pragma once
#include <msclr/marshal_cppstd.h>
#include <exception>
#include "Entities.h"
#include "Functions.h"

using namespace System;
using namespace System::IO;
using namespace System::Drawing;
using namespace System::Windows::Forms;

using namespace System::Data;
using namespace System::Data::SqlClient;

namespace Gymmanagment {

	public ref class DataBaseFunctions
	{
	public:
		SqlConnection^ connection = gcnew SqlConnection("Data Source=tsede;Initial Catalog=Gym;Integrated Security=True;");
	public:
		cli::array<Byte>^ ConvertImageToByteArray(Image^ image)
		{
			// Create a MemoryStream to store the image data
			MemoryStream^ ms = gcnew MemoryStream();

			// Save the image to the MemoryStream
			image->Save(ms, Drawing::Imaging::ImageFormat::Jpeg); // Adjust the image format as per your requirements

			// Convert the MemoryStream to a byte array
			cli::array<Byte>^ imageData = ms->ToArray();

			// Clean up resources
			ms->Close();

			return imageData;
		}
		//Function that gets the image stored in the Data Base.
	public:
		Image^ RetriveImage(String^ name )
		{
			connection->Open();
			SqlCommand^ cmd = gcnew SqlCommand("SELECT IMG FROM employees where full_name=@name", connection);
			cmd->Parameters->AddWithValue("@name", name);
			cli::array<Byte>^ imageData = (cli::array<Byte>^)cmd->ExecuteScalar();
			Image^ image;
			MemoryStream^ ms = gcnew MemoryStream(imageData);
			
				image = Image::FromStream(ms);
			
			return image;
		}
	public:
		void SaveEmployee(Employee employee, Image^ image)
		{

			String^ name = gcnew String(employee.full_name.c_str());
			int age = employee.age;
			String^ email = gcnew String(employee.email.c_str());
			String^ address = gcnew String(employee.address.c_str());
			String^ position = gcnew String(employee.position.c_str());
			String^ phoneNumber = gcnew String(employee.phone_number.c_str());
			String^ subscription = gcnew String(employee.subscription.c_str());

			try {
				SqlConnection^ con = gcnew SqlConnection("Data Source=tsede;Initial Catalog=Gym;Integrated Security=True;");

				con->Open();
				SqlCommand^ cmd2 = gcnew SqlCommand("exec udpInsertEmployee @fullname,@image, @age, @address, @email, @phoneno, @position", con);
				cmd2->Parameters->AddWithValue("@fullname", name);
				cmd2->Parameters->Add("@age", SqlDbType::Int)->Value = age;  // Explicitly specify the SqlDbType as Int
				cmd2->Parameters->Add("@image", SqlDbType::VarBinary)->Value = ConvertImageToByteArray(image);  // Explicitly specify the SqlDbType as Int
				cmd2->Parameters->AddWithValue("@address", address);
				cmd2->Parameters->AddWithValue("@email", email);
				cmd2->Parameters->AddWithValue("@phoneno", phoneNumber);
				cmd2->Parameters->AddWithValue("@subscription", subscription);
				cmd2->Parameters->AddWithValue("@position", position);
				cmd2->ExecuteNonQuery();
			}
			catch (SqlException^ e) {
				// Handle SQL exception
				throw gcnew Exception(e->Message);
			}
			catch (Exception^ e) {
				// Handle other exceptions
				throw gcnew Exception(e->Message);
			}
			
		}public:
			void SaveMember(Member member, Image^ image)
			{

				String^ name = gcnew String(member.full_name.c_str());
				int age = member.age;
				String^ email = gcnew String(member.email.c_str());
				String^ address = gcnew String(member.address.c_str());
				int duration = (member.duration);
				String^ phoneNumber = gcnew String(member.phone_number.c_str());
				String^ subscription = gcnew String(member.subscription.c_str());
				String^ registartion_date = gcnew String(member.registration_date.c_str());

				try {
					SqlConnection^ con = gcnew SqlConnection("Data Source=tsede;Initial Catalog=Gym;Integrated Security=True;");

					con->Open();
					SqlCommand^ cmd2 = gcnew SqlCommand("exec  udpInsertMember  @fullname,@image, @age, @address, @email,@subscription ,@phoneno, @duration", con);
					cmd2->Parameters->AddWithValue("@fullname", name);
					cmd2->Parameters->Add("@age", SqlDbType::Int)->Value = age;  // Explicitly specify the SqlDbType as Int
					cmd2->Parameters->Add("@duration", SqlDbType::Int)->Value = duration;  // Explicitly specify the SqlDbType as Int
					cmd2->Parameters->Add("@image", SqlDbType::VarBinary)->Value = ConvertImageToByteArray(image);  // Explicitly specify the SqlDbType as Int
					cmd2->Parameters->AddWithValue("@address", address);
					cmd2->Parameters->AddWithValue("@email", email);
					cmd2->Parameters->AddWithValue("@phoneno", phoneNumber);
					cmd2->Parameters->AddWithValue("@subscription", subscription);
					cmd2->ExecuteNonQuery();
				}
				catch (SqlException^ e) {
					// Handle SQL exception
					throw gcnew Exception(e->Message);
				}
				catch (Exception^ e) {
					// Handle other exceptions
					throw gcnew Exception(e->Message);
				}

			}


	public:
		void FetchNodeData(EmployeeList* list)//function that fetches data stored in db and populates the employeeList.
		{

			SqlCommand^ command = gcnew SqlCommand("SELECT * FROM Employees", connection);

			connection->Open();
			SqlDataReader^ reader = command->ExecuteReader();

			while (reader->Read())
			{
				Employee emp;
				emp.full_name = ConvertToString(reader["full_name"]->ToString());
				emp.age = Convert::ToInt32(reader["age"]);
				emp.address = ConvertToString(reader["address"]->ToString());
				emp.email = ConvertToString(reader["email"]->ToString());
				emp.hire_date = ConvertToString(reader["hire_date"]->ToString());
				emp.monthly_salary = Convert::ToInt32(reader["monthly_salary"]);
				emp.phone_number = ConvertToString(reader["Phone_number"]->ToString());
				emp.position = ConvertToString(reader["position"]->ToString());
				list->AddEmployeeToList(emp);
			}

			reader->Close();
			connection->Close();
			//MessageBox::Show("fetched biatch!!!!!!!!!!!");
		}

		public:
			void FetchMemberNodeData(MemberList* list)//function that fetches data stored in db and populates the employeeList.
			{

				SqlCommand^ command = gcnew SqlCommand("SELECT * FROM members", connection);

				connection->Open();
				SqlDataReader^ reader = command->ExecuteReader();

				while (reader->Read())
				{
					Member member;
					member.full_name = ConvertToString(reader["full_name"]->ToString());
					member.age = Convert::ToInt32(reader["age"]);
					member.address = ConvertToString(reader["address"]->ToString());
					member.email = ConvertToString(reader["email"]->ToString());
					member.registration_date = ConvertToString(reader["registration_date"]->ToString());
					member.duration = Convert::ToInt32(reader["duration"]);
					member.phone_number = ConvertToString(reader["Phone_number"]->ToString());
					member.subscription = ConvertToString(reader["subscription"]->ToString());
					list->AddMemberToList(member);
				}

				reader->Close();
				connection->Close();
				//MessageBox::Show("fetched biatch!!!!!!!!!!!");
			}
	public:
		string ConvertToString(String^ str) {
			return msclr::interop::marshal_as<std::string>(str);
		}
	};
}



