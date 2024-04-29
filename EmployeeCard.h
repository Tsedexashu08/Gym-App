#pragma once
#include<string>




using namespace System;
using namespace std;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Drawing;
using namespace System::IO;


namespace Gymmanagment {

	/// <summary>
	/// Summary for EmployeeCard
	/// </summary>
	public ref class EmployeeCard : public System::Windows::Forms::UserControl
	{
	public:
		void setImage(Image^ img) 
		{
			empPctrBx->SizeMode = PictureBoxSizeMode::StretchImage;
			empPctrBx->Image = img;

		}
		void setName(string name) 
		{
			String^ Name = gcnew String(name.c_str());
			lblName->Text = Name;
		}
		void setAge(int age)
		{
			String^ Age = Convert::ToString(age);
			lblAge->Text = Age;
		}
		void setAddress(string address)
		{
			String^ Address = gcnew String(address.c_str());
			lblAddress->Text = Address;
		}
		void setEmail(string email)
		{
			String^ Email = gcnew String(email.c_str());
			lblEmail->Text = Email;
		}
		void setHiredate(string hire)
		{
			String^ Hire = gcnew String(hire.c_str());
			lblHireDate->Text = Hire;
		}
		void setPhoneno(string phone)
		{
			String^ Phone = gcnew String(phone.c_str());
			lblPhone->Text = Phone;
		}
		void setPosition(string pos)
		{
			String^ Pos = gcnew String(pos.c_str());
			lblPosition->Text = Pos;
		}
		void setSalary(int salary)
		{
			String^ Salary = Convert::ToString(salary);
			lblSalary->Text = Salary;
		}

	public:
		EmployeeCard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EmployeeCard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ empPctrBx;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblAge;
	private: System::Windows::Forms::Label^ lblAddress;

	private: System::Windows::Forms::Label^ lblEmail;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblPosition;

	private: System::Windows::Forms::Label^ lbl;
	private: System::Windows::Forms::Label^ lblHireDate;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblPhone;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lblSalary;
	private: System::Windows::Forms::Label^ label8;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->empPctrBx = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblAge = (gcnew System::Windows::Forms::Label());
			this->lblAddress = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblPosition = (gcnew System::Windows::Forms::Label());
			this->lbl = (gcnew System::Windows::Forms::Label());
			this->lblHireDate = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblSalary = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->empPctrBx))->BeginInit();
			this->SuspendLayout();
			// 
			// empPctrBx
			// 
			this->empPctrBx->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->empPctrBx->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->empPctrBx->Location = System::Drawing::Point(19, 24);
			this->empPctrBx->Name = L"empPctrBx";
			this->empPctrBx->Size = System::Drawing::Size(199, 187);
			this->empPctrBx->TabIndex = 0;
			this->empPctrBx->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.18868F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(237, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.18868F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(237, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Age:";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(302, 28);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(35, 13);
			this->lblName->TabIndex = 3;
			this->lblName->Text = L"label3";
			// 
			// lblAge
			// 
			this->lblAge->AutoSize = true;
			this->lblAge->Location = System::Drawing::Point(302, 61);
			this->lblAge->Name = L"lblAge";
			this->lblAge->Size = System::Drawing::Size(35, 13);
			this->lblAge->TabIndex = 4;
			this->lblAge->Text = L"label3";
			// 
			// lblAddress
			// 
			this->lblAddress->AutoSize = true;
			this->lblAddress->Location = System::Drawing::Point(316, 125);
			this->lblAddress->Name = L"lblAddress";
			this->lblAddress->Size = System::Drawing::Size(35, 13);
			this->lblAddress->TabIndex = 8;
			this->lblAddress->Text = L"label3";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Location = System::Drawing::Point(302, 94);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(35, 13);
			this->lblEmail->TabIndex = 7;
			this->lblEmail->Text = L"label3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.18868F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(237, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 19);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Address:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.18868F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(237, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 19);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Email:";
			// 
			// lblPosition
			// 
			this->lblPosition->AutoSize = true;
			this->lblPosition->Location = System::Drawing::Point(316, 160);
			this->lblPosition->Name = L"lblPosition";
			this->lblPosition->Size = System::Drawing::Size(35, 13);
			this->lblPosition->TabIndex = 10;
			this->lblPosition->Text = L"label3";
			// 
			// lbl
			// 
			this->lbl->AutoSize = true;
			this->lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.18868F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl->Location = System::Drawing::Point(237, 154);
			this->lbl->Name = L"lbl";
			this->lbl->Size = System::Drawing::Size(74, 19);
			this->lbl->TabIndex = 9;
			this->lbl->Text = L"Position:";
			// 
			// lblHireDate
			// 
			this->lblHireDate->AutoSize = true;
			this->lblHireDate->Location = System::Drawing::Point(327, 187);
			this->lblHireDate->Name = L"lblHireDate";
			this->lblHireDate->Size = System::Drawing::Size(35, 13);
			this->lblHireDate->TabIndex = 12;
			this->lblHireDate->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.18868F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(237, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 19);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Hire Date:";
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Location = System::Drawing::Point(494, 28);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(35, 13);
			this->lblPhone->TabIndex = 14;
			this->lblPhone->Text = L"label3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.18868F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(404, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 19);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Phone no:";
			// 
			// lblSalary
			// 
			this->lblSalary->AutoSize = true;
			this->lblSalary->Location = System::Drawing::Point(494, 59);
			this->lblSalary->Name = L"lblSalary";
			this->lblSalary->Size = System::Drawing::Size(35, 13);
			this->lblSalary->TabIndex = 16;
			this->lblSalary->Text = L"label3";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.18868F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(429, 55);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 19);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Salary:";
			// 
			// EmployeeCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Controls->Add(this->lblSalary);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lblPhone);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lblHireDate);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblPosition);
			this->Controls->Add(this->lbl);
			this->Controls->Add(this->lblAddress);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->lblAge);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->empPctrBx);
			this->Name = L"EmployeeCard";
			this->Size = System::Drawing::Size(655, 227);
			this->Load += gcnew System::EventHandler(this, &EmployeeCard::EmployeeCard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->empPctrBx))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private: System::Void EmployeeCard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
