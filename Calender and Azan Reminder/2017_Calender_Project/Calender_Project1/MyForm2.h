#pragma once
//This program coded and designed by:
//1-Mohi Eddin Ahmed Fathi Ahmed.
//2-Mostafa Ali Mohamed Ali.
//3-Mostafa Ashraf Maamoun.
//4-Moaz Abdo Abd-allah.
//5-Mostafa Abd-ELmohsen Hasneen.

namespace Calender_Project1 {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  enbox;
	protected:
	private: System::Windows::Forms::ComboBox^  sbox;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  locbox;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  evenbox;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  daybox;
	private: System::Windows::Forms::ComboBox^  monbox;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ListBox^  Events;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

			 //This program coded and designed by:
			 //1-Mohi Eddin Ahmed Fathi Ahmed.
			 //2-Mostafa Ali Mohamed Ali.
			 //3-Mostafa Ashraf Maamoun.
			 //4-Moaz Abdo Abd-allah.
			 //5-Mostafa Abd-ELmohsen Hasneen.

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->enbox = (gcnew System::Windows::Forms::ComboBox());
			this->sbox = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->locbox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->evenbox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->daybox = (gcnew System::Windows::Forms::ComboBox());
			this->monbox = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Events = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// enbox
			// 
			this->enbox->BackColor = System::Drawing::Color::SkyBlue;
			this->enbox->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->enbox->FormattingEnabled = true;
			this->enbox->Items->AddRange(gcnew cli::array< System::Object^  >(49) {
				L"12:00 AM", L"12:30 AM", L"1:00 AM", L"1:30 AM", L"2:00 AM",
					L"2:30 AM", L"3:00 AM", L"3:30 AM", L"4:00 AM", L"4:30 AM", L"5:00 AM", L"5:30 AM", L"6:00 AM", L"6:30 AM", L"7:00 AM", L"7:30 AM",
					L"8:00 AM", L"8:30 AM", L"9:00 AM", L"9:30 AM", L"10:00 AM", L"10:30 AM", L"11:00 AM", L"11:30 AM", L"12:00 PM", L"12:30 PM",
					L"1:00 PM", L"1:30 PM", L"2:00 PM", L"2:30 PM", L"3:00 PM", L"3:30 PM", L"4:00 PM", L"4:30 PM", L"5:00 PM", L"5:30 PM", L"6:00 PM",
					L"6:30 PM", L"7:00 PM", L"7:30 PM", L"8:00 PM", L"8:30 PM", L"9:00 PM", L"9:30 PM", L"10:00 PM", L"10:30 PM", L"11:00 PM", L"11:30 PM",
					L" "
			});
			this->enbox->Location = System::Drawing::Point(94, 192);
			this->enbox->Name = L"enbox";
			this->enbox->Size = System::Drawing::Size(113, 25);
			this->enbox->TabIndex = 21;
			// 
			// sbox
			// 
			this->sbox->BackColor = System::Drawing::Color::SkyBlue;
			this->sbox->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sbox->FormattingEnabled = true;
			this->sbox->Items->AddRange(gcnew cli::array< System::Object^  >(49) {
				L"12:00 AM", L"12:30 AM", L"1:00 AM", L"1:30 AM", L"2:00 AM",
					L"2:30 AM", L"3:00 AM", L"3:30 AM", L"4:00 AM", L"4:30 AM", L"5:00 AM", L"5:30 AM", L"6:00 AM", L"6:30 AM", L"7:00 AM", L"7:30 AM",
					L"8:00 AM", L"8:30 AM", L"9:00 AM", L"9:30 AM", L"10:00 AM", L"10:30 AM", L"11:00 AM", L"11:30 AM", L"12:00 PM", L"12:30 PM",
					L"1:00 PM", L"1:30 PM", L"2:00 PM", L"2:30 PM", L"3:00 PM", L"3:30 PM", L"4:00 PM", L"4:30 PM", L"5:00 PM", L"5:30 PM", L"6:00 PM",
					L"6:30 PM", L"7:00 PM", L"7:30 PM", L"8:00 PM", L"8:30 PM", L"9:00 PM", L"9:30 PM", L"10:00 PM", L"10:30 PM", L"11:00 PM", L"11:30 PM",
					L" "
			});
			this->sbox->Location = System::Drawing::Point(94, 144);
			this->sbox->Name = L"sbox";
			this->sbox->Size = System::Drawing::Size(113, 25);
			this->sbox->TabIndex = 20;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Adobe Fan Heiti Std B", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->button2->Location = System::Drawing::Point(363, 285);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 37);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Adobe Fan Heiti Std B", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->button1->Location = System::Drawing::Point(215, 285);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 37);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label4->Location = System::Drawing::Point(5, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 19);
			this->label4->TabIndex = 17;
			this->label4->Text = L"End hour :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label3->Location = System::Drawing::Point(5, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 19);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Start hour :";
			// 
			// locbox
			// 
			this->locbox->BackColor = System::Drawing::Color::SkyBlue;
			this->locbox->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->locbox->Location = System::Drawing::Point(94, 95);
			this->locbox->Name = L"locbox";
			this->locbox->Size = System::Drawing::Size(187, 24);
			this->locbox->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label2->Location = System::Drawing::Point(5, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 19);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Location :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 21, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label1->Location = System::Drawing::Point(1, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 37);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Event Name :";
			// 
			// evenbox
			// 
			this->evenbox->BackColor = System::Drawing::Color::SkyBlue;
			this->evenbox->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->evenbox->Location = System::Drawing::Point(196, 6);
			this->evenbox->Name = L"evenbox";
			this->evenbox->Size = System::Drawing::Size(296, 39);
			this->evenbox->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label5->Location = System::Drawing::Point(312, 144);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 20);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Day :";
			// 
			// daybox
			// 
			this->daybox->BackColor = System::Drawing::Color::SkyBlue;
			this->daybox->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->daybox->FormattingEnabled = true;
			this->daybox->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07", L"08",
					L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"15", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->daybox->Location = System::Drawing::Point(378, 144);
			this->daybox->Name = L"daybox";
			this->daybox->Size = System::Drawing::Size(113, 25);
			this->daybox->TabIndex = 23;
			this->daybox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox1_SelectedIndexChanged);
			// 
			// monbox
			// 
			this->monbox->BackColor = System::Drawing::Color::SkyBlue;
			this->monbox->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->monbox->FormattingEnabled = true;
			this->monbox->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"January", L"February", L"March", L"April", L"May",
					L"June", L"July", L"August", L"September", L"October", L"Novomber", L"December"
			});
			this->monbox->Location = System::Drawing::Point(378, 95);
			this->monbox->Name = L"monbox";
			this->monbox->Size = System::Drawing::Size(113, 25);
			this->monbox->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label6->Location = System::Drawing::Point(301, 96);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 20);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Month :";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Adobe Fan Heiti Std B", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->button3->Location = System::Drawing::Point(8, 242);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(189, 80);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Add to events";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// Events
			// 
			this->Events->BackColor = System::Drawing::Color::SkyBlue;
			this->Events->FormattingEnabled = true;
			this->Events->HorizontalScrollbar = true;
			this->Events->Location = System::Drawing::Point(498, 6);
			this->Events->Name = L"Events";
			this->Events->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Events->Size = System::Drawing::Size(316, 316);
			this->Events->TabIndex = 28;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Adobe Fan Heiti Std B", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->button4->Location = System::Drawing::Point(363, 242);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(129, 37);
			this->button4->TabIndex = 29;
			this->button4->Text = L"Remove";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Adobe Fan Heiti Std B", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->button5->Location = System::Drawing::Point(215, 242);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(129, 37);
			this->button5->TabIndex = 30;
			this->button5->Text = L"Clear All";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Adobe Fan Heiti Std B", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->button6->Location = System::Drawing::Point(215, 199);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(277, 37);
			this->button6->TabIndex = 31;
			this->button6->Text = L"Load Events";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(817, 325);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->Events);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->monbox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->daybox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->enbox);
			this->Controls->Add(this->sbox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->locbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->evenbox);
			this->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//save button
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		System::IO::StreamWriter^ savefile = gcnew System::IO::StreamWriter("Events1.txt");

	for (int i = 0;i < Events->Items->Count;i++)  
	{
		savefile->WriteLine(Events->Items[i]);
	}
	savefile->Close();
	}
		 //back button
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
//add button
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ rec = "Month->" + monbox->Text + "\t" + "Day->" + daybox->Text + "\n" +
		"StartTime->" + sbox->Text + "    " + "EventName->" + evenbox->Text + "\n" + 
		"EndTime->" + enbox->Text + "    " + "Location->" + locbox->Text+"\n"+"---------------------------------------------"+"\n";
	Events->Items->Add(rec);
}
	//Remove Button	 
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Events->Items->Remove(Events->SelectedItem);
}
		 //Clear Button
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Events->Items->Clear();
}
		 //Load Button
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	System::IO::StreamReader^ outfile = gcnew System::IO::StreamReader("Events1.txt");
	Events->Items->Clear();
	while (!outfile->EndOfStream)
	{					
		Events->Items->Add(outfile->ReadLine());
	}
	outfile->Close();
}
};
}
//This program coded and designed by:
//1-Mohi Eddin Ahmed Fathi Ahmed.
//2-Mostafa Ali Mohamed Ali.
//3-Mostafa Ashraf Maamoun.
//4-Moaz Abdo Abd-allah.
//5-Mostafa Abd-ELmohsen Hasneen.
