/*
This Tool Have been designed by

Mohamed Alaa El-deen Mostafa Abd El hameed
Sec: 1
ID: 18315
Course Name: Digital Image Processing

submitted to:

Course Instructor
Ass. Prof. Dr. Sabry
Assistant Eng. Manar Fatooh

*/

#include "MyForm.h"
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace GUI2; // Where FDWE Enter your project name


[STAThreadAttribute]
int main()//array<System::String^>^ args //cli::array<System::String^>^ args
{
	// Create the main window and run it
	Application::Run(gcnew MyForm()); //where MyForm() Enter your main form name with () [Bracket]
	return 0;
}