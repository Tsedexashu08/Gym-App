#pragma once
#include"Add_UserControl.h"
#include"Delete_UserControl.h"
#include"Update_UserControl.h"
#include"Search_UserControl.h"
#include"Viewing_UserControl.h"

namespace Gymmanagment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HomePage
	/// </summary>
	public ref class HomePage : public System::Windows::Forms::Form
	{
	public:
		HomePage(void)
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
		~HomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnView;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomePage::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnView = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(-5, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(303, 637);
			this->panel1->TabIndex = 0;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(321, 12);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(116, 32);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &HomePage::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(443, 12);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(116, 32);
			this->btnUpdate->TabIndex = 2;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &HomePage::btnUpdate_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(685, 12);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(116, 32);
			this->btnSearch->TabIndex = 4;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &HomePage::btnSearch_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(563, 12);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(116, 32);
			this->btnDelete->TabIndex = 3;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &HomePage::btnDelete_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Location = System::Drawing::Point(321, 69);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(706, 536);
			this->panel2->TabIndex = 5;
			// 
			// btnView
			// 
			this->btnView->Location = System::Drawing::Point(807, 12);
			this->btnView->Name = L"btnView";
			this->btnView->Size = System::Drawing::Size(116, 32);
			this->btnView->TabIndex = 6;
			this->btnView->Text = L"View";
			this->btnView->UseVisualStyleBackColor = true;
			this->btnView->Click += gcnew System::EventHandler(this, &HomePage::btnView_Click);
			// 
			// HomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1060, 617);
			this->Controls->Add(this->btnView);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"HomePage";
			this->Text = L"HomePage";
			this->Load += gcnew System::EventHandler(this, &HomePage::HomePage_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->panel2->Controls->Clear();
		Add_UserControl^ addingPage = gcnew Add_UserControl();
		this->panel2->Controls->Add(addingPage);
	}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->panel2->Controls->Clear();
	Delete_UserControl^ DeletingPage = gcnew Delete_UserControl();
	this->panel2->Controls->Add(DeletingPage);
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Update_UserControl^ UpdatingPage = gcnew Update_UserControl();
	this->panel2->Controls->Clear();
	this->panel2->Controls->Add(UpdatingPage);
}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Search_UserControl^ SearchingPage = gcnew Search_UserControl();
	this->panel2->Controls->Clear();
	this->panel2->Controls->Add(SearchingPage);
}
private: System::Void HomePage_Load(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void btnView_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Viewing_UserControl^ viewingPage = gcnew Viewing_UserControl();
	this->panel2->Controls->Clear();
	this->panel2->Controls->Add(viewingPage);
}
};
}
