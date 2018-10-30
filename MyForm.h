#pragma once
#include <Windows.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>


namespace TicTacToe {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	bool turn; //it's about turn
	char _p[9];
	char testboard[9];
	char tab[9];
	int player1_score, player2_score;



	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  Menu_SinglePlayer;
	private: System::Windows::Forms::ToolStripMenuItem^  Menu_1v1;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::Label^  label_Player1;
	private: System::Windows::Forms::Label^  label_Player2;
	private: System::Windows::Forms::PictureBox^  Picture_Player1;
	private: System::Windows::Forms::PictureBox^  Picture_Player2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  p7;
	private: System::Windows::Forms::PictureBox^  p9;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  p8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  p6;
	private: System::Windows::Forms::PictureBox^  p5;
	private: System::Windows::Forms::PictureBox^  p4;
	private: System::Windows::Forms::PictureBox^  p3;
	private: System::Windows::Forms::PictureBox^  p2;
	private: System::Windows::Forms::PictureBox^  p1;

	private:
	private: System::Windows::Forms::PictureBox^  Picture_Turn;
	private: System::Windows::Forms::TextBox^  TextBox_Player1;
	private: System::Windows::Forms::TextBox^  TextBox_Player2;
	private: System::Windows::Forms::ToolStripMenuItem^  Menu_1v1_NewGame;
	private: System::Windows::Forms::ToolStripMenuItem^  Menu_Single_NewGame;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Menu_SinglePlayer = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Menu_Single_NewGame = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Menu_1v1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Menu_1v1_NewGame = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label_Player1 = (gcnew System::Windows::Forms::Label());
			this->label_Player2 = (gcnew System::Windows::Forms::Label());
			this->Picture_Player1 = (gcnew System::Windows::Forms::PictureBox());
			this->Picture_Player2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->p7 = (gcnew System::Windows::Forms::PictureBox());
			this->p9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->p8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->p6 = (gcnew System::Windows::Forms::PictureBox());
			this->p5 = (gcnew System::Windows::Forms::PictureBox());
			this->p4 = (gcnew System::Windows::Forms::PictureBox());
			this->p3 = (gcnew System::Windows::Forms::PictureBox());
			this->p2 = (gcnew System::Windows::Forms::PictureBox());
			this->p1 = (gcnew System::Windows::Forms::PictureBox());
			this->Picture_Turn = (gcnew System::Windows::Forms::PictureBox());
			this->TextBox_Player1 = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Player2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Picture_Player1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Picture_Player2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Picture_Turn))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->Menu_SinglePlayer,
					this->Menu_1v1, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(309, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Menu_SinglePlayer
			// 
			this->Menu_SinglePlayer->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Menu_Single_NewGame });
			this->Menu_SinglePlayer->Name = L"Menu_SinglePlayer";
			this->Menu_SinglePlayer->Size = System::Drawing::Size(86, 20);
			this->Menu_SinglePlayer->Text = L"Single Player";
			// 
			// Menu_Single_NewGame
			// 
			this->Menu_Single_NewGame->Name = L"Menu_Single_NewGame";
			this->Menu_Single_NewGame->Size = System::Drawing::Size(131, 22);
			this->Menu_Single_NewGame->Text = L"New game";
			this->Menu_Single_NewGame->Click += gcnew System::EventHandler(this, &MyForm::Click_SinglePlayer);
			// 
			// Menu_1v1
			// 
			this->Menu_1v1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Menu_1v1_NewGame });
			this->Menu_1v1->Name = L"Menu_1v1";
			this->Menu_1v1->Size = System::Drawing::Size(48, 20);
			this->Menu_1v1->Text = L"1 vs 1";
			// 
			// Menu_1v1_NewGame
			// 
			this->Menu_1v1_NewGame->Name = L"Menu_1v1_NewGame";
			this->Menu_1v1_NewGame->Size = System::Drawing::Size(131, 22);
			this->Menu_1v1_NewGame->Text = L"New game";
			this->Menu_1v1_NewGame->Click += gcnew System::EventHandler(this, &MyForm::Menu_1v1_NewGame_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// label_Player1
			// 
			this->label_Player1->AutoSize = true;
			this->label_Player1->Location = System::Drawing::Point(58, 13);
			this->label_Player1->Name = L"label_Player1";
			this->label_Player1->Size = System::Drawing::Size(45, 13);
			this->label_Player1->TabIndex = 1;
			this->label_Player1->Text = L"Player 1";
			// 
			// label_Player2
			// 
			this->label_Player2->AutoSize = true;
			this->label_Player2->Location = System::Drawing::Point(206, 13);
			this->label_Player2->Name = L"label_Player2";
			this->label_Player2->Size = System::Drawing::Size(45, 13);
			this->label_Player2->TabIndex = 2;
			this->label_Player2->Text = L"Player 2";
			// 
			// Picture_Player1
			// 
			this->Picture_Player1->Location = System::Drawing::Point(12, 13);
			this->Picture_Player1->Name = L"Picture_Player1";
			this->Picture_Player1->Size = System::Drawing::Size(40, 40);
			this->Picture_Player1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Picture_Player1->TabIndex = 3;
			this->Picture_Player1->TabStop = false;
			// 
			// Picture_Player2
			// 
			this->Picture_Player2->Location = System::Drawing::Point(257, 13);
			this->Picture_Player2->Name = L"Picture_Player2";
			this->Picture_Player2->Size = System::Drawing::Size(40, 40);
			this->Picture_Player2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Picture_Player2->TabIndex = 4;
			this->Picture_Player2->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->p7);
			this->groupBox1->Controls->Add(this->p9);
			this->groupBox1->Controls->Add(this->pictureBox7);
			this->groupBox1->Controls->Add(this->p8);
			this->groupBox1->Controls->Add(this->pictureBox9);
			this->groupBox1->Controls->Add(this->pictureBox8);
			this->groupBox1->Controls->Add(this->p6);
			this->groupBox1->Controls->Add(this->p5);
			this->groupBox1->Controls->Add(this->p4);
			this->groupBox1->Controls->Add(this->p3);
			this->groupBox1->Controls->Add(this->p2);
			this->groupBox1->Controls->Add(this->p1);
			this->groupBox1->Location = System::Drawing::Point(12, 86);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(285, 218);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			// 
			// p7
			// 
			this->p7->AccessibleName = L"";
			this->p7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->p7->Location = System::Drawing::Point(54, 144);
			this->p7->Margin = System::Windows::Forms::Padding(0);
			this->p7->Name = L"p7";
			this->p7->Size = System::Drawing::Size(60, 60);
			this->p7->TabIndex = 6;
			this->p7->TabStop = false;
			this->p7->Tag = L"";
			this->p7->Click += gcnew System::EventHandler(this, &MyForm::Click_p7);
			// 
			// p9
			// 
			this->p9->AccessibleName = L"";
			this->p9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->p9->Location = System::Drawing::Point(174, 144);
			this->p9->Margin = System::Windows::Forms::Padding(0);
			this->p9->Name = L"p9";
			this->p9->Size = System::Drawing::Size(60, 60);
			this->p9->TabIndex = 11;
			this->p9->TabStop = false;
			this->p9->Tag = L"";
			this->p9->Click += gcnew System::EventHandler(this, &MyForm::Click_p9);
			// 
			// pictureBox7
			// 
			this->pictureBox7->AccessibleName = L"";
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox7->Location = System::Drawing::Point(54, 144);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(60, 60);
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Tag = L"";
			// 
			// p8
			// 
			this->p8->AccessibleName = L"";
			this->p8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->p8->Location = System::Drawing::Point(114, 144);
			this->p8->Margin = System::Windows::Forms::Padding(0);
			this->p8->Name = L"p8";
			this->p8->Size = System::Drawing::Size(60, 60);
			this->p8->TabIndex = 10;
			this->p8->TabStop = false;
			this->p8->Tag = L"";
			this->p8->Click += gcnew System::EventHandler(this, &MyForm::Click_p8);
			// 
			// pictureBox9
			// 
			this->pictureBox9->AccessibleName = L"";
			this->pictureBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox9->Location = System::Drawing::Point(174, 144);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(60, 60);
			this->pictureBox9->TabIndex = 11;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Tag = L"";
			// 
			// pictureBox8
			// 
			this->pictureBox8->AccessibleName = L"";
			this->pictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox8->Location = System::Drawing::Point(114, 144);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(60, 60);
			this->pictureBox8->TabIndex = 10;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Tag = L"";
			// 
			// p6
			// 
			this->p6->AccessibleName = L"";
			this->p6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->p6->Location = System::Drawing::Point(174, 84);
			this->p6->Margin = System::Windows::Forms::Padding(0);
			this->p6->Name = L"p6";
			this->p6->Size = System::Drawing::Size(60, 60);
			this->p6->TabIndex = 5;
			this->p6->TabStop = false;
			this->p6->Tag = L"";
			this->p6->Click += gcnew System::EventHandler(this, &MyForm::Click_p6);
			// 
			// p5
			// 
			this->p5->AccessibleName = L"";
			this->p5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->p5->Location = System::Drawing::Point(114, 84);
			this->p5->Margin = System::Windows::Forms::Padding(0);
			this->p5->Name = L"p5";
			this->p5->Size = System::Drawing::Size(60, 60);
			this->p5->TabIndex = 4;
			this->p5->TabStop = false;
			this->p5->Tag = L"";
			this->p5->Click += gcnew System::EventHandler(this, &MyForm::Click_p5);
			// 
			// p4
			// 
			this->p4->AccessibleName = L"";
			this->p4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->p4->Location = System::Drawing::Point(54, 84);
			this->p4->Margin = System::Windows::Forms::Padding(0);
			this->p4->Name = L"p4";
			this->p4->Size = System::Drawing::Size(60, 60);
			this->p4->TabIndex = 3;
			this->p4->TabStop = false;
			this->p4->Tag = L"";
			this->p4->Click += gcnew System::EventHandler(this, &MyForm::Click_p4);
			// 
			// p3
			// 
			this->p3->AccessibleName = L"";
			this->p3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->p3->Location = System::Drawing::Point(174, 24);
			this->p3->Margin = System::Windows::Forms::Padding(0);
			this->p3->Name = L"p3";
			this->p3->Size = System::Drawing::Size(60, 60);
			this->p3->TabIndex = 2;
			this->p3->TabStop = false;
			this->p3->Tag = L"";
			this->p3->Click += gcnew System::EventHandler(this, &MyForm::Click_p3);
			// 
			// p2
			// 
			this->p2->AccessibleName = L"";
			this->p2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->p2->Location = System::Drawing::Point(114, 24);
			this->p2->Margin = System::Windows::Forms::Padding(0);
			this->p2->Name = L"p2";
			this->p2->Size = System::Drawing::Size(60, 60);
			this->p2->TabIndex = 1;
			this->p2->TabStop = false;
			this->p2->Tag = L"";
			this->p2->Click += gcnew System::EventHandler(this, &MyForm::Click_p2);
			// 
			// p1
			// 
			this->p1->AccessibleName = L"";
			this->p1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->p1->Location = System::Drawing::Point(54, 24);
			this->p1->Margin = System::Windows::Forms::Padding(0);
			this->p1->Name = L"p1";
			this->p1->Size = System::Drawing::Size(60, 60);
			this->p1->TabIndex = 0;
			this->p1->TabStop = false;
			this->p1->Tag = L"";
			this->p1->Click += gcnew System::EventHandler(this, &MyForm::Click_p1);
			// 
			// Picture_Turn
			// 
			this->Picture_Turn->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Picture_Turn->Location = System::Drawing::Point(136, 12);
			this->Picture_Turn->Name = L"Picture_Turn";
			this->Picture_Turn->Size = System::Drawing::Size(40, 40);
			this->Picture_Turn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Picture_Turn->TabIndex = 7;
			this->Picture_Turn->TabStop = false;
			// 
			// TextBox_Player1
			// 
			this->TextBox_Player1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBox_Player1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->TextBox_Player1->Location = System::Drawing::Point(61, 32);
			this->TextBox_Player1->Name = L"TextBox_Player1";
			this->TextBox_Player1->ReadOnly = true;
			this->TextBox_Player1->Size = System::Drawing::Size(42, 13);
			this->TextBox_Player1->TabIndex = 8;
			this->TextBox_Player1->TabStop = false;
			this->TextBox_Player1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// TextBox_Player2
			// 
			this->TextBox_Player2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBox_Player2->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->TextBox_Player2->Location = System::Drawing::Point(209, 33);
			this->TextBox_Player2->Name = L"TextBox_Player2";
			this->TextBox_Player2->ReadOnly = true;
			this->TextBox_Player2->Size = System::Drawing::Size(42, 13);
			this->TextBox_Player2->TabIndex = 9;
			this->TextBox_Player2->TabStop = false;
			this->TextBox_Player2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->TextBox_Player2);
			this->groupBox2->Controls->Add(this->Picture_Player1);
			this->groupBox2->Controls->Add(this->TextBox_Player1);
			this->groupBox2->Controls->Add(this->label_Player1);
			this->groupBox2->Controls->Add(this->Picture_Turn);
			this->groupBox2->Controls->Add(this->label_Player2);
			this->groupBox2->Controls->Add(this->Picture_Player2);
			this->groupBox2->Location = System::Drawing::Point(0, 27);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(309, 63);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(309, 30);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Tic Tac Toe";
			this->Load += gcnew System::EventHandler(this, &MyForm::FormLoad);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Picture_Player1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Picture_Player2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Picture_Turn))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Tomasz Falarz\nLk1");
	}
	private: System::Void FormLoad(System::Object^  sender, System::EventArgs^ e) {
		MyForm::Size = System::Drawing::Size(325, 69);
		groupBox1->Visible = false;
		groupBox2->Visible = false;
		Picture_Player1->Image = Image::FromFile("O.png");
		Picture_Player2->Image = Image::FromFile("X.png");
		TextBox_Player1->Text = Convert::ToString(player1_score);
		TextBox_Player2->Text = Convert::ToString(player2_score);
	}
	private: System::Void Menu_1v1_NewGame_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm::Size = System::Drawing::Size(325, 355);
		groupBox1->Visible = true;
		groupBox2->Visible = true;
		New_1v1_Game();
	}
	private: System::Void Click_SinglePlayer(System::Object^  sender, System::EventArgs^  e) {
		MyForm::Size = System::Drawing::Size(325, 355);
		groupBox1->Visible = true;
		groupBox2->Visible = true;
		New_Single_Game();
	}
//
//		Fields and it's events 
//		Changing turn between X/O, locking fields etc
//
	private: System::Void Click_p1(System::Object^  sender, System::EventArgs^  e) {
		ClickingXO_Events(p1, _p[0]);
	}
	private: System::Void Click_p2(System::Object^  sender, System::EventArgs^  e) {
		ClickingXO_Events(p2, _p[1]);
	}
	private: System::Void Click_p3(System::Object^  sender, System::EventArgs^  e) {
		ClickingXO_Events(p3, _p[2]);
	}
	private: System::Void Click_p4(System::Object^  sender, System::EventArgs^  e) {
		ClickingXO_Events(p4, _p[3]);
	}
	private: System::Void Click_p5(System::Object^  sender, System::EventArgs^  e) {
		ClickingXO_Events(p5, _p[4]);
	}
	private: System::Void Click_p6(System::Object^  sender, System::EventArgs^  e) {
		ClickingXO_Events(p6, _p[5]);
	}
	private: System::Void Click_p7(System::Object^  sender, System::EventArgs^  e) {
		ClickingXO_Events(p7, _p[6]);
	}
	private: System::Void Click_p8(System::Object^  sender, System::EventArgs^  e) {
		ClickingXO_Events(p8, _p[7]);
	}
	private: System::Void Click_p9(System::Object^  sender, System::EventArgs^  e) {
		ClickingXO_Events(p9, _p[8]);
	}

			 //	Logic of the game (Looking for draw/win/new game/new round...)

			 void New_Single_Game() {
				 Menu_1v1_NewGame->CheckState = CheckState::Unchecked;
				 Menu_Single_NewGame->CheckState = CheckState::Checked;

				 label_Player1->Text = "Player";
				 label_Player2->Text = "Mr Core";
				 CleanArray();

				 srand(time(NULL));
				 turn = rand() % 2;

				 player1_score = player2_score = 0;

				 TextBox_Player1->Text = Convert::ToString(player1_score);
				 TextBox_Player2->Text = Convert::ToString(player1_score);

				 if (turn) {
					 Picture_Turn->Image = Image::FromFile("O.png");
				 }
				 else {
					 Picture_Turn->Image = Image::FromFile("X.png");
					 AImove(_p);
					 JustDrawingMyself();
					 turn = !turn;
				 }

			 }
			 void New_1v1_Game() {
				 Menu_Single_NewGame->CheckState = CheckState::Unchecked;
				 Menu_1v1_NewGame->CheckState = CheckState::Checked;

				 CleanArray();					//Unlocking fields, cleaning array
				 srand(time(NULL));
				 turn = rand() % 2;				//Choosing between X and O by random mode
				 label_Player1->Text = "Player O";
				 label_Player2->Text = "Player X";				//In this case Player 2 is just Player 2 :D
				 player1_score = player2_score = 0;				 //Cleaning score
				 TextBox_Player1->Text = Convert::ToString(player1_score);	//Displaying it on screen
				 TextBox_Player2->Text = Convert::ToString(player1_score);
				 //Displaying turn
				 if (turn) {
					 Picture_Turn->Image = Image::FromFile("O.png");
				 }
				 else {
					 Picture_Turn->Image = Image::FromFile("X.png");
				 }
			 }
			 //It allows X/O drawing
			 //Contains WinEvent(), AImove(), JustDrawingMyself()
			 void ClickingXO_Events(PictureBox^ p, char &val) {
				 if (Menu_1v1_NewGame->CheckState == CheckState::Checked) {
					 switch (turn) {
					 case 1:
						 p->Image = Image::FromFile("O.png");
						 p->Enabled = false;

						 val = 'o';
						 if (winner() != NULL) {
							 WinEvent();
						 }
						 else {
							 turn = !turn;

							 Picture_Turn->Image = Image::FromFile("X.png");
						 }
						 break;
					 case 0:
						 p->Image = Image::FromFile("X.png");
						 p->Enabled = false;

						 val = 'x';
						 if (winner() != NULL) {
							 WinEvent();
						 }
						 else {
							 turn = !turn;

							 Picture_Turn->Image = Image::FromFile("O.png");
						 }
						 break;
					 }
				 }
				 else if (Menu_Single_NewGame->CheckState == CheckState::Checked) {
					 if (turn) {
						 //Player move
						 p->Image = Image::FromFile("O.png");
						 p->Enabled = false;
						 val = 'o';

						 if (winner() != NULL)
							 WinEvent();
						 else {
							 turn = !turn;
							 Picture_Turn->Image = Image::FromFile("X.png");

							 //Ai move
							 AImove(_p);

							 JustDrawingMyself();

							 if (winner() != NULL)
								 WinEvent();
							 else {
								 turn = !turn;
								 Picture_Turn->Image = Image::FromFile("O.png");
							 }
						 }
					 }
				 }
			 }
			 //Starts new round. If someone has three points MessageBox pops out with a winner and new game starts
			 //In 1 v Mr Core game, if turn == false it lets Mr Core to start new tour
			 //Contains New_Single_Game(), New_1v1_Game(), AImove(), CleanArray(), JustDrawingMyself()
			 void NewRound() {
				 if (player1_score == 3 && player2_score == 3) {
					 MessageBox::Show("Congratulations! It's draw", "Form Closing", MessageBoxButtons::OK, MessageBoxIcon::Information);
					 if (Menu_Single_NewGame->CheckState == CheckState::Checked) {
						 New_Single_Game();
					 }
					 else if (Menu_1v1_NewGame->CheckState == CheckState::Checked) {
						 New_1v1_Game();
					 }
				 }
				 else if (player1_score == 3 || player2_score == 3) {
					 if (player1_score == 3) {
						 MessageBox::Show("Congratulations! O wins the game!");
						 if (Menu_Single_NewGame->CheckState == CheckState::Checked) {
							 New_Single_Game();
						 }
						 else if (Menu_1v1_NewGame->CheckState == CheckState::Checked) {
							 New_1v1_Game();
						 }
					 }
					 else if (player2_score == 3) {
						 MessageBox::Show("Congratulations! X wins the game!");
						 if (Menu_Single_NewGame->CheckState == CheckState::Checked) {
							 New_Single_Game();
						 }
						 else if (Menu_1v1_NewGame->CheckState == CheckState::Checked) {
							 New_1v1_Game();
						 }
					 }
				 }
				 else {
					 if (Menu_1v1_NewGame->CheckState == CheckState::Checked)
						 CleanArray();
					 else if (Menu_Single_NewGame->CheckState == CheckState::Checked) {
						 if (turn)
							 CleanArray();
						 else {
							 CleanArray();
							 AImove(_p);

							 JustDrawingMyself();

							 turn = !turn;
							 Picture_Turn->Image = Image::FromFile("O.png");
						 }
					 }
				 }
			 }
			 //Cleans whole array
			 void CleanArray() {
				 p1->Image = nullptr;	p1->Enabled = true;
				 p2->Image = nullptr;	p2->Enabled = true;
				 p3->Image = nullptr;	p3->Enabled = true;
				 p4->Image = nullptr;	p4->Enabled = true;
				 p5->Image = nullptr;	p5->Enabled = true;
				 p6->Image = nullptr;	p6->Enabled = true;
				 p7->Image = nullptr;	p7->Enabled = true;
				 p8->Image = nullptr;	p8->Enabled = true;
				 p9->Image = nullptr;	p9->Enabled = true;

				 for (int i = 0; i < 9; i++) {
					 _p[i] = 'n';
				 }

				 if (turn) {
					 Picture_Turn->Image = Image::FromFile("O.png");
				 }
				 else {
					 Picture_Turn->Image = Image::FromFile("X.png");
				 }
			 }
			 //Shows up MessageBox, adds points, turns the turn
			 //Contains winner(), NewRound()
			 void WinEvent() {
				 switch (winner()) {
				 case 'o':
					 MessageBox::Show("O Wins!");
					 ++player1_score;
					 TextBox_Player1->Text = Convert::ToString(player1_score);
					 turn = !turn;
					 NewRound();
					 break;
				 case 'x':
					 MessageBox::Show("X Wins!");
					 ++player2_score;
					 TextBox_Player2->Text = Convert::ToString(player2_score);
					 turn = !turn;
					 NewRound();
					 break;
				 case 'd':
					 MessageBox::Show("DRAW!");
					 ++player1_score;
					 ++player2_score;
					 TextBox_Player1->Text = Convert::ToString(player1_score);
					 TextBox_Player2->Text = Convert::ToString(player2_score);
					 NewRound();
					 break;
				 default:
					 break;
				 }

			 }
			 //Returns winners (turn = 1 -> O wins; turn = 0 -> X wins) or draw.
			 //Contains xyWin(), isDraw()
			 char winner() {
				 switch (xyWin(_p)) {
				 case 1:
					 switch (turn) {
					 case 1:
						 return 'o';
						 break;
					 case 0:
						 return 'x';
						 break;
					 }
				 default:
					 break;
				 }

				 switch (isDraw(_p)) {
				 case 1:
					 return 'd';
					 break;
				 default:
					 break;
				 }
			 }
			 //Returns x/o win statement (true/false)
			 bool xyWin(char arr[]) {
				 if ((arr[0] == arr[1] && arr[1] == arr[2] && arr[0] != 'n') ||
					 (arr[3] == arr[4] && arr[4] == arr[5] && arr[3] != 'n') ||
					 (arr[6] == arr[7] && arr[7] == arr[8] && arr[6] != 'n') ||
					 (arr[0] == arr[3] && arr[3] == arr[6] && arr[0] != 'n') ||
					 (arr[1] == arr[4] && arr[4] == arr[7] && arr[1] != 'n') ||
					 (arr[2] == arr[5] && arr[5] == arr[8] && arr[2] != 'n') ||
					 (arr[0] == arr[4] && arr[4] == arr[8] && arr[0] != 'n') ||
					 (arr[2] == arr[4] && arr[4] == arr[6] && arr[2] != 'n')) {
					 return true;
				 }
				 else {
					 return false;
				 }
			 }
			 //Returns draw(tie) statement (true/false)
			 bool isDraw(char arr[]) {
				 if (arr[0] != 'n' && arr[1] != 'n' && arr[2] != 'n' &&
					 arr[3] != 'n' && arr[4] != 'n' && arr[5] != 'n' &&
					 arr[6] != 'n' && arr[7] != 'n' && arr[8] != 'n') {
					 return true;
				 }
				 else {
					 return false;
				 }
			 }

			 //			AI

			 //This function draws X and secures current field from accidental user's click
			 void DrawXevent(PictureBox^ pic, char arg) {
				 if (arg == 'x') {
					 pic->Image = Image::FromFile("x.png");
					 pic->Enabled = false;
				 }
				 else {}
			 }
			 //Just for making the code more clear. DrawXevent function for each of 9 containers
			 void JustDrawingMyself() {
				 DrawXevent(p1, _p[0]);
				 DrawXevent(p2, _p[1]);
				 DrawXevent(p3, _p[2]);
				 DrawXevent(p4, _p[3]);
				 DrawXevent(p5, _p[4]);
				 DrawXevent(p6, _p[5]);
				 DrawXevent(p7, _p[6]);
				 DrawXevent(p8, _p[7]);
				 DrawXevent(p9, _p[8]);
			 }
			 //This function takes a decision if algorythm is able to attack from current position
			 bool xySemiWin(char arr[], int numberOfArray) {
				 switch (numberOfArray) {
				 case 0:
					 if (//horizontal 1
						 (arr[0] == arr[1] && arr[2] == 'n' && arr[0] == 'x') ||	//	x	x	x
						 (arr[1] == arr[2] && arr[0] == 'n' && arr[1] == 'x') ||	//
						 (arr[0] == arr[2] && arr[1] == 'n' && arr[0] == 'x') ||	//
						 //vertical 1
						 (arr[0] == arr[3] && arr[6] == 'n' && arr[0] == 'x') ||	//	x
						 (arr[3] == arr[6] && arr[0] == 'n' && arr[3] == 'x') ||	//	x
						 (arr[0] == arr[6] && arr[3] == 'n' && arr[0] == 'x') ||	//	x
						 //L-R cross
						 (arr[0] == arr[4] && arr[8] == 'n' && arr[0] == 'x') ||	//	x
						 (arr[4] == arr[8] && arr[0] == 'n' && arr[4] == 'x') ||	//		x
						 (arr[0] == arr[8] && arr[4] == 'n' && arr[0] == 'x'))		//			x
						 return true;
					 break;
				 case 1:
					 if (//horizontal 1
						 (arr[0] == arr[1] && arr[2] == 'n' && arr[0] == 'x') ||
						 (arr[1] == arr[2] && arr[0] == 'n' && arr[1] == 'x') ||
						 (arr[0] == arr[2] && arr[1] == 'n' && arr[0] == 'x') ||
						 //vertical 2
						 (arr[1] == arr[4] && arr[7] == 'n' && arr[1] == 'x') ||
						 (arr[4] == arr[7] && arr[1] == 'n' && arr[4] == 'x') ||
						 (arr[1] == arr[7] && arr[4] == 'n' && arr[1] == 'x'))
						 return true;
					 break;
				 case 2:
					 if (//horizontal 1
						 (arr[0] == arr[1] && arr[2] == 'n' && arr[0] == 'x') ||
						 (arr[1] == arr[2] && arr[0] == 'n' && arr[1] == 'x') ||
						 (arr[0] == arr[2] && arr[1] == 'n' && arr[0] == 'x') ||
						 //vertical 3
						 (arr[2] == arr[5] && arr[8] == 'n' && arr[2] == 'x') ||
						 (arr[5] == arr[8] && arr[2] == 'n' && arr[5] == 'x') ||
						 (arr[2] == arr[8] && arr[5] == 'n' && arr[2] == 'x') ||
						 //R-L cross
						 (arr[2] == arr[4] && arr[6] == 'n' && arr[2] == 'x') ||
						 (arr[4] == arr[6] && arr[2] == 'n' && arr[4] == 'x') ||
						 (arr[2] == arr[6] && arr[4] == 'n' && arr[2] == 'x'))
						 return true;
					 break;
				 case 3:
					 if (//horizontal 2
						 (arr[3] == arr[4] && arr[5] == 'n' && arr[3] == 'x') ||
						 (arr[4] == arr[5] && arr[3] == 'n' && arr[4] == 'x') ||
						 (arr[3] == arr[5] && arr[4] == 'n' && arr[3] == 'x') ||
						 //vertical 1
						 (arr[0] == arr[3] && arr[6] == 'n' && arr[0] == 'x') ||
						 (arr[3] == arr[6] && arr[0] == 'n' && arr[3] == 'x') ||
						 (arr[0] == arr[6] && arr[3] == 'n' && arr[0] == 'x'))
						 return true;
					 break;
				 case 4:
					 if (//horizontal 2
						 (arr[3] == arr[4] && arr[5] == 'n' && arr[3] == 'x') ||
						 (arr[4] == arr[5] && arr[3] == 'n' && arr[4] == 'x') ||
						 (arr[3] == arr[5] && arr[4] == 'n' && arr[3] == 'x') ||
						 //vertical 2
						 (arr[1] == arr[4] && arr[7] == 'n' && arr[1] == 'x') ||
						 (arr[4] == arr[7] && arr[1] == 'n' && arr[4] == 'x') ||
						 (arr[1] == arr[7] && arr[4] == 'n' && arr[1] == 'x') ||
						 //R-L cross
						 (arr[2] == arr[4] && arr[6] == 'n' && arr[2] == 'x') ||
						 (arr[4] == arr[6] && arr[2] == 'n' && arr[4] == 'x') ||
						 (arr[2] == arr[6] && arr[4] == 'n' && arr[2] == 'x') ||
						 //L-R cross
						 (arr[0] == arr[4] && arr[8] == 'n' && arr[0] == 'x') ||
						 (arr[4] == arr[8] && arr[0] == 'n' && arr[4] == 'x') ||
						 (arr[0] == arr[8] && arr[4] == 'n' && arr[0] == 'x'))
						 return true;
					 break;
				 case 5:
					 if (//horizontal 2
						 (arr[3] == arr[4] && arr[5] == 'n' && arr[3] == 'x') ||
						 (arr[4] == arr[5] && arr[3] == 'n' && arr[4] == 'x') ||
						 (arr[3] == arr[5] && arr[4] == 'n' && arr[3] == 'x') ||
						 //vertical 3
						 (arr[2] == arr[5] && arr[8] == 'n' && arr[2] == 'x') ||
						 (arr[5] == arr[8] && arr[2] == 'n' && arr[5] == 'x') ||
						 (arr[2] == arr[8] && arr[5] == 'n' && arr[2] == 'x'))
						 return true;
					 break;
				 case 6:
					 if (//horizontal 3
						 (arr[6] == arr[7] && arr[8] == 'n' && arr[6] == 'x') ||
						 (arr[7] == arr[8] && arr[6] == 'n' && arr[7] == 'x') ||
						 (arr[6] == arr[8] && arr[7] == 'n' && arr[6] == 'x') ||
						 //vertical 1
						 (arr[0] == arr[3] && arr[6] == 'n' && arr[0] == 'x') ||
						 (arr[3] == arr[6] && arr[0] == 'n' && arr[3] == 'x') ||
						 (arr[0] == arr[6] && arr[3] == 'n' && arr[0] == 'x') ||
						 //R-L cross
						 (arr[2] == arr[4] && arr[6] == 'n' && arr[2] == 'x') ||
						 (arr[4] == arr[6] && arr[2] == 'n' && arr[4] == 'x') ||
						 (arr[2] == arr[6] && arr[4] == 'n' && arr[2] == 'x'))
						 return true;
					 break;
				 case 7:
					 if (//horizontal 3
						 (arr[6] == arr[7] && arr[8] == 'n' && arr[6] == 'x') ||
						 (arr[7] == arr[8] && arr[6] == 'n' && arr[7] == 'x') ||
						 (arr[6] == arr[8] && arr[7] == 'n' && arr[6] == 'x') ||
						 //vertical 2
						 (arr[1] == arr[4] && arr[7] == 'n' && arr[1] == 'x') ||
						 (arr[4] == arr[7] && arr[1] == 'n' && arr[4] == 'x') ||
						 (arr[1] == arr[7] && arr[4] == 'n' && arr[1] == 'x'))
						 return true;
					 break;
				 case 8:
					 if (//horizontal 3
						 (arr[6] == arr[7] && arr[8] == 'n' && arr[6] == 'x') ||
						 (arr[7] == arr[8] && arr[6] == 'n' && arr[7] == 'x') ||
						 (arr[6] == arr[8] && arr[7] == 'n' && arr[6] == 'x') ||
						 //vertical 3
						 (arr[2] == arr[5] && arr[8] == 'n' && arr[2] == 'x') ||
						 (arr[5] == arr[8] && arr[2] == 'n' && arr[5] == 'x') ||
						 (arr[2] == arr[8] && arr[5] == 'n' && arr[2] == 'x') ||
						 //L-R cross
						 (arr[0] == arr[4] && arr[8] == 'n' && arr[0] == 'x') ||
						 (arr[4] == arr[8] && arr[0] == 'n' && arr[4] == 'x') ||
						 (arr[0] == arr[8] && arr[4] == 'n' && arr[0] == 'x'))
						 return true;
					 break;
				 default:
					 return false;
				 }
			 }
			 //This function is responsible of taking turn by x
			 void AImove(char fields[]) {
				 /*
				 AI uses three arrays.
				 > _p array that is main array.
				 > testboard array is using for predictions
				 > tab array is using for taking final decisions as block or attack
				 */
				 for (int i = 0; i < 9; i++) {
					 testboard[i] = fields[i];
				 }

				 //If algorithm has an oportunity to attack without loss, it just do it
				 for (int i = 0; i < 9; i++) {
					 if (testboard[i] == 'n') {
						 testboard[i] = 'x';

						 if (xyWin(testboard)) {
							 switch (turn) {
							 case 1:
								 testboard[i] = 'n';
								 break;
							 case 0:
								 _p[i] = 'x';
								 goto pos;
							 }
						 }
						 else {
							 testboard[i] = 'n';
						 }
					 }
					 else {
						 continue;
					 }
				 }
				 //If middle field is empty, algorithm fills it immediately(big chance to win)
				 if (testboard[4] == 'n') {
					 _p[4] = 'x';
					 goto pos;
				 }
				 //That is only one scenario that algorithm cannot predict because of not so deep algorithm's predictions
				 else if (testboard[2] == 'o' && testboard[4] == 'x' && testboard[6] == 'o' && testboard[7] == 'n') {	//			o
					 _p[7] = 'x';																						//		x
					 goto pos;																							//	o	x
				 }
				 else {

					 for (int i = 0; i < 9; i++) {
						 if (testboard[i] == 'n') {
							 testboard[i] = 'x';


							 int result = prediction(testboard[i]);

							 if (result == 10) {
								 _p[i] = 'x';
								 break;
							 }
							 else if (result == 0) {
								 //Attack move
								 if (xySemiWin(testboard, i)) {
									 testboard[i] = 'n';
									 tab[i] = 'a';
									 continue;
								 }
								 else {
									 testboard[i] = 'n';
									 tab[i] = 'x';
									 continue;
								 }

							 }
							 else if (result == -10) {
								 testboard[i] = 'n';
								 break;
							 }
						 }
						 else
							 continue;
					 }

					 for (int i = 0; i < 9; i++) {
						 if (tab[i] == 'b') {
							 _p[i] = 'x';
							 goto pos;
						 }
					 }
					 for (int i = 0; i < 9; i++) {
						 if (tab[i] == 'a') {
							 _p[i] = 'x';
							 goto pos;
						 }
					 }
					 for (int i = 0; i < 9; i++) {
						 if (tab[i] == 'x') {
							 _p[i] = tab[i];
							 goto pos;
						 }
					 }

					 //Flushing tab array
				 pos:
					 for (int i = 0; i < 9; i++) {
						 tab[i] = 'n';
					 }
				 }
			 }
			 //Bool function predicting O move. It returns +10 (O loss) -10 (O win). char 'b' here...
			 int prediction(char field) {
				 for (int i = 0; i < 9; i++) {
					 if (testboard[i] == 'n') {
						 testboard[i] = 'o';

						 switch (xyWin(testboard)) {
						 case 1:
							 switch (turn) {
							 case 0:
								 testboard[i] = 'n';
								 tab[i] = 'b';
								 return -10;
								 break;
							 case 1:
								 testboard[i] = 'n';
								 return 10;
								 break;
							 }
						 case 0:
							 testboard[i] = 'n';
							 break;
						 }
						 continue;
					 }
					 else {
						 continue;
					 }

				 }
				 return 0;
			 }


	};
}
