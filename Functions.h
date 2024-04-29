#pragma once
#include "Entities.h"
#include "EmployeeCard.h"
#include "MemberCard.h"

//#include "DataBaseFunctions.h" 

using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;



namespace Gymmanagment {

	public class EmployeeList
	{
	private:
		EmployeeNode* head, * tail;

	public:
		EmployeeList()
		{
			head = nullptr;
			tail = nullptr;
		}
		void AddEmployeeToList(Employee x)
		{
			EmployeeNode* employee = new EmployeeNode(x);

			if (head == nullptr)
			{
				employee->next = employee->prev = nullptr;
				head = tail = employee;
			}
			else
			{
				employee->next = head;
				head->prev = employee;
				employee->prev = nullptr;
				head = employee;
			}
		}
public:
		void ViewEmployeeList(FlowLayoutPanel^ panel)
		{
			EmployeeNode* current = head;

			while (current != nullptr)
			{
				// assign the current employee information to the gui elements.
				
				EmployeeCard^ ecard = gcnew EmployeeCard();//GUI cardcontrol for displaying employee information.
				string name = current->data.full_name;
				int age = current->data.age;
				int salary = current->data.monthly_salary;
				string hiredate = current->data.hire_date;
				string phoneno = current->data.phone_number;
				string position = current->data.position;
				string address = current->data.address;
				string email = current->data.email;


				ecard->setName(name);
				ecard->setImage(RetriveImage(gcnew String(name.c_str())));
				ecard->setAge(age);
				ecard->setSalary(salary);
				ecard->setHiredate(hiredate);
				ecard->setPhoneno(phoneno);
				ecard->setPosition(position);
				ecard->setAddress(address);
				ecard->setEmail(email);

				panel->Controls->Add(ecard);

				// Move to the next employee node
				current = current->next;
			}
		}
	public:
		void EmptyEmployeeList()
		{
			EmployeeNode* current = head;
			if (current != nullptr) {
				while (current != nullptr)
				{
					EmployeeNode* next = current->next;
					delete current;
					current = next;
				}
				head = nullptr;
				tail = nullptr;
			}
			else
				return;
		}

	public:
		Image^ RetriveImage(String^ name)//function to  retrive employee image from db.
		{
			SqlConnection^ connection = gcnew SqlConnection("Data Source=tsede;Initial Catalog=Gym;Integrated Security=True;");

			connection->Open();
			SqlCommand^ cmd = gcnew SqlCommand("SELECT IMG FROM employees where full_name=@name", connection);
			cmd->Parameters->AddWithValue("@name", name);
			cli::array<Byte>^ imageData = (cli::array<Byte>^)cmd->ExecuteScalar();
			Image^ image;
			MemoryStream^ ms = gcnew MemoryStream(imageData);

			image = Image::FromStream(ms);

			return image;
		}

	};

	public  class MemberList
	{
	private:
		MemberNode* head, * tail;

	public:
		MemberList()
		{
			head = nullptr;
			tail = nullptr;
		}
		void AddMemberToList(Member x)
		{
			MemberNode* member = new MemberNode(x);

			if (head == nullptr)
			{
				member->next = member->prev = nullptr;
				head = tail = member;
			}
			else
			{
				member->next = head;
				head->prev = member;
				member->prev = nullptr;
				head = member;
			}
		}
	public:
		void ViewMemberList(FlowLayoutPanel^ panel)
		{
			MemberNode* current = head;

			while (current != nullptr)
			{
				// assign the current employee information to the gui elements.

				MemberCard^ mcard = gcnew MemberCard();//GUI cardcontrol for displaying employee information.
				string name = current->data.full_name;
				int age = current->data.age;
				int duration = current->data.duration;
				string regdate = current->data.registration_date;
				string subscription=current->data.subscription;
				string address = current->data.address;
				string email = current->data.email;
				string phoneno = current->data.phone_number;;

				
				mcard->setName(name);
				mcard->setImage(RetriveImage(gcnew String(name.c_str())));
				mcard->setAge(age);
				mcard->setDuration(duration);
				mcard->setRegistrationdate(regdate);
				mcard->setPhoneno(phoneno);
				mcard->setSubscription(subscription);
				mcard->setAddress(address);
				mcard->setEmail(email);

				panel->Controls->Add(mcard);

				// Move to the next employee node
				current = current->next;
			}
		}
	public:
		Image^ RetriveImage(String^ name)//function to  retrive employee image from db.
		{
			SqlConnection^ connection = gcnew SqlConnection("Data Source=tsede;Initial Catalog=Gym;Integrated Security=True;");

			connection->Open();
			SqlCommand^ cmd = gcnew SqlCommand("SELECT IMG FROM members where full_name=@name", connection);
			cmd->Parameters->AddWithValue("@name", name);
			cli::array<Byte>^ imageData = (cli::array<Byte>^)cmd->ExecuteScalar();
			Image^ image;
			MemoryStream^ ms = gcnew MemoryStream(imageData);

			image = Image::FromStream(ms);

			return image;
		}
	};
}