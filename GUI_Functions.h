#pragma once
#include <string>
#include <msclr/marshal_cppstd.h>

using namespace std;
using namespace System::Windows::Forms;
using namespace System;
using namespace System::IO;
using namespace System::Drawing;
public ref class GUI_Functions
{
public:
	void SetImage(PictureBox^ pictureBox)//Function for setting images in a Picture Box.
	{
		//class for prompting the user to open file from a directory.
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Filter = "Image Files|*.jpg;*.jpeg;*.png;*.gif;*.bmp";

		if (openFileDialog->ShowDialog() == DialogResult::OK)
		{
			// User selected image file
			String^ imagePath = (openFileDialog->FileName);

			// Load the image into a Bitmap object
			Bitmap^ image = gcnew Bitmap(imagePath);


			pictureBox->Image = image;

			pictureBox->SizeMode = PictureBoxSizeMode::StretchImage;

		}
	}
public:
	string ConvertToString(String^ str) {
		return msclr::interop::marshal_as<std::string>(str);
	}

	
		


};

