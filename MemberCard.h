#pragma once
#include<string>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

namespace Gymmanagment {

	/// <summary>
	/// Summary for MemberCard
	/// </summary>
	public ref class MemberCard : public System::Windows::Forms::UserControl
	{
	public:
		void setImage(Image^ img)
		{
			MemberPctrBx->SizeMode = PictureBoxSizeMode::StretchImage;
			MemberPctrBx->Image = img;

		}
		void setName(string name)
		{
			String^ Name = gcnew String(name.c_str());
			lblMName->Text = Name;
		}
		void setAge(int age)
		{
			String^ Age = Convert::ToString(age);
			lblMAge->Text = Age;
		}
		void setAddress(string address)
		{
			String^ Address = gcnew String(address.c_str());
			lblMAddress->Text = Address;
		}
		void setEmail(string email)
		{
			String^ Email = gcnew String(email.c_str());
			lblMEmail->Text = Email;
		}
		void setRegistrationdate(string reg)
		{
			String^ Reg = gcnew String(reg.c_str());
			lblRegisrationDate->Text = Reg;
		}
		void setPhoneno(string phone)
		{
			String^ Phone = gcnew String(phone.c_str());
			lblMPhone->Text = Phone;
		}
		void setSubscription(string pos)
		{
			String^ Pos = gcnew String(pos.c_str());
			lblSubscription->Text = Pos;
		}
		void setDuration(int salary)
		{
			String^ Salary = Convert::ToString(salary);
			lblDuration->Text = Salary;
		}
	public:
		MemberCard(void)
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
		~MemberCard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblDuration;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lblMPhone;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lblRegisrationDate;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblSubscription;

	private: System::Windows::Forms::Label^ lbl;
	private: System::Windows::Forms::Label^ lblMAddress;
	private: System::Windows::Forms::Label^ lblMEmail;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblMAge;
	private: System::Windows::Forms::Label^ lblMName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ MemberPctrBx;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblDuration = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblMPhone = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblRegisrationDate = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblSubscription = (gcnew System::Windows::Forms::Label());
			this->lbl = (gcnew System::Windows::Forms::Label());
			this->lblMAddress = (gcnew System::Windows::Forms::Label());
			this->lblMEmail = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblMAge = (gcnew System::Windows::Forms::Label());
			this->lblMName = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MemberPctrBx = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MemberPctrBx))->BeginInit();
			this->SuspendLayout();
			// 
			// lblDuration
			// 
			this->lblDuration->AutoSize = true;
			this->lblDuration->Location = System::Drawing::Point(487, 54);
			this->lblDuration->Name = L"lblDuration";
			this->lblDuration->Size = System::Drawing::Size(35, 13);
			this->lblDuration->TabIndex = 33;
			this->lblDuration->Text = L"label3";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.18868F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(397, 48);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 19);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Duration:";
			// 
			// lblMPhone
			// 
			this->lblMPhone->AutoSize = true;
			this->lblMPhone->Location = System::Drawing::Point(487, 23);
			this->lblMPhone->Name = L"lblMPhone";
			this->lblMPhone->Size = System::Drawing::Size(35, 13);
			this->lblMPhone->TabIndex = 31;
			this->lblMPhone->Text = L"label3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.18868F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(397, 19);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 19);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Phone no:";
			// 
			// lblRegisrationDate
			// 
			this->lblRegisrationDate->AutoSize = true;
			this->lblRegisrationDate->Location = System::Drawing::Point(380, 182);
			this->lblRegisrationDate->Name = L"lblRegisrationDate";
			this->lblRegisrationDate->Size = System::Drawing::Size(35, 13);
			this->lblRegisrationDate->TabIndex = 29;
			this->lblRegisrationDate->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.18868F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(230, 178);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 19);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Registration Date:";
			// 
			// lblSubscription
			// 
			this->lblSubscription->AutoSize = true;
			this->lblSubscription->Location = System::Drawing::Point(333, 153);
			this->lblSubscription->Name = L"lblSubscription";
			this->lblSubscription->Size = System::Drawing::Size(35, 13);
			this->lblSubscription->TabIndex = 27;
			this->lblSubscription->Text = L"label3";
			// 
			// lbl
			// 
			this->lbl->AutoSize = true;
			this->lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.18868F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl->Location = System::Drawing::Point(230, 149);
			this->lbl->Name = L"lbl";
			this->lbl->Size = System::Drawing::Size(107, 19);
			this->lbl->TabIndex = 26;
			this->lbl->Text = L"Subscription:";
			// 
			// lblMAddress
			// 
			this->lblMAddress->AutoSize = true;
			this->lblMAddress->Location = System::Drawing::Point(309, 120);
			this->lblMAddress->Name = L"lblMAddress";
			this->lblMAddress->Size = System::Drawing::Size(35, 13);
			this->lblMAddress->TabIndex = 25;
			this->lblMAddress->Text = L"label3";
			// 
			// lblMEmail
			// 
			this->lblMEmail->AutoSize = true;
			this->lblMEmail->Location = System::Drawing::Point(295, 89);
			this->lblMEmail->Name = L"lblMEmail";
			this->lblMEmail->Size = System::Drawing::Size(35, 13);
			this->lblMEmail->TabIndex = 24;
			this->lblMEmail->Text = L"label3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.18868F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(230, 116);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 19);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Address:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.18868F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(230, 85);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 19);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Email:";
			// 
			// lblMAge
			// 
			this->lblMAge->AutoSize = true;
			this->lblMAge->Location = System::Drawing::Point(295, 56);
			this->lblMAge->Name = L"lblMAge";
			this->lblMAge->Size = System::Drawing::Size(35, 13);
			this->lblMAge->TabIndex = 21;
			this->lblMAge->Text = L"label3";
			// 
			// lblMName
			// 
			this->lblMName->AutoSize = true;
			this->lblMName->Location = System::Drawing::Point(295, 23);
			this->lblMName->Name = L"lblMName";
			this->lblMName->Size = System::Drawing::Size(35, 13);
			this->lblMName->TabIndex = 20;
			this->lblMName->Text = L"label3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.18868F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(230, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 19);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Age:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.18868F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(230, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 19);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Name:";
			// 
			// MemberPctrBx
			// 
			this->MemberPctrBx->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->MemberPctrBx->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->MemberPctrBx->Location = System::Drawing::Point(12, 19);
			this->MemberPctrBx->Name = L"MemberPctrBx";
			this->MemberPctrBx->Size = System::Drawing::Size(199, 187);
			this->MemberPctrBx->TabIndex = 17;
			this->MemberPctrBx->TabStop = false;
			// 
			// MemberCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::YellowGreen;
			this->Controls->Add(this->lblDuration);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lblMPhone);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lblRegisrationDate);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblSubscription);
			this->Controls->Add(this->lbl);
			this->Controls->Add(this->lblMAddress);
			this->Controls->Add(this->lblMEmail);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->lblMAge);
			this->Controls->Add(this->lblMName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->MemberPctrBx);
			this->Name = L"MemberCard";
			this->Size = System::Drawing::Size(655, 227);
			this->Load += gcnew System::EventHandler(this, &MemberCard::MemberCard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MemberPctrBx))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MemberCard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
