/*
This Tool Have been designed by

Mohamed Alaa El-deen Mostafa Abd El hameed

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
