#pragma once
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
	/// Summary for Delete_UserControl
	/// </summary>
	public ref class Delete_UserControl : public System::Windows::Forms::UserControl
	{
	   EmployeeList* employee_list = new EmployeeList();
	public:
		Delete_UserControl(void)
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
		~Delete_UserControl()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// Delete_UserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Name = L"Delete_UserControl";
			this->Size = System::Drawing::Size(706, 536);
			this->Load += gcnew System::EventHandler(this, &Delete_UserControl::Delete_UserControl_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Delete_UserControl_Load(System::Object^ sender, System::EventArgs^ e)
	{
		DataBaseFunctions^ db = gcnew DataBaseFunctions();
		db->FetchNodeData(this->employee_list);

	}



	};
}