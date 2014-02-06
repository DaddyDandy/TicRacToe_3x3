#include "XOGame.h"
#include "StdAfx.h"
#include <windows.h>
#pragma once

namespace XO
{
	Game G;
	int hspace = 150,vspace = 150;
	int buttonWidth = 150, buttonHeight = 150;
	int whichGame;
	int winsOfO=0,winsOfX=0,draw=0;
	//int formWidth = 470, formHeight = 630;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: array <Button^, 2>^ myField;//ÒÓÁ‰‡ÌËÂ Ï‡ÒË‚‡ ÍÌÓÔÓÍ
	private: int line; 
	private: int row;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  gameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  Í‡Í»„‡Ú¸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÂÒÚ‡ÚToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ‚˚ıÓ‰ToolStripMenuItem;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ToolStripMenuItem^  Ë„ÓÍToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  Ë„ÓÍ‡ToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ToolStripMenuItem^  ÌÓ‚‡ˇ»„‡ToolStripMenuItem;






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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->gameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ë„ÓÍToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ë„ÓÍ‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Í‡Í»„‡Ú¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÂÒÚ‡ÚToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚˚ıÓ‰ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->gameToolStripMenuItem, 
				this->ÂÒÚ‡ÚToolStripMenuItem, this->‚˚ıÓ‰ToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(470, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// gameToolStripMenuItem
			// 
			this->gameToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem, 
				this->Ë„ÓÍToolStripMenuItem, this->Ë„ÓÍ‡ToolStripMenuItem, this->Í‡Í»„‡Ú¸ToolStripMenuItem});
			this->gameToolStripMenuItem->Name = L"gameToolStripMenuItem";
			this->gameToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->gameToolStripMenuItem->Text = L"ÃÂÌ˛";
			// 
			// ÌÓ‚‡ˇ»„‡ToolStripMenuItem
			// 
			this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem->Name = L"ÌÓ‚‡ˇ»„‡ToolStripMenuItem";
			this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem->Text = L"ÕÓ‚‡ˇ Ë„‡";
			this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ÌÓ‚‡ˇ»„‡ToolStripMenuItem_Click);
			// 
			// Ë„ÓÍToolStripMenuItem
			// 
			this->Ë„ÓÍToolStripMenuItem->Name = L"Ë„ÓÍToolStripMenuItem";
			this->Ë„ÓÍToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->Ë„ÓÍToolStripMenuItem->Text = L"1 Ë„ÓÍ";
			this->Ë„ÓÍToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::Ë„ÓÍToolStripMenuItem_Click);
			// 
			// Ë„ÓÍ‡ToolStripMenuItem
			// 
			this->Ë„ÓÍ‡ToolStripMenuItem->Name = L"Ë„ÓÍ‡ToolStripMenuItem";
			this->Ë„ÓÍ‡ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->Ë„ÓÍ‡ToolStripMenuItem->Text = L"2 Ë„ÓÍ‡";
			this->Ë„ÓÍ‡ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::Ë„ÓÍ‡ToolStripMenuItem_Click);
			// 
			// Í‡Í»„‡Ú¸ToolStripMenuItem
			// 
			this->Í‡Í»„‡Ú¸ToolStripMenuItem->Name = L"Í‡Í»„‡Ú¸ToolStripMenuItem";
			this->Í‡Í»„‡Ú¸ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->Í‡Í»„‡Ú¸ToolStripMenuItem->Text = L" ‡Í Ë„‡Ú¸\?";
			this->Í‡Í»„‡Ú¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::Í‡Í»„‡Ú¸ToolStripMenuItem_Click);
			// 
			// ÂÒÚ‡ÚToolStripMenuItem
			// 
			this->ÂÒÚ‡ÚToolStripMenuItem->Name = L"ÂÒÚ‡ÚToolStripMenuItem";
			this->ÂÒÚ‡ÚToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->ÂÒÚ‡ÚToolStripMenuItem->Text = L"–ÂÒÚ‡Ú";
			this->ÂÒÚ‡ÚToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ÂÒÚ‡ÚToolStripMenuItem_Click);
			// 
			// ‚˚ıÓ‰ToolStripMenuItem
			// 
			this->‚˚ıÓ‰ToolStripMenuItem->Name = L"‚˚ıÓ‰ToolStripMenuItem";
			this->‚˚ıÓ‰ToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->‚˚ıÓ‰ToolStripMenuItem->Text = L"¬˚ıÓ‰";
			this->‚˚ıÓ‰ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::‚˚ıÓ‰ToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(167, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"—ÂÈ˜‡Ò ıÓ‰ËÚ :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(323, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Ù";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 23);
			this->label1->TabIndex = 4;
			this->label1->Text = L"œÓ·Â‰ Û ÍÂÒÚËÍ‡ :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(13, 72);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 23);
			this->label4->TabIndex = 5;
			this->label4->Text = L"œÓ·Â‰ Û ÌÓÎËÍ‡ :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(210, 48);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 24);
			this->label5->TabIndex = 6;
			this->label5->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Blue;
			this->label6->Location = System::Drawing::Point(210, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 24);
			this->label6->TabIndex = 7;
			this->label6->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(13, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 23);
			this->label7->TabIndex = 8;
			this->label7->Text = L"ÕË˜¸ˇ :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::Lime;
			this->label8->Location = System::Drawing::Point(210, 94);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 24);
			this->label8->TabIndex = 9;
			this->label8->Text = L"0";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(470, 630);
			this->ControlBox = false;
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tic-Tac-Toe";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
			 {

			 }
//—ÓÁ‰‡ÌËÂ ÍÌÓÔÓÍ
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 winsOfO=0;	winsOfX=0;	draw=0;
				 whichGame=0;
				 myField = gcnew array<Button^, 2>(3, 3);
				 //start position
				 int x = 10, y = 140;
				 //
				 for(int i = 0; i < 3; i++)
				 {
					 for(int j = 0; j < 3; j++)
					 {
						 this->myField[i,j] = (gcnew System::Windows::Forms::Button());
						 this->myField[i,j]->Size = Drawing::Size(buttonWidth,buttonHeight);
						 this->myField[i,j]->Font = gcnew System::Drawing::Font(L"Garamond", 110, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204));
						 this->myField[i,j]->Text = "X";
						 this->myField[i,j]->Name = i.ToString()+j.ToString();
						 this->myField[i,j]->Location = System::Drawing::Point(x,y);
						 this->myField[i,j]->Click += gcnew System::EventHandler(this, &Form1::MyGame);//Ù-ˇ ÍÎËÍ‡
						 Controls->Add(myField[i,j]);
						 x+=vspace;
					 }
					 y+=hspace;
					 x=10; 
				 }
				 Clear();
			 }

//Game
	private: System::Void MyGame(System::Object^  sender, System::EventArgs^  e){
				 dynamic_cast<Button^>(sender);
				 int indexOfBotton=Convert::ToInt32( dynamic_cast<Button^>(sender)->Name);
				 line=indexOfBotton/10;
				 row=indexOfBotton%10;

				 if(whichGame == 0){}

				 if(whichGame == 2)
				 {
					 if(G.Steps(line,row) != false)
					 {
						 G.Gaming(line,row);
								 if(G.gameField[line][row] == 1)
								 {
									 myField[line,row]->Text = "X";
									 myField[line,row]->ForeColor = System::Drawing::Color::Red;
									 label3->Text = "O";
								 }
								 else if(G.gameField[line][row] == 2)
								 {
									 myField[line,row]->Text = "O";
									 myField[line,row]->ForeColor = System::Drawing::Color::Blue;
									 label3->Text = "X";
								 }
					 }
				 }
				 if(whichGame == 1)
				 {
					 if(G.Steps(line,row) != false)
					 {
						 G.Gaming(line,row);
						 G.NPC();
						 for(line = 0; line < 3; ++line)
							 for(row = 0; row < 3; ++row)
							 {

								 if(G.gameField[line][row] == 1)
								 {
									 myField[line,row]->Text = "X";
									 myField[line,row]->ForeColor = System::Drawing::Color::Red;
									 label3->Text = "O";
								 }
								 else if(G.gameField[line][row] == 2)
								 {
									 myField[line,row]->Text = "O";
									 myField[line,row]->ForeColor = System::Drawing::Color::Blue;
									 label3->Text = "X";
								 }
							 }
					 }
					 {G.NPC();
						 for(line = 0; line < 3; ++line)
							 for(row = 0; row < 3; ++row)
							 {

								 if(G.gameField[line][row] == 1)
								 {
									 myField[line,row]->Text = "X";
									 myField[line,row]->ForeColor = System::Drawing::Color::Red;
									 label3->Text = "O";
								 }
								 else if(G.gameField[line][row] == 2)
								 {
									 myField[line,row]->Text = "O";
									 myField[line,row]->ForeColor = System::Drawing::Color::Blue;
									 label3->Text = "X";
								 }
							 }
					 }
				 }
				switch(G.WhoWin())
				{
				case 1: MessageBox::Show("X œŒ¡≈ƒ»À !!!");Clear();winsOfX++;label5->Text=winsOfX.ToString();break;
				case 2: MessageBox::Show("O œŒ¡≈ƒ»À !!!");Clear();winsOfO++;label6->Text=winsOfO.ToString();break;
				case 3: MessageBox::Show("Õ»◊‹ﬂ 8)");Clear();draw++;label8->Text=draw.ToString();break;
				}
				 
}

//Œ˜ËÒÚÍ‡ ÔÓÎˇ
			 void Clear()
			 {
				 for(int i = 0; i < 3; ++i)
					 for( int j = 0; j< 3; ++j)
					 {
						 myField[i,j]->Text = " ";
					 }
				label3->Text = "X";
				G.ClearField();
			 }

private: System::Void ÂÒÚ‡ÚToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Clear();
		 }
private: System::Void ‚˚ıÓ‰ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::Close();
		 }
private: System::Void Í‡Í»„‡Ú¸ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 MessageBox::Show("ÕÓ‚‡ˇ Ë„‡ - Ó·ÌÛÎËÚ¸ Ò˜ÂÚ \n–ÂÒÚ‡Ú - Ó˜ËÒÚËÚ¸ ÔÓÎÂ Ë„˚ \n¬˚ıÓ‰ - ÔÓÍËÌÛÚ¸ Ë„Û\n1 Ë„ÓÍ - Ë„‡Ú¸ ÔÓÚË‚ ÍÓÏÔ¸˛ÚÂ‡\n2 Ë„ÓÍ‡ - Ë„‡Ú¸ ‰Û„ ÔÓÚË‚ ‰Û„‡\n====================================================\n»„‡ Ì‡˜ËÌ‡ÂÚÒˇ ÔÓÒÎÂ ‚˚·Ó‡ ÂÊËÏ‡ Ë„˚(1 ËÎË 2 Ë„ÓÍ‡). »„Û Ì‡˜ËÌ‡ÂÚ ’(ÍÂÒÚËÍ). »„ÓÍË ıÓ‰ˇÚ ÔÓ Ó˜ÂÂ‰Ë, ÔÓ·ÂÊ‰‡ÂÚ ÓÚ, ÍÚÓ ÔÂ‚˚Ï ‚˚ÒÚÓËÚ ÔÓÎÂ‰Ó‚‡ÚÂÎ¸ÌÓÒÚ¸ ËÁ 3(Ò‚ÓËı) ÁÌ‡ÍÓ‚ ÔÓ „ÓËÁÓÌÚ‡ÎË/‚ÂÚËÍ‡ÎË/‰Ë‡„ÓÌ‡ÎË.\nœËˇÚÌÓÈ Ë„˚!");
		 }
private: System::Void Ë„ÓÍToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Clear();whichGame=1;label5->Text="0";label8->Text="0";label6->Text="0";winsOfO=0;winsOfX=0;draw=0;
		 }
private: System::Void Ë„ÓÍ‡ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Clear();whichGame=2;label5->Text="0";label8->Text="0";label6->Text="0";winsOfO=0;winsOfX=0;draw=0;
		 }
private: System::Void ÌÓ‚‡ˇ»„‡ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Clear();whichGame=2;label5->Text="0";label8->Text="0";label6->Text="0";winsOfO=0;winsOfX=0;draw=0;
		 }
};

}