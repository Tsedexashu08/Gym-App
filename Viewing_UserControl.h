#pragma once
#include <msclr/marshal_cppstd.h>
#include"Entities.h"
#include"DataBaseFunctions.h"
#include"GUI_Functions.h"
#include"Functions.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Gymmanagment {

	/// <summary>
	/// Summary for Viewing_UserControl
	/// </summary>
	public ref class Viewing_UserControl : public System::Windows::Forms::UserControl
	{
		EmployeeList* employee_list = new EmployeeList();
		MemberList* member_list = new MemberList();
	public:
		Viewing_UserControl(void)
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
		~Viewing_UserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Panel^ viewPanel;
	private: System::Windows::Forms::FlowLayoutPanel^ viewLayout;
	private: System::Windows::Forms::Button^ button1;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->viewPanel = (gcnew System::Windows::Forms::Panel());
			this->viewLayout = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->viewPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(183, 365);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(354, 35);
			this->button2->TabIndex = 36;
			this->button2->Text = L"View Employees";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Viewing_UserControl::button2_Click);
			// 
			// viewPanel
			// 
			this->viewPanel->AccessibleName = L"viewPanel";
			this->viewPanel->AutoScroll = true;
			this->viewPanel->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->viewPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->viewPanel->Controls->Add(this->viewLayout);
			this->viewPanel->Location = System::Drawing::Point(19, 41);
			this->viewPanel->Name = L"viewPanel";
			this->viewPanel->Size = System::Drawing::Size(663, 309);
			this->viewPanel->TabIndex = 35;
			// 
			// viewLayout
			// 
			this->viewLayout->AutoScroll = true;
			this->viewLayout->Location = System::Drawing::Point(4, 3);
			this->viewLayout->Name = L"viewLayout";
			this->viewLayout->Size = System::Drawing::Size(655, 227);
			this->viewLayout->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(183, 431);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(354, 35);
			this->button1->TabIndex = 37;
			this->button1->Text = L"View Members";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Viewing_UserControl::button1_Click);
			// 
			// Viewing_UserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->viewPanel);
			this->Name = L"Viewing_UserControl";
			this->Size = System::Drawing::Size(706, 536);
			this->Load += gcnew System::EventHandler(this, &Viewing_UserControl::Viewing_UserControl_Load);
			this->viewPanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Viewing_UserControl_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		employee_list->EmptyEmployeeList();
		DataBaseFunctions^ db = gcnew DataBaseFunctions();
		db->FetchNodeData(employee_list);//fecthes the data in the db and stores in the list.
		db->FetchMemberNodeData(member_list);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		viewLayout->Controls->Clear();
		employee_list->ViewEmployeeList(viewLayout);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		viewLayout->Controls->Clear();
		member_list->ViewMemberList(viewLayout);
		
	}
};
}
