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


#pragma once
#include "MyForm.h"
#include <opencv2/opencv.hpp>
#include <msclr/marshal.h>

using namespace msclr::interop;
using namespace cv;
using namespace std;


// define some constants
Mat  src , temp , grayImg , grayOrg, original , backblind ,frontblind , blinded , bitplnImg;

////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace GUI2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;


	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TrackBar^ trackBar1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button16;




	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TrackBar^ trackBar3;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TrackBar^ trackBar4;
	private: System::Windows::Forms::GroupBox^ groupBox6;

	private: System::Windows::Forms::Button^ button20;






	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button21;

	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TrackBar^ trackBar6;
	private: System::Windows::Forms::GroupBox^ groupBox11;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::GroupBox^ groupBox12;
	private: System::Windows::Forms::GroupBox^ groupBox13;
	private: System::Windows::Forms::GroupBox^ groupBox14;


	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::ToolTip^ toolTip1;
private: System::Windows::Forms::ToolTip^ toolTip2;
private: System::Windows::Forms::ToolTip^ toolTip4;
private: System::Windows::Forms::ToolTip^ toolTip3;
private: System::Windows::Forms::ToolTip^ toolTip5;
private: System::Windows::Forms::ToolTip^ toolTip6;

private: System::Windows::Forms::ToolTip^ toolTip8;
private: System::Windows::Forms::ToolTip^ toolTip7;
private: System::Windows::Forms::ToolTip^ toolTip9;
private: System::Windows::Forms::ToolTip^ toolTip11;
private: System::Windows::Forms::ToolTip^ toolTip10;
private: System::Windows::Forms::TrackBar^ trackBar7;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::ToolTip^ toolTip12;
private: System::Windows::Forms::GroupBox^ groupBox4;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::ToolTip^ toolTip13;
private: System::Windows::Forms::ToolTip^ toolTip14;
private: System::Windows::Forms::ToolTip^ toolTip15;
private: System::Windows::Forms::ToolTip^ toolTip16;
private: System::Windows::Forms::ToolTip^ toolTip17;
private: System::Windows::Forms::ToolTip^ toolTip18;
private: System::Windows::Forms::ToolTip^ toolTip19;
private: System::Windows::Forms::ToolTip^ toolTip22;
private: System::Windows::Forms::ToolTip^ toolTip21;
private: System::Windows::Forms::ToolTip^ toolTip20;
private: System::Windows::Forms::ToolTip^ toolTip23;
private: System::Windows::Forms::ToolTip^ toolTip25;
private: System::Windows::Forms::ToolTip^ toolTip24;
private: System::Windows::Forms::ToolTip^ toolTip26;
private: System::Windows::Forms::ToolTip^ toolTip27;
private: System::Windows::Forms::ToolTip^ toolTip28;
private: System::Windows::Forms::ToolTip^ toolTip29;
private: System::Windows::Forms::ToolTip^ toolTip30;
private: System::Windows::Forms::ToolTip^ toolTip32;
private: System::Windows::Forms::ToolTip^ toolTip31;
private: System::Windows::Forms::ToolTip^ toolTip33;
private: System::Windows::Forms::ToolTip^ toolTip34;
private: System::Windows::Forms::ToolTip^ toolTip35;
private: System::Windows::Forms::ToolTip^ toolTip36;
private: System::Windows::Forms::ToolTip^ toolTip37;
private: System::Windows::Forms::ToolTip^ toolTip38;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::ToolTip^ toolTip39;



	private: System::ComponentModel::IContainer^ components;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->trackBar6 = (gcnew System::Windows::Forms::TrackBar());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->trackBar7 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip3 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip4 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip5 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip6 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip8 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip7 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip9 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip10 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip11 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip12 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->toolTip13 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip14 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip15 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip16 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip17 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip18 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip19 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip20 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip21 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip22 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip23 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip24 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip25 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip26 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip27 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip28 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip29 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip30 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip31 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip32 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip33 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip34 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip35 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip36 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip37 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip38 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip39 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->BeginInit();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			this->groupBox14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar7))->BeginInit();
			this->groupBox11->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(14, 64);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 762);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->toolTip6->SetToolTip(this->pictureBox1, L"The selected image (original image)");
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(14, 20);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 27);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Open";
			this->toolTip1->SetToolTip(this->button1, L"Open an image to make a processing on it");
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(150, 22);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 80);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Flip Around XY-axis";
			this->toolTip18->SetToolTip(this->button2, L"Flip the image with flip code = -1");
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(95, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(405, 24);
			this->textBox1->TabIndex = 4;
			this->toolTip2->SetToolTip(this->textBox1, L"The directory of the selected image");
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(78, 22);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(66, 80);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Flip Around   Y-axis";
			this->toolTip17->SetToolTip(this->button3, L"Flip the image with flip code = 1\r\n");
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(6, 22);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(66, 80);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Flip Around   X-axis";
			this->toolTip16->SetToolTip(this->button4, L"Flip the image with flip code = 0");
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(222, 22);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 47);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Histogram Equalization";
			this->toolTip25->SetToolTip(this->button5, L"It Is a method which increases the dynamic range of the gray levels in a low\r\ncon"
				L"trast image to cover the full range of gray levels in order to improve\r\nimage co"
				L"ntrast.");
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(222, 73);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 29);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Negative";
			this->toolTip9->SetToolTip(this->button6, L"Convert the image to Negative.\r\nUsed for enhancing white or grey detail embedded "
				L"in\r\ndark regions of an image.");
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(194, 15);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(46, 26);
			this->button7->TabIndex = 9;
			this->button7->Text = L"reset";
			this->toolTip5->SetToolTip(this->button7, L"reset all performed processing");
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button10
			// 
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(6, 106);
			this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(111, 47);
			this->button10->TabIndex = 12;
			this->button10->Text = L"Log Transformation";
			this->toolTip27->SetToolTip(this->button10, L"Used to expand values of dark pixels, while compressing\r\nhigher-level values.");
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(6, 45);
			this->trackBar1->Maximum = 50;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(192, 56);
			this->trackBar1->TabIndex = 13;
			this->trackBar1->Value = 1;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8));
			this->label1->Location = System::Drawing::Point(40, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 17);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Gamma Value: 0.1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->trackBar1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8, System::Drawing::FontStyle::Bold));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(318, 102);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(209, 106);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Gamma Transformation";
			this->toolTip19->SetToolTip(this->groupBox1, resources->GetString(L"groupBox1.ToolTip"));
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(14, 18);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(73, 21);
			this->radioButton1->TabIndex = 18;
			this->radioButton1->Text = L"Original";
			this->toolTip14->SetToolTip(this->radioButton1, L"When checked all process will be performed\r\non the original (opend) image.");
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button36);
			this->groupBox2->Controls->Add(this->button35);
			this->groupBox2->Location = System::Drawing::Point(318, 23);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 65);
			this->groupBox2->TabIndex = 19;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Zooming";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// button36
			// 
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(99, 23);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(95, 28);
			this->button36->TabIndex = 34;
			this->button36->Text = L"Zoom In + ";
			this->toolTip25->SetToolTip(this->button36, L"Zoom In from the centre (scaling concept).");
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button35
			// 
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(5, 23);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(88, 28);
			this->button35->TabIndex = 33;
			this->button35->Text = L"Zoom In + ";
			this->toolTip24->SetToolTip(this->button35, L"Zoom In (crop concept).");
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Location = System::Drawing::Point(101, 18);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(91, 21);
			this->radioButton2->TabIndex = 20;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Processed";
			this->toolTip15->SetToolTip(this->radioButton2, L"When checked all process will be performed\r\non the processed image.\r\n");
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->groupBox10);
			this->groupBox3->Controls->Add(this->button23);
			this->groupBox3->Controls->Add(this->groupBox7);
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Controls->Add(this->groupBox6);
			this->groupBox3->Controls->Add(this->groupBox5);
			this->groupBox3->Controls->Add(this->button13);
			this->groupBox3->Controls->Add(this->button12);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->groupBox2);
			this->groupBox3->Controls->Add(this->groupBox1);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->button10);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(525, 67);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(532, 427);
			this->groupBox3->TabIndex = 21;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Point Processing";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->label10);
			this->groupBox10->Controls->Add(this->trackBar6);
			this->groupBox10->Controls->Add(this->button16);
			this->groupBox10->Location = System::Drawing::Point(18, 311);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(294, 100);
			this->groupBox10->TabIndex = 30;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Blinding";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(121, 18);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(110, 17);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Trancparency: 0";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// trackBar6
			// 
			this->trackBar6->Location = System::Drawing::Point(86, 38);
			this->trackBar6->Name = L"trackBar6";
			this->trackBar6->Size = System::Drawing::Size(199, 56);
			this->trackBar6->TabIndex = 23;
			this->trackBar6->Value = 1;
			this->trackBar6->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar6_Scroll);
			// 
			// button16
			// 
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(6, 21);
			this->button16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(66, 76);
			this->button16->TabIndex = 22;
			this->button16->Text = L"Open Front Image";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button23
			// 
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(240, 106);
			this->button23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(72, 80);
			this->button23->TabIndex = 28;
			this->button23->Text = L"Gray Level Slicing";
			this->toolTip30->SetToolTip(this->button23, L"Used to highlight gray range of interest to a viewer.\r\nUsed when we need to make "
				L"an object more clear.");
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->button21);
			this->groupBox7->Controls->Add(this->button18);
			this->groupBox7->Location = System::Drawing::Point(129, 214);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(174, 92);
			this->groupBox7->TabIndex = 27;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Rotation";
			this->toolTip12->SetToolTip(this->groupBox7, L"Rotation well done with 10 degree without any scaling");
			// 
			// button21
			// 
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(85, 22);
			this->button21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(66, 53);
			this->button21->TabIndex = 26;
			this->button21->Text = L"rotate left";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button18
			// 
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(13, 22);
			this->button18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(66, 53);
			this->button18->TabIndex = 24;
			this->button18->Text = L"rotate right";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(123, 174);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(111, 24);
			this->comboBox1->TabIndex = 25;
			this->comboBox1->Text = L"Select Plan no.";
			this->toolTip7->SetToolTip(this->comboBox1, L"Select plan number");
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button15);
			this->groupBox6->Controls->Add(this->button14);
			this->groupBox6->Controls->Add(this->button20);
			this->groupBox6->Controls->Add(this->button19);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Tahoma", 8, System::Drawing::FontStyle::Bold));
			this->groupBox6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox6->Location = System::Drawing::Point(12, 213);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(111, 92);
			this->groupBox6->TabIndex = 18;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Translation";
			// 
			// button15
			// 
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(58, 58);
			this->button15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(46, 32);
			this->button15->TabIndex = 25;
			this->button15->Text = L"-Y";
			this->toolTip22->SetToolTip(this->button15, L"Move the image down.\r\nmoving by 10 points.");
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(58, 22);
			this->button14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(46, 32);
			this->button14->TabIndex = 24;
			this->button14->Text = L"-X";
			this->toolTip21->SetToolTip(this->button14, L"Move the image to the left.\r\nmoving by 10 points.");
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button20
			// 
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(6, 57);
			this->button20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(46, 32);
			this->button20->TabIndex = 23;
			this->button20->Text = L" Y";
			this->toolTip22->SetToolTip(this->button20, L"Move the image up.\r\nmoving by 10 points.");
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button19
			// 
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(6, 22);
			this->button19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(46, 32);
			this->button19->TabIndex = 23;
			this->button19->Text = L" X";
			this->toolTip20->SetToolTip(this->button19, L"Move the image to the right.\r\nmoving by 10 points.");
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button11);
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Controls->Add(this->trackBar4);
			this->groupBox5->Controls->Add(this->label3);
			this->groupBox5->Controls->Add(this->trackBar3);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 8, System::Drawing::FontStyle::Bold));
			this->groupBox5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox5->Location = System::Drawing::Point(318, 214);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(209, 197);
			this->groupBox5->TabIndex = 18;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Skewing";
			this->toolTip26->SetToolTip(this->groupBox5, L"All parallel lines in the original image will still be parallel in\r\nthe output im"
				L"age. This transform is obtained from the\r\nrelation between three points.");
			// 
			// button11
			// 
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(18, 147);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(172, 33);
			this->button11->TabIndex = 28;
			this->button11->Text = L"Adjust";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 8));
			this->label4->Location = System::Drawing::Point(75, 75);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 17);
			this->label4->TabIndex = 27;
			this->label4->Text = L"-X-axis";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// trackBar4
			// 
			this->trackBar4->Location = System::Drawing::Point(6, 93);
			this->trackBar4->Maximum = 500;
			this->trackBar4->Minimum = 1;
			this->trackBar4->Name = L"trackBar4";
			this->trackBar4->Size = System::Drawing::Size(184, 56);
			this->trackBar4->SmallChange = 10;
			this->trackBar4->TabIndex = 26;
			this->toolTip11->SetToolTip(this->trackBar4, L"Slide the track bar to skew the image to the left");
			this->trackBar4->Value = 1;
			this->trackBar4->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar4_Scroll);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 8));
			this->label3->Location = System::Drawing::Point(75, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 17);
			this->label3->TabIndex = 16;
			this->label3->Text = L"+X-axis";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// trackBar3
			// 
			this->trackBar3->Location = System::Drawing::Point(6, 31);
			this->trackBar3->Maximum = 500;
			this->trackBar3->Minimum = 1;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(184, 56);
			this->trackBar3->SmallChange = 50;
			this->trackBar3->TabIndex = 13;
			this->toolTip10->SetToolTip(this->trackBar3, L"Slide the track bar to skew the image to the right");
			this->trackBar3->Value = 1;
			this->trackBar3->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar3_Scroll);
			// 
			// button13
			// 
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(6, 162);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(111, 46);
			this->button13->TabIndex = 21;
			this->button13->Text = L"Bit Plan Slicing";
			this->toolTip28->SetToolTip(this->button13, L"Bit plane slicing is a method of representing an image with\r\none or more bits of "
				L"the byte used for eachpixel.\r\nWhere M.S.B usually contain most of the significan"
				L"t visual information.");
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(123, 106);
			this->button12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(111, 48);
			this->button12->TabIndex = 20;
			this->button12->Text = L" Thresholding";
			this->toolTip29->SetToolTip(this->button12, resources->GetString(L"button12.ToolTip"));
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->button17);
			this->groupBox14->Controls->Add(this->button8);
			this->groupBox14->Controls->Add(this->label12);
			this->groupBox14->Controls->Add(this->label11);
			this->groupBox14->Controls->Add(this->trackBar7);
			this->groupBox14->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox14->Location = System::Drawing::Point(525, 691);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(306, 141);
			this->groupBox14->TabIndex = 33;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"Segmentation";
			// 
			// button17
			// 
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(129, 22);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(77, 33);
			this->button17->TabIndex = 29;
			this->button17->Text = L"Adjust";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(220, 21);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 114);
			this->button8->TabIndex = 3;
			this->button8->Text = L"Edge Based Method";
			this->toolTip34->SetToolTip(this->button8, resources->GetString(L"button8.ToolTip"));
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click_1);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(17, 54);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(70, 17);
			this->label12->TabIndex = 2;
			this->label12->Text = L"TH Value: ";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label11->Location = System::Drawing::Point(8, 27);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(118, 17);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Threshold Method";
			this->toolTip36->SetToolTip(this->label11, resources->GetString(L"label11.ToolTip"));
			// 
			// trackBar7
			// 
			this->trackBar7->Location = System::Drawing::Point(7, 79);
			this->trackBar7->Maximum = 255;
			this->trackBar7->Minimum = 10;
			this->trackBar7->Name = L"trackBar7";
			this->trackBar7->Size = System::Drawing::Size(203, 56);
			this->trackBar7->TabIndex = 0;
			this->toolTip38->SetToolTip(this->trackBar7, L"Move the slider to adjust the TH value,\r\nthen click adjust to save it.");
			this->trackBar7->Value = 10;
			this->trackBar7->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar7_Scroll);
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->groupBox13);
			this->groupBox11->Controls->Add(this->groupBox12);
			this->groupBox11->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox11->Location = System::Drawing::Point(525, 499);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(312, 188);
			this->groupBox11->TabIndex = 31;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Filters";
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->button22);
			this->groupBox13->Controls->Add(this->button29);
			this->groupBox13->Controls->Add(this->button31);
			this->groupBox13->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox13->Location = System::Drawing::Point(6, 107);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(284, 77);
			this->groupBox13->TabIndex = 32;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"Order Statistical Filters";
			this->toolTip31->SetToolTip(this->groupBox13, L"Remove salt and pepper noise while preserved the Edges.");
			// 
			// button22
			// 
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(186, 22);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(84, 48);
			this->button22->TabIndex = 1;
			this->button22->Text = L"sobel filter in Y";
			this->toolTip39->SetToolTip(this->button22, resources->GetString(L"button22.ToolTip"));
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button29
			// 
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(6, 22);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(84, 48);
			this->button29->TabIndex = 0;
			this->button29->Text = L"Median filter";
			this->toolTip32->SetToolTip(this->button29, L"Used to enhance the spark noise,\r\nwith preserving the sharp edges.\r\nHint: Kernel "
				L"adjusted to size = 9");
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button31
			// 
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(96, 23);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(84, 48);
			this->button31->TabIndex = 0;
			this->button31->Text = L"sobel filter\r\nin X";
			this->toolTip33->SetToolTip(this->button31, resources->GetString(L"button31.ToolTip"));
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->button30);
			this->groupBox12->Controls->Add(this->button26);
			this->groupBox12->Controls->Add(this->button28);
			this->groupBox12->Controls->Add(this->button27);
			this->groupBox12->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox12->Location = System::Drawing::Point(6, 22);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(284, 79);
			this->groupBox12->TabIndex = 32;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Linear Filters (smoothing)";
			this->toolTip35->SetToolTip(this->groupBox12, L"Remove spark noise (reduce irrelevant detail in image),\r\nbut make blluring edges."
				L"");
			// 
			// button30
			// 
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(214, 22);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(66, 48);
			this->button30->TabIndex = 0;
			this->button30->Text = L"circular filter";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button26
			// 
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(6, 22);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(46, 48);
			this->button26->TabIndex = 0;
			this->button26->Text = L"3x3";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button28
			// 
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(148, 22);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(60, 48);
			this->button28->TabIndex = 0;
			this->button28->Text = L"cone  filter";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button27
			// 
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(58, 22);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(84, 48);
			this->button27->TabIndex = 0;
			this->button27->Text = L"pyramidal filter";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Controls->Add(this->label7);
			this->groupBox8->Controls->Add(this->label6);
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox8->Location = System::Drawing::Point(864, 683);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(193, 149);
			this->groupBox8->TabIndex = 29;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Image Details";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(14, 104);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 17);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Dimensions: ";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(14, 75);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 17);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Average: ";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(14, 49);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 17);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Min: ";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 17);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Max: ";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// button24
			// 
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(641, 18);
			this->button24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(116, 29);
			this->button24->TabIndex = 22;
			this->button24->Text = L"save";
			this->toolTip4->SetToolTip(this->button24, L"Save the processed image.");
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->button34);
			this->groupBox9->Controls->Add(this->radioButton1);
			this->groupBox9->Controls->Add(this->radioButton2);
			this->groupBox9->Controls->Add(this->button7);
			this->groupBox9->Location = System::Drawing::Point(763, 11);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(292, 46);
			this->groupBox9->TabIndex = 30;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Select to be process image";
			// 
			// button34
			// 
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(243, 15);
			this->button34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(46, 26);
			this->button34->TabIndex = 21;
			this->button34->Text = L"close all windows";
			this->toolTip8->SetToolTip(this->button34, L"Close All Opened Windows");
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button25
			// 
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(519, 18);
			this->button25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(116, 29);
			this->button25->TabIndex = 31;
			this->button25->Text = L"restart";
			this->toolTip3->SetToolTip(this->button25, L"To restart the tool");
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// toolTip1
			// 
			this->toolTip1->AutoPopDelay = 15000;
			this->toolTip1->InitialDelay = 500;
			this->toolTip1->ReshowDelay = 100;
			// 
			// toolTip2
			// 
			this->toolTip2->AutoPopDelay = 15000;
			this->toolTip2->InitialDelay = 500;
			this->toolTip2->ReshowDelay = 100;
			// 
			// toolTip3
			// 
			this->toolTip3->AutoPopDelay = 15000;
			this->toolTip3->InitialDelay = 500;
			this->toolTip3->ReshowDelay = 100;
			// 
			// toolTip4
			// 
			this->toolTip4->AutoPopDelay = 15000;
			this->toolTip4->InitialDelay = 500;
			this->toolTip4->ReshowDelay = 100;
			// 
			// toolTip5
			// 
			this->toolTip5->AutoPopDelay = 15000;
			this->toolTip5->InitialDelay = 500;
			this->toolTip5->ReshowDelay = 100;
			// 
			// toolTip6
			// 
			this->toolTip6->AutoPopDelay = 15000;
			this->toolTip6->InitialDelay = 500;
			this->toolTip6->ReshowDelay = 100;
			// 
			// toolTip8
			// 
			this->toolTip8->AutoPopDelay = 15000;
			this->toolTip8->InitialDelay = 500;
			this->toolTip8->ReshowDelay = 100;
			// 
			// toolTip7
			// 
			this->toolTip7->AutoPopDelay = 15000;
			this->toolTip7->InitialDelay = 500;
			this->toolTip7->ReshowDelay = 100;
			// 
			// toolTip9
			// 
			this->toolTip9->AutoPopDelay = 15000;
			this->toolTip9->InitialDelay = 500;
			this->toolTip9->ReshowDelay = 100;
			// 
			// toolTip10
			// 
			this->toolTip10->AutoPopDelay = 15000;
			this->toolTip10->InitialDelay = 500;
			this->toolTip10->ReshowDelay = 100;
			// 
			// toolTip11
			// 
			this->toolTip11->AutoPopDelay = 15000;
			this->toolTip11->InitialDelay = 500;
			this->toolTip11->ReshowDelay = 100;
			// 
			// toolTip12
			// 
			this->toolTip12->AutoPopDelay = 15000;
			this->toolTip12->InitialDelay = 500;
			this->toolTip12->ReshowDelay = 100;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button9);
			this->groupBox4->Controls->Add(this->textBox3);
			this->groupBox4->Controls->Add(this->textBox2);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(855, 511);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 165);
			this->groupBox4->TabIndex = 34;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Rotation (specific values)";
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(6, 45);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 98);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Rotate";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(96, 95);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(92, 23);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = L"scale factor";
			this->toolTip13->SetToolTip(this->textBox3, L"scale factor value \r\nif you enter value >1 will be scaled in\r\nif you enter value "
				L"<1 (decimal values) will be scaled out ");
			this->textBox3->Click += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(96, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(92, 23);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"angle (0-360)";
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// toolTip13
			// 
			this->toolTip13->AutoPopDelay = 15000;
			this->toolTip13->InitialDelay = 500;
			this->toolTip13->ReshowDelay = 100;
			// 
			// toolTip14
			// 
			this->toolTip14->AutoPopDelay = 15000;
			this->toolTip14->InitialDelay = 500;
			this->toolTip14->ReshowDelay = 100;
			// 
			// toolTip15
			// 
			this->toolTip15->AutoPopDelay = 15000;
			this->toolTip15->InitialDelay = 500;
			this->toolTip15->ReshowDelay = 100;
			// 
			// toolTip16
			// 
			this->toolTip16->AutoPopDelay = 15000;
			this->toolTip16->InitialDelay = 500;
			this->toolTip16->ReshowDelay = 100;
			// 
			// toolTip17
			// 
			this->toolTip17->AutoPopDelay = 15000;
			this->toolTip17->InitialDelay = 500;
			this->toolTip17->ReshowDelay = 100;
			// 
			// toolTip18
			// 
			this->toolTip18->AutoPopDelay = 15000;
			this->toolTip18->InitialDelay = 500;
			this->toolTip18->ReshowDelay = 100;
			// 
			// toolTip19
			// 
			this->toolTip19->AutoPopDelay = 15000;
			this->toolTip19->InitialDelay = 500;
			this->toolTip19->ReshowDelay = 100;
			// 
			// toolTip20
			// 
			this->toolTip20->AutoPopDelay = 15000;
			this->toolTip20->InitialDelay = 500;
			this->toolTip20->ReshowDelay = 100;
			// 
			// toolTip21
			// 
			this->toolTip21->AutoPopDelay = 15000;
			this->toolTip21->InitialDelay = 500;
			this->toolTip21->ReshowDelay = 100;
			// 
			// toolTip22
			// 
			this->toolTip22->AutoPopDelay = 15000;
			this->toolTip22->InitialDelay = 500;
			this->toolTip22->ReshowDelay = 100;
			// 
			// toolTip23
			// 
			this->toolTip23->AutoPopDelay = 15000;
			this->toolTip23->InitialDelay = 500;
			this->toolTip23->ReshowDelay = 100;
			// 
			// toolTip24
			// 
			this->toolTip24->AutoPopDelay = 15000;
			this->toolTip24->InitialDelay = 500;
			this->toolTip24->ReshowDelay = 100;
			// 
			// toolTip25
			// 
			this->toolTip25->AutoPopDelay = 15000;
			this->toolTip25->InitialDelay = 500;
			this->toolTip25->ReshowDelay = 100;
			// 
			// toolTip26
			// 
			this->toolTip26->AutoPopDelay = 15000;
			this->toolTip26->InitialDelay = 500;
			this->toolTip26->ReshowDelay = 100;
			// 
			// toolTip27
			// 
			this->toolTip27->AutoPopDelay = 15000;
			this->toolTip27->InitialDelay = 500;
			this->toolTip27->ReshowDelay = 100;
			// 
			// toolTip28
			// 
			this->toolTip28->AutoPopDelay = 15000;
			this->toolTip28->InitialDelay = 500;
			this->toolTip28->ReshowDelay = 100;
			// 
			// toolTip29
			// 
			this->toolTip29->AutoPopDelay = 15000;
			this->toolTip29->InitialDelay = 500;
			this->toolTip29->ReshowDelay = 100;
			// 
			// toolTip30
			// 
			this->toolTip30->AutoPopDelay = 15000;
			this->toolTip30->InitialDelay = 500;
			this->toolTip30->ReshowDelay = 100;
			// 
			// toolTip31
			// 
			this->toolTip31->AutoPopDelay = 15000;
			this->toolTip31->InitialDelay = 500;
			this->toolTip31->ReshowDelay = 100;
			// 
			// toolTip32
			// 
			this->toolTip32->AutoPopDelay = 15000;
			this->toolTip32->InitialDelay = 500;
			this->toolTip32->ReshowDelay = 100;
			// 
			// toolTip33
			// 
			this->toolTip33->AutoPopDelay = 15000;
			this->toolTip33->InitialDelay = 500;
			this->toolTip33->ReshowDelay = 100;
			// 
			// toolTip34
			// 
			this->toolTip34->AutoPopDelay = 15000;
			this->toolTip34->InitialDelay = 500;
			this->toolTip34->ReshowDelay = 100;
			// 
			// toolTip35
			// 
			this->toolTip35->AutoPopDelay = 15000;
			this->toolTip35->InitialDelay = 500;
			this->toolTip35->ReshowDelay = 100;
			// 
			// toolTip36
			// 
			this->toolTip36->AutoPopDelay = 15000;
			this->toolTip36->InitialDelay = 500;
			this->toolTip36->ReshowDelay = 100;
			// 
			// toolTip37
			// 
			this->toolTip37->AutoPopDelay = 15000;
			this->toolTip37->InitialDelay = 500;
			this->toolTip37->ReshowDelay = 100;
			// 
			// toolTip38
			// 
			this->toolTip38->AutoPopDelay = 15000;
			this->toolTip38->InitialDelay = 500;
			this->toolTip38->ReshowDelay = 100;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1065, 836);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox14);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->groupBox11);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Image Processing Tool (by Mr. Mohamed Alaa)";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->EndInit();
			this->groupBox7->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar7))->EndInit();
			this->groupBox11->ResumeLayout(false);
			this->groupBox13->ResumeLayout(false);
			this->groupBox12->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//////////////////////////////////(Basic Form Plans)///////////////////////////////////////////
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
	//combobox filling for bit plan 
	comboBox1->Items->Add(0);
	comboBox1->Items->Add(1);
	comboBox1->Items->Add(2);
	comboBox1->Items->Add(3);
	comboBox1->Items->Add(4);
	comboBox1->Items->Add(5);
	comboBox1->Items->Add(6);
	comboBox1->Items->Add(7);
	}
//textbox showing the directory 
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
//picture Box // to Show the image in Box 
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
#pragma region // details label 
	   // maximum label
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // minimum label
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // average label
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // dimension label
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
# pragma endregion
//Open button // to load the image
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		IO::Stream^ myStream; // to open file stream	//to hold the image file
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

		openFileDialog1->InitialDirectory = "Desktop";
		openFileDialog1->Filter = "Image files (*.png)|*.png|All files|*.*|Image files (*.jpg)|*.jpg";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((myStream = openFileDialog1->OpenFile()) != nullptr)
			{
				// Insert code to read the stream here. (image file)
				GUI2::String^ selectedFile = openFileDialog1->FileName; // create file stream
				this->pictureBox1->ImageLocation = selectedFile; // Display The Selected Image in PicBox
				textBox1->Text = openFileDialog1->FileName; // Show the Dir of the selected Image
				marshal_context converter;
				const char* str2 = converter.marshal_as<const char*>(openFileDialog1->FileName);
				src = imread(str2, 1); // read the image as Mat type to be processed in colored operation
				original = src; //to save orginal image and retreive it when needed
				grayImg = imread(str2, 0); // read the image in grayscale as Mat type to be processed in point porcessing
				bitplnImg = grayImg; //to be processed in bitplan
				grayOrg = grayImg; //to save gray image and retreive it when needed for point porcessing
				imwrite("temp.png", src); // keep original image for resestting
				myStream->Close();
			}
		}
		// drive image details box
		int max = 0, min = 255;
		float avg=0;
		max , min , avg = StatMeasure(src);
		//call max function in Max variable
		this->label5->Text = "Max: " + max;
		//call min function in Min variable
		this->label6->Text = "Min: " + min;
		//call avg function in avg variable
		this->label7->Text = "Average: " + avg;
		//Dimensions
		this->label9->Text = "Dimensions: " + src.rows + " x " + src.cols;

	}
//save button
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	// Displays a SaveFileDialog so the user can save the Image // assigned to Button2.
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
	saveFileDialog1->Filter = "JPeg Image|*.jpg|Bitmap Image|*.bmp|Gif Image|*.gif";
	saveFileDialog1->Title = "Save an Image File";
	saveFileDialog1->ShowDialog();
	// If the file name is not an empty string open it for saving.
	if (saveFileDialog1->FileName != "")
	{
		marshal_context converter;
		const char* str2 = converter.marshal_as<const char*>(saveFileDialog1->FileName);
		//imwrite(str2, src);
		imwrite(str2, grayImg);
	}
}
//restart button
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	destroyAllWindows();
	Application::Restart();
}
//reseting button
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (src.data) //handle click on resetting before open any image
	{
	src = imread("temp.png",1);
	grayImg = imread("temp.png", 0);
	showImg(src);
	}
}
//close all windows button
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	destroyAllWindows();
}
// radio buttons for select to be processed image

//original checked
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
//processed checked
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
/*////////////////////////////////////(Buttons)\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/
		// donot forget to restrict the pressing on any button // for error handling
#pragma region // flipping buttons
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	grayImg = flipping(grayImg, -1);
	showImg(grayImg);
}
//flip around X button
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	grayImg = flipping(grayImg, 0);
	showImg(grayImg);
}
//flip around Y button
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	grayImg = flipping(grayImg, 1);
	showImg(grayImg);
}
//flipping function
private: Mat flipping(Mat src, int fcode) {	// flip the image 
	flip(src, src, fcode);
	return src;	// after process return destination image.
}
#pragma endregion
#pragma region // point processing
//Histogram button
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	equalizeHist(grayImg, grayImg);
	showImg(grayImg);
}
//Negative button // 
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < grayImg.rows; i++)
		for (int j = 0; j < grayImg.cols; j++)
			grayImg.at<uchar>(i, j) = 255 - grayImg.at<uchar>(i, j);
	showImg(grayImg);
}
// Log Transformation button 
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	grayImg.convertTo(grayImg, CV_32F);
	grayImg = grayImg + 1;
	log(grayImg, grayImg);
	normalize(grayImg, grayImg, 0, 255, NORM_MINMAX);
	convertScaleAbs(grayImg, grayImg);
	showImg(grayImg);
}
//gamma transformation button
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	this->label1->Text = "Gamma Value: " + (trackBar1->Value) * 0.1;
	float gammaVal = trackBar1->Value;
	temp = grayImg;
	grayImg.convertTo(grayImg, CV_32F);
	for (int r = 0; r < grayImg.rows; r++)
		for (int c = 0; c < grayImg.cols; c++)
			grayImg.at<float>(r, c) = powf(grayImg.at<float>(r, c), gammaVal * 0.1);

	normalize(grayImg, grayImg, 0, 255, NORM_MINMAX);
	convertScaleAbs(grayImg, grayImg);
	showImg(grayImg);
	grayImg = temp;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
// thresholding button
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	int ThVal = 125;
	//ThVal = calAvg(grayImg); // threshold value depend on the avg value of the image
	threshold(grayImg, grayImg, ThVal, 255, THRESH_BINARY);
	showImg(grayImg);
}
// gray level slicing button
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < grayImg.rows; i++)
		for (int j = 0; j < grayImg.cols; j++)
			if (grayImg.at<uchar>(i, j) > 130 && grayImg.at<uchar>(i, j) < 200)
				grayImg.at<uchar>(i, j) = 255;
			else
				grayImg.at<uchar>(i, j) = grayImg.at<uchar>(i, j);
	showImg(grayImg);
}
#pragma endregion
#pragma region //  Zooming 
//Zoom In + button with crop
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	grayImg = grayImg(Rect(180, 50, grayImg.rows / 2, grayImg.cols / 2));
	resize(grayImg, grayImg, cv::Size(), 2, 2, 0);
	showImg(grayImg);
}
//Zoom In  button from the centre
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	Mat R = getRotationMatrix2D(Point2f(grayImg.rows / 2, grayImg.cols / 2), 0, 1.3); // scaling without rotation
	warpAffine(grayImg, grayImg, R, grayImg.size());
	showImg(grayImg);
}
#pragma endregion
#pragma region // Statistics Measure fnctions 
private: int StatMeasure(Mat& image)
	   {
		int sum = 0, max = 0, min = 255; float avg;
		if (!image.data) // handle error while open and does not select an image 
			return 0;		
		else
		{
		   for (int i = 0; i < image.rows; i++)
		   {
			   for (int j = 0; j < image.cols; j++)
			   {
				   sum += image.at<uchar>(i, j);

				   if (max <= image.at<uchar>(i, j))
					   max = image.at<uchar>(i, j);

				   if (min >= image.at<uchar>(i, j))
					   min = image.at<uchar>(i, j);
			   }
		   }
		   avg = sum / image.total(); // error expected while big size image
		   return max, min, avg;
		}
	   }
#pragma endregion
#pragma region //translation buttons
 /*/////// buttons of translation \\\\\\\\\\\\\\\\\\\\*/
// translation +X button
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	int tx = 10, ty = 0; // move by 10 points
	Mat TM = (Mat_<float>(2, 3) << 1, 0, tx, 0, 1, ty);
	warpAffine(grayImg, grayImg, TM, grayImg.size());
	showImg(grayImg);
}
// translation +Y button
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	int tx = 0, ty = 10;
	Mat TM = (Mat_<float>(2, 3) << 1, 0, tx, 0, 1, ty);
	warpAffine(grayImg, grayImg, TM, grayImg.size());
	showImg(grayImg);
}
// translation -X button
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	int tx = -10, ty = 0;
	Mat TM = (Mat_<float>(2, 3) << 1, 0, tx, 0, 1, ty);
	warpAffine(grayImg, grayImg, TM, grayImg.size());
	showImg(grayImg);
}
// translation -Y button
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	int tx = 0, ty = -10;
	Mat TM = (Mat_<float>(2, 3) << 1, 0, tx, 0, 1, ty);
	warpAffine(grayImg, grayImg, TM, grayImg.size());
	showImg(grayImg);
} /////////////// end of translation buttons ///////////////////////////
#pragma endregion
#pragma region //Rotation buttons
// rotate right
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	resize(grayImg, grayImg, cv::Size(grayImg.rows, grayImg.cols));
	int rotationVal = 15; // change rotationVal value for size of rotation
	Mat R = getRotationMatrix2D(Point2f(grayImg.rows / 2, grayImg.cols / 2), rotationVal, 1);
	warpAffine(grayImg, grayImg, R, grayImg.size());
	showImg(grayImg);
}
// rotate left
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	resize(grayImg, grayImg, cv::Size(grayImg.rows, grayImg.cols));
	int rotationVal = -15; // change rotationVal value for size of rotation
	Mat R = getRotationMatrix2D(Point2f(grayImg.rows / 2, grayImg.cols / 2), rotationVal, 1);
	warpAffine(grayImg, grayImg, R, grayImg.size());
	showImg(grayImg);
}
// Rotation new
private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Mat R = getRotationMatrix2D(Point2f(grayImg.rows / 2, grayImg.cols / 2), Convert::ToDouble(textBox2->Text) , Convert::ToDouble(textBox3->Text));
	warpAffine(grayImg, grayImg, R, grayImg.size());
	showImg(grayImg);
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//textBox2->Text = ""; // to clear the default text while clicked ( attached with click event)
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//textBox3->Text = ""; // to clear the default text while clicked ( attached with click event)
}

#pragma endregion
#pragma region // skewing buttons
//trackbar x-axis
private: System::Void trackBar3_Scroll(System::Object^ sender, System::EventArgs^ e) {
	this->label3->Text = "X-axis: " + (trackBar3->Value);
	int xtrans = trackBar3->Value;
	Point2f src_p[3];
	src_p[0] = Point2f(0, 0);
	src_p[1] = Point2f(src.cols - 1, 0); 
	src_p[2] = Point2f(0, src.rows - 1);
	Point2f dst_p[3];
	dst_p[0] = Point2f(0, 0);
	dst_p[1] = Point2f(src.cols - 1, 0);
	dst_p[2] = Point2f(xtrans, src.rows - 1);
	Mat SM = getAffineTransform(src_p, dst_p);
	warpAffine(grayImg, temp, SM, src.size());
	showImg(temp);
}
//trackbar -X-axis
private: System::Void trackBar4_Scroll(System::Object^ sender, System::EventArgs^ e) {
	this->label4->Text = "-X-axis: " + (trackBar4->Value);
	int ytrans = trackBar4->Value;
	Point2f src_p[3];
	src_p[0] = Point2f(0, 0);
	src_p[1] = Point2f(src.cols - 1, 0);
	src_p[2] = Point2f(0, src.rows - 1);
	Point2f dst_p[3];
	dst_p[0] = Point2f(0, 0);
	dst_p[1] = Point2f(src.cols - 1, 0);
	dst_p[2] = Point2f(-ytrans, src.rows - 1);
	Mat SM = getAffineTransform(src_p, dst_p);
	warpAffine(grayImg, temp, SM, src.size());
	showImg(temp);
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
// adjust button
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	grayImg = temp;
}

#pragma endregion
#pragma region //blinding buttons & label
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	IO::Stream^ myStream; // to hold the image file
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "Desktop";
	openFileDialog1->Filter = "Image files (*.png)|*.png|All files|*.*|Image files (*.jpg)|*.jpg";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((myStream = openFileDialog1->OpenFile()) != nullptr)
		{
			// Insert code to read the stream here. (image file)
			GUI2::String^ selectedFile = openFileDialog1->FileName;
			marshal_context converter;
			const char* str2 = converter.marshal_as<const char*>(openFileDialog1->FileName);
			frontblind = imread(str2, 0); // read the front image 
			showImg(grayImg);
			//show message to the user
			MessageBox::Show("Use the slider to change the trancparency and blind the images...", "Hint", MessageBoxButtons::OK, MessageBoxIcon::Information);
			myStream->Close();
		}
	}
}
private: System::Void trackBar6_Scroll(System::Object^ sender, System::EventArgs^ e) {
	backblind = grayImg; // assign back image
	Mat blinded(backblind.rows, backblind.cols, CV_8UC1); // make blinded image size as front image 
	cv::resize(frontblind, frontblind, cv::Size(backblind.cols, backblind.rows), CV_8UC1); // make back blind image size as front image
	float transVal = trackBar6->Value * 0.1;
	this->label10->Text = "Trancparency: " + transVal;

	for (int r = 0; r < frontblind.rows; r++)
		for (int c = 0; c < frontblind.cols; c++)
			blinded.at<uchar>(r, c) = frontblind.at<uchar>(r, c) * transVal + backblind.at<uchar>(r, c) * (1 - transVal);
	showImg(blinded);
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
#pragma endregion
#pragma region //bit plan slicing
// bit plan slicing button
int bitNo; //initialize bit number
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	//to prevent empty or no selection comboBox error
	if (comboBox1->Text=="Select Plan no." || comboBox1->Text=="")
		MessageBox::Show("Please select Plan no. from the list !", "Warnning...!",
		MessageBoxButtons::OK, MessageBoxIcon::Information);
	/* //to prevent manual selection comboBox error
	else if (comboBox1->Text != "0" || comboBox1->Text != "1" || comboBox1->Text != "2" 
			|| comboBox1->Text != "3" || comboBox1->Text != "4" || comboBox1->Text != "5" 
		|| comboBox1->Text != "6" || comboBox1->Text != "7" ) 

		MessageBox::Show("Please select Plan no. from the list !", "Warnning...!",
		MessageBoxButtons::OK, MessageBoxIcon::Information);
	*/
	else
	{
		bitNo = System::Convert::ToInt16(comboBox1->Text);
		int plancode = pow(2, bitNo);
		bitplnImg = imread("temp.png", 0); // bit plan is separate from the other processes
		for (int r = 0; r < bitplnImg.rows; r++)
			for (int c = 0; c < bitplnImg.cols; c++)
				if (bitplnImg.at<uchar>(r, c)& uchar(plancode))//Here's (Bitwise operations) get the corresponding bit planes
					bitplnImg.at<uchar>(r, c) = 255;
				else
					bitplnImg.at<uchar>(r, c) = 0;
		showPlan(bitplnImg);
		bitplnImg = grayImg; // retreive orgignal gray image after getting the plan
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: void showPlan(Mat src) {
	imwrite("plan.png", src);
	ostringstream oss;
	oss << "Plan: " << bitNo;
	string windowName = oss.str();
	namedWindow(windowName, 0);
	imshow(windowName, src);
}
#pragma endregion
#pragma region // filters
private: Mat filtering(Mat src, Mat kernel) {	//not yet worked function
	filter2D(src, src, CV_8UC1, kernel);
	showImg(src);
	return src;	// after process return processed image.
}
// traditional filter 3x3 button
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	Mat kernel_T = (Mat_<float>(3, 3) << 1, 1, 1, 1, 1, 1, 1, 1, 1);
	kernel_T = kernel_T / 9;
	filter2D(grayImg, grayImg, CV_8UC1, kernel_T);
	//filtering(src, kernel_T);
	showImg(grayImg);
}
// pyramidal filter button
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	Mat kernel_p = (Mat_<float>(5, 5) << 1, 2, 3, 2, 1, 2, 4, 6, 4, 2, 3, 6, 9, 6, 3, 2, 4, 6, 4, 2, 1, 2, 3, 2, 1);
	kernel_p = kernel_p / 81;
	filter2D(grayImg, grayImg, CV_8UC1, kernel_p);
	showImg(grayImg);
}
// cone filter button
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	Mat kernel_co = (Mat_<float>(5, 5) << 0, 0, 1, 0, 0, 0, 2, 2, 2, 0, 1, 2, 5, 2, 1, 0, 2, 2, 2, 0, 0, 0, 1, 0, 0);
	kernel_co = kernel_co / 25;
	filter2D(grayImg, grayImg, CV_8UC1, kernel_co);
	showImg(grayImg);
}
// circular filter 3x3 button
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	Mat kernel_c = (Mat_<float>(5, 5) << 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0);
	kernel_c = kernel_c / 21;
	filter2D(grayImg, grayImg, CV_8UC1, kernel_c);
	showImg(grayImg);
}
// Median Blur filter  button
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	medianBlur(grayImg, grayImg, 9);
	showImg(grayImg);
}
// Sobel filter in X dir button
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	Sobel(grayImg, grayImg, CV_8UC1, 1, 0, 3);
	showImg(grayImg);
}
// Sobel filter in Y dir button
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	Sobel(grayImg, grayImg, CV_8UC1, 0, 1, 3);
	showImg(grayImg);
}

#pragma endregion
#pragma region // segmentation
	   //thresholding method
private: System::Void trackBar7_Scroll(System::Object^ sender, System::EventArgs^ e) {
	int TH = trackBar7->Value; //TH Value: 
	this->label12->Text = "TH Value: " + (trackBar7->Value);
	//temp = grayImg;
	threshold(grayImg, temp, TH, 255, THRESH_BINARY);
	showImg(temp);
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   //Edge Based Method button
private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {
	GaussianBlur(grayImg, grayImg, cv::Size(3, 3), 0);
	Laplacian(grayImg, grayImg, CV_8UC1);
	showImg(grayImg);
}
// adjust button
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	grayImg = temp;
}


#pragma endregion
//showing function
private: void showImg(Mat src) {
	imwrite("processed.png", src);
	this->pictureBox1->ImageLocation = "processed.png"; // Display The Selected Image in PicBox
	//namedWindow("Processed Image", 0);
	//resizeWindow("Processed Image", 500, 500);
	//moveWindow("Processed Image", 1000, 0);
	//imshow("Processed Image", src);

	if (radioButton1->Checked)
	{
	src = imread("temp.png", 1);
	grayImg= imread("temp.png", 0);
	}

	//to update image details box
	int max = 0, min = 255;
	float avg = 0;
	max, min, avg = StatMeasure(src);
	//call max function in Max variable
	this->label5->Text = "Max: " + max;
	//call min function in Min variable
	this->label6->Text = "Min: " + min;
	//call avg function in avg variable
	this->label7->Text = "Average: " + avg;
	//Dimensions
	this->label9->Text = "Dimensions: " + src.rows + " x " + src.cols;
}
};///////////////////////////////////////////////////////////////////////////////////////////////////////////////
}