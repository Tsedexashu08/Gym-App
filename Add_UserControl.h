#pragma once

#include <msclr/marshal_cppstd.h>
#include"Entities.h"
#include"DataBaseFunctions.h"
#include"GUI_Functions.h"
#include"Functions.h"





using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace Gymmanagment {



	/// <summary>
	/// Summary for Add_UserControl
	/// </summary>


	public ref class Add_UserControl : public System::Windows::Forms::UserControl
	{
		 EmployeeList* employee_list=new EmployeeList();
		 MemberList* member_list=new MemberList();
	public:
		// MemberList^ member_list;

	public:
		Add_UserControl(void)
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
		~Add_UserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ AddEmpTab;
	private: System::Windows::Forms::TabPage^ AddMemberTab;
	private: System::Windows::Forms::Button^ btnUpload;
	public: System::Windows::Forms::PictureBox^ EmpPctrBx;
	private:

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ rbtnCleaningStaff;
	private: System::Windows::Forms::RadioButton^ rbtnTrainer;
	private: System::Windows::Forms::RadioButton^ rbtnManager;
	private: System::Windows::Forms::TextBox^ txtPnoneNo;


	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::TextBox^ txtEmail;




	private: System::Windows::Forms::TextBox^ txtName;

	private: System::Windows::Forms::RadioButton^ rbtnSecretary;
	private: System::Windows::Forms::NumericUpDown^ txtAge;
	private: System::Windows::Forms::NumericUpDown^ txtDuration;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::NumericUpDown^ txtMeMberAge;
	private: System::Windows::Forms::TextBox^ txtMPhoneNo;


	private: System::Windows::Forms::TextBox^ txtMAddress;
	private: System::Windows::Forms::TextBox^ txtMEmail;


	private: System::Windows::Forms::TextBox^ txtMemberName;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::PictureBox^ Memberpctrbx;

	private: System::Windows::Forms::Button^ btnAddMember;
	private: System::Windows::Forms::Button^ btnAddEmp;
	private: System::Windows::Forms::ComboBox^ txtSubcription;
	private: System::Windows::Forms::Label^ label12;



	private: System::Windows::Forms::Button^ button1;










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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->AddEmpTab = (gcnew System::Windows::Forms::TabPage());
			this->btnAddEmp = (gcnew System::Windows::Forms::Button());
			this->txtAge = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtPnoneNo = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnSecretary = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnCleaningStaff = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnTrainer = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnManager = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnUpload = (gcnew System::Windows::Forms::Button());
			this->EmpPctrBx = (gcnew System::Windows::Forms::PictureBox());
			this->AddMemberTab = (gcnew System::Windows::Forms::TabPage());
			this->txtSubcription = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->btnAddMember = (gcnew System::Windows::Forms::Button());
			this->txtDuration = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtMeMberAge = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtMPhoneNo = (gcnew System::Windows::Forms::TextBox());
			this->txtMAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtMEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtMemberName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Memberpctrbx = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->AddEmpTab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtAge))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EmpPctrBx))->BeginInit();
			this->AddMemberTab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtDuration))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtMeMberAge))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Memberpctrbx))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl1->Controls->Add(this->AddEmpTab);
			this->tabControl1->Controls->Add(this->AddMemberTab);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(3, 20);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(700, 513);
			this->tabControl1->TabIndex = 0;
			// 
			// AddEmpTab
			// 
			this->AddEmpTab->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->AddEmpTab->Controls->Add(this->btnAddEmp);
			this->AddEmpTab->Controls->Add(this->txtAge);
			this->AddEmpTab->Controls->Add(this->txtPnoneNo);
			this->AddEmpTab->Controls->Add(this->txtAddress);
			this->AddEmpTab->Controls->Add(this->txtEmail);
			this->AddEmpTab->Controls->Add(this->txtName);
			this->AddEmpTab->Controls->Add(this->groupBox1);
			this->AddEmpTab->Controls->Add(this->label5);
			this->AddEmpTab->Controls->Add(this->label4);
			this->AddEmpTab->Controls->Add(this->label3);
			this->AddEmpTab->Controls->Add(this->label2);
			this->AddEmpTab->Controls->Add(this->label1);
			this->AddEmpTab->Controls->Add(this->btnUpload);
			this->AddEmpTab->Controls->Add(this->EmpPctrBx);
			this->AddEmpTab->Location = System::Drawing::Point(4, 33);
			this->AddEmpTab->Name = L"AddEmpTab";
			this->AddEmpTab->Padding = System::Windows::Forms::Padding(3);
			this->AddEmpTab->Size = System::Drawing::Size(692, 476);
			this->AddEmpTab->TabIndex = 0;
			this->AddEmpTab->Text = L"Add Employee";
			this->AddEmpTab->UseVisualStyleBackColor = true;
			this->AddEmpTab->Click += gcnew System::EventHandler(this, &Add_UserControl::AddEmpTab_Click);
			// 
			// btnAddEmp
			// 
			this->btnAddEmp->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnAddEmp->Location = System::Drawing::Point(17, 399);
			this->btnAddEmp->Name = L"btnAddEmp";
			this->btnAddEmp->Size = System::Drawing::Size(243, 62);
			this->btnAddEmp->TabIndex = 15;
			this->btnAddEmp->Text = L"Add Employee";
			this->btnAddEmp->UseVisualStyleBackColor = false;
			this->btnAddEmp->Click += gcnew System::EventHandler(this, &Add_UserControl::btnAddEmp_Click);
			// 
			// txtAge
			// 
			this->txtAge->Location = System::Drawing::Point(430, 67);
			this->txtAge->Name = L"txtAge";
			this->txtAge->Size = System::Drawing::Size(120, 27);
			this->txtAge->TabIndex = 14;
			// 
			// txtPnoneNo
			// 
			this->txtPnoneNo->Location = System::Drawing::Point(430, 170);
			this->txtPnoneNo->Name = L"txtPnoneNo";
			this->txtPnoneNo->Size = System::Drawing::Size(249, 27);
			this->txtPnoneNo->TabIndex = 13;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(427, 100);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(249, 27);
			this->txtAddress->TabIndex = 11;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(430, 135);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(249, 27);
			this->txtEmail->TabIndex = 10;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(430, 34);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(249, 27);
			this->txtName->TabIndex = 9;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbtnSecretary);
			this->groupBox1->Controls->Add(this->rbtnCleaningStaff);
			this->groupBox1->Controls->Add(this->rbtnTrainer);
			this->groupBox1->Controls->Add(this->rbtnManager);
			this->groupBox1->Location = System::Drawing::Point(334, 240);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 153);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Position";
			// 
			// rbtnSecretary
			// 
			this->rbtnSecretary->AutoSize = true;
			this->rbtnSecretary->Location = System::Drawing::Point(41, 120);
			this->rbtnSecretary->Name = L"rbtnSecretary";
			this->rbtnSecretary->Size = System::Drawing::Size(103, 25);
			this->rbtnSecretary->TabIndex = 3;
			this->rbtnSecretary->TabStop = true;
			this->rbtnSecretary->Text = L"Secretary";
			this->rbtnSecretary->UseVisualStyleBackColor = true;
			// 
			// rbtnCleaningStaff
			// 
			this->rbtnCleaningStaff->AutoSize = true;
			this->rbtnCleaningStaff->Location = System::Drawing::Point(41, 89);
			this->rbtnCleaningStaff->Name = L"rbtnCleaningStaff";
			this->rbtnCleaningStaff->Size = System::Drawing::Size(146, 25);
			this->rbtnCleaningStaff->TabIndex = 2;
			this->rbtnCleaningStaff->TabStop = true;
			this->rbtnCleaningStaff->Text = L"Cleaning Staff";
			this->rbtnCleaningStaff->UseVisualStyleBackColor = true;
			// 
			// rbtnTrainer
			// 
			this->rbtnTrainer->AutoSize = true;
			this->rbtnTrainer->Location = System::Drawing::Point(41, 61);
			this->rbtnTrainer->Name = L"rbtnTrainer";
			this->rbtnTrainer->Size = System::Drawing::Size(91, 25);
			this->rbtnTrainer->TabIndex = 1;
			this->rbtnTrainer->TabStop = true;
			this->rbtnTrainer->Text = L"Trainer";
			this->rbtnTrainer->UseVisualStyleBackColor = true;
			// 
			// rbtnManager
			// 
			this->rbtnManager->AutoSize = true;
			this->rbtnManager->Location = System::Drawing::Point(41, 30);
			this->rbtnManager->Name = L"rbtnManager";
			this->rbtnManager->Size = System::Drawing::Size(98, 25);
			this->rbtnManager->TabIndex = 0;
			this->rbtnManager->TabStop = true;
			this->rbtnManager->Text = L"Manager";
			this->rbtnManager->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(293, 173);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 21);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Phone Number:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(355, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 21);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Email:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(343, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 21);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Address:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(369, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Age:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(312, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Full Name:";
			// 
			// btnUpload
			// 
			this->btnUpload->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnUpload->Location = System::Drawing::Point(17, 343);
			this->btnUpload->Name = L"btnUpload";
			this->btnUpload->Size = System::Drawing::Size(259, 50);
			this->btnUpload->TabIndex = 1;
			this->btnUpload->Text = L"Upload";
			this->btnUpload->UseVisualStyleBackColor = false;
			this->btnUpload->Click += gcnew System::EventHandler(this, &Add_UserControl::btnUpload_Click);
			// 
			// EmpPctrBx
			// 
			this->EmpPctrBx->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->EmpPctrBx->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->EmpPctrBx->Location = System::Drawing::Point(17, 38);
			this->EmpPctrBx->Name = L"EmpPctrBx";
			this->EmpPctrBx->Size = System::Drawing::Size(259, 298);
			this->EmpPctrBx->TabIndex = 0;
			this->EmpPctrBx->TabStop = false;
			// 
			// AddMemberTab
			// 
			this->AddMemberTab->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->AddMemberTab->Controls->Add(this->txtSubcription);
			this->AddMemberTab->Controls->Add(this->label12);
			this->AddMemberTab->Controls->Add(this->btnAddMember);
			this->AddMemberTab->Controls->Add(this->txtDuration);
			this->AddMemberTab->Controls->Add(this->label11);
			this->AddMemberTab->Controls->Add(this->txtMeMberAge);
			this->AddMemberTab->Controls->Add(this->txtMPhoneNo);
			this->AddMemberTab->Controls->Add(this->txtMAddress);
			this->AddMemberTab->Controls->Add(this->txtMEmail);
			this->AddMemberTab->Controls->Add(this->txtMemberName);
			this->AddMemberTab->Controls->Add(this->label6);
			this->AddMemberTab->Controls->Add(this->label7);
			this->AddMemberTab->Controls->Add(this->label8);
			this->AddMemberTab->Controls->Add(this->label9);
			this->AddMemberTab->Controls->Add(this->label10);
			this->AddMemberTab->Controls->Add(this->button1);
			this->AddMemberTab->Controls->Add(this->Memberpctrbx);
			this->AddMemberTab->Location = System::Drawing::Point(4, 33);
			this->AddMemberTab->Name = L"AddMemberTab";
			this->AddMemberTab->Padding = System::Windows::Forms::Padding(3);
			this->AddMemberTab->Size = System::Drawing::Size(692, 476);
			this->AddMemberTab->TabIndex = 1;
			this->AddMemberTab->Text = L"Add Member";
			this->AddMemberTab->UseVisualStyleBackColor = true;
			this->AddMemberTab->Click += gcnew System::EventHandler(this, &Add_UserControl::AddMemberTab_Click);
			// 
			// txtSubcription
			// 
			this->txtSubcription->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txtSubcription->FormattingEnabled = true;
			this->txtSubcription->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Basic Package", L"Premium Package" });
			this->txtSubcription->Location = System::Drawing::Point(426, 295);
			this->txtSubcription->Name = L"txtSubcription";
			this->txtSubcription->Size = System::Drawing::Size(252, 29);
			this->txtSubcription->TabIndex = 32;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(301, 295);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(119, 21);
			this->label12->TabIndex = 31;
			this->label12->Text = L"Subscription:";
			// 
			// btnAddMember
			// 
			this->btnAddMember->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnAddMember->Location = System::Drawing::Point(175, 370);
			this->btnAddMember->Name = L"btnAddMember";
			this->btnAddMember->Size = System::Drawing::Size(332, 36);
			this->btnAddMember->TabIndex = 30;
			this->btnAddMember->Text = L"Add Member";
			this->btnAddMember->UseVisualStyleBackColor = false;
			this->btnAddMember->Click += gcnew System::EventHandler(this, &Add_UserControl::btnAddMember_Click);
			// 
			// txtDuration
			// 
			this->txtDuration->Location = System::Drawing::Point(429, 255);
			this->txtDuration->Name = L"txtDuration";
			this->txtDuration->Size = System::Drawing::Size(120, 27);
			this->txtDuration->TabIndex = 29;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(236, 257);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(187, 21);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Duration(in months):";
			// 
			// txtMeMberAge
			// 
			this->txtMeMberAge->Location = System::Drawing::Point(429, 112);
			this->txtMeMberAge->Name = L"txtMeMberAge";
			this->txtMeMberAge->Size = System::Drawing::Size(120, 27);
			this->txtMeMberAge->TabIndex = 27;
			// 
			// txtMPhoneNo
			// 
			this->txtMPhoneNo->Location = System::Drawing::Point(429, 215);
			this->txtMPhoneNo->Name = L"txtMPhoneNo";
			this->txtMPhoneNo->Size = System::Drawing::Size(249, 27);
			this->txtMPhoneNo->TabIndex = 26;
			// 
			// txtMAddress
			// 
			this->txtMAddress->Location = System::Drawing::Point(429, 145);
			this->txtMAddress->Name = L"txtMAddress";
			this->txtMAddress->Size = System::Drawing::Size(249, 27);
			this->txtMAddress->TabIndex = 25;
			// 
			// txtMEmail
			// 
			this->txtMEmail->Location = System::Drawing::Point(429, 180);
			this->txtMEmail->Name = L"txtMEmail";
			this->txtMEmail->Size = System::Drawing::Size(249, 27);
			this->txtMEmail->TabIndex = 24;
			// 
			// txtMemberName
			// 
			this->txtMemberName->Location = System::Drawing::Point(429, 79);
			this->txtMemberName->Name = L"txtMemberName";
			this->txtMemberName->Size = System::Drawing::Size(249, 27);
			this->txtMemberName->TabIndex = 23;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(292, 218);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(137, 21);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Phone Number:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(354, 183);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 21);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Email:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(342, 148);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 21);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Address:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(368, 112);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 21);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Age:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(324, 73);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 21);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Full Name:";
			// 
			// Memberpctrbx
			// 
			this->Memberpctrbx->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Memberpctrbx->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Memberpctrbx->Location = System::Drawing::Point(19, 73);
			this->Memberpctrbx->Name = L"Memberpctrbx";
			this->Memberpctrbx->Size = System::Drawing::Size(213, 185);
			this->Memberpctrbx->TabIndex = 15;
			this->Memberpctrbx->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Location = System::Drawing::Point(56, 264);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 36);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Upload";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Add_UserControl::button1_Click);
			// 
			// Add_UserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->tabControl1);
			this->Name = L"Add_UserControl";
			this->Size = System::Drawing::Size(706, 536);
			this->Load += gcnew System::EventHandler(this, &Add_UserControl::Add_UserControl_Load);
			this->tabControl1->ResumeLayout(false);
			this->AddEmpTab->ResumeLayout(false);
			this->AddEmpTab->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtAge))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EmpPctrBx))->EndInit();
			this->AddMemberTab->ResumeLayout(false);
			this->AddMemberTab->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtDuration))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtMeMberAge))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Memberpctrbx))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		string ConvertToString(String^ str) {
			return msclr::interop::marshal_as<std::string>(str);
		}
	public:
		String^ getSelected() {
			if (rbtnCleaningStaff->Checked)
				return rbtnCleaningStaff->Text;
			else if (rbtnManager->Checked)
				return rbtnManager->Text;
			else if (rbtnSecretary->Checked)
				return rbtnSecretary->Text;
			else if (rbtnTrainer->Checked)
				return rbtnTrainer->Text;

		}
	public:
		Employee createEmployee()
		{
			Employee employee;

			employee.full_name = ConvertToString(txtName->Text);
			employee.age = Decimal::ToInt32(txtAge->Value);
			employee.email = ConvertToString(txtEmail->Text);
			employee.address = ConvertToString(txtAddress->Text);
			employee.position = ConvertToString(getSelected());
			employee.phone_number = ConvertToString(txtPnoneNo->Text);

			return employee;
		}
	public:
			Member createMember()
			{
				Member member;

				member.full_name = ConvertToString(txtMemberName->Text);
				member.age = Decimal::ToInt32(txtMeMberAge->Value);
				member.email = ConvertToString(txtMEmail->Text);
				member.address = ConvertToString(txtMAddress->Text);
				member.subscription = ConvertToString(txtSubcription->SelectedText);
				member.phone_number = ConvertToString(txtMPhoneNo->Text);
				member.duration = Decimal::ToInt32(txtDuration->Value);
				return member;
			}
	private: System::Void AddMemberTab_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btnAddEmp_Click(System::Object^ sender, System::EventArgs^ e)
	{
		employee_list->AddEmployeeToList(createEmployee());//adds the newly created employee to the list.
		DataBaseFunctions^ db_func=gcnew DataBaseFunctions();
		db_func->SaveEmployee(createEmployee(), EmpPctrBx->Image);
		MessageBox::Show("Employee Added Succesfully");
	}
	private: System::Void btnUpload_Click(System::Object^ sender, System::EventArgs^ e)
	{
		GUI_Functions^ gui = gcnew GUI_Functions();
		gui->SetImage(EmpPctrBx);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		GUI_Functions^ gui = gcnew GUI_Functions();
		gui->SetImage(Memberpctrbx);
	}
	private: System::Void btnAddMember_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		member_list->AddMemberToList(createMember());
		DataBaseFunctions^ db_func = gcnew DataBaseFunctions();
		db_func->SaveMember(createMember(), Memberpctrbx->Image);
		MessageBox::Show("Member Added Succesfully");
	}
	private: System::Void AddEmpTab_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{

	
}
private: System::Void Add_UserControl_Load(System::Object^ sender, System::EventArgs^ e) 
{
	employee_list->EmptyEmployeeList();
	DataBaseFunctions^ db = gcnew DataBaseFunctions();
	db->FetchNodeData(employee_list);//fecthes the data in the db and stores in the list.
}
};
}
