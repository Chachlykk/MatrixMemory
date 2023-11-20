#pragma once
#include "vars.h"
#include <iostream>

namespace MatrixMemory {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for PlayForm
	/// </summary>
	public ref class PlayForm : public System::Windows::Forms::Form
	{
	public:
		PlayForm(void)
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
		~PlayForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ generalToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ gameToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ restartToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ finishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ turnBackToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ hintToolStripMenuItem;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::HelpProvider^ helpProvider1;
	private: System::Windows::Forms::Timer^ timer3;


	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlayForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->generalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restartToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->turnBackToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hintToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Location = System::Drawing::Point(160, 55);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(550, 550);
			this->panel1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->generalToolStripMenuItem,
					this->gameToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(851, 33);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// generalToolStripMenuItem
			// 
			this->generalToolStripMenuItem->Name = L"generalToolStripMenuItem";
			this->generalToolStripMenuItem->Size = System::Drawing::Size(93, 29);
			this->generalToolStripMenuItem->Text = L"Довідка";
			this->generalToolStripMenuItem->Click += gcnew System::EventHandler(this, &PlayForm::generalToolStripMenuItem_Click);
			// 
			// gameToolStripMenuItem
			// 
			this->gameToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->restartToolStripMenuItem,
					this->finishToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->gameToolStripMenuItem->Name = L"gameToolStripMenuItem";
			this->gameToolStripMenuItem->Size = System::Drawing::Size(74, 29);
			this->gameToolStripMenuItem->Text = L"Game";
			// 
			// restartToolStripMenuItem
			// 
			this->restartToolStripMenuItem->Name = L"restartToolStripMenuItem";
			this->restartToolStripMenuItem->Size = System::Drawing::Size(168, 34);
			this->restartToolStripMenuItem->Text = L"Restart";
			this->restartToolStripMenuItem->Click += gcnew System::EventHandler(this, &PlayForm::restartToolStripMenuItem_Click);
			// 
			// finishToolStripMenuItem
			// 
			this->finishToolStripMenuItem->Name = L"finishToolStripMenuItem";
			this->finishToolStripMenuItem->Size = System::Drawing::Size(168, 34);
			this->finishToolStripMenuItem->Text = L"Finish";
			this->finishToolStripMenuItem->Click += gcnew System::EventHandler(this, &PlayForm::finishToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(168, 34);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &PlayForm::exitToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// turnBackToolStripMenuItem
			// 
			this->turnBackToolStripMenuItem->Name = L"turnBackToolStripMenuItem";
			this->turnBackToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			// 
			// hintToolStripMenuItem
			// 
			this->hintToolStripMenuItem->Name = L"hintToolStripMenuItem";
			this->hintToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &PlayForm::timer1_Tick);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Ravie", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->textBox1->Location = System::Drawing::Point(729, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(110, 27);
			this->textBox1->TabIndex = 2;
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &PlayForm::timer2_Tick);
			// 
			// helpProvider1
			// 
			this->helpProvider1->HelpNamespace = L"C:\\Users\\Yulia\\Desktop\\Курсовий проект\\Matrix Memory\\Matrix Memory Help.chm";
			// 
			// PlayForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->ClientSize = System::Drawing::Size(851, 671);
			this->ControlBox = false;
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::DodgerBlue;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"PlayForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Play";
			this->Load += gcnew System::EventHandler(this, &PlayForm::PlayForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		array <int, 2>^ colorButtons;//Кількість кольорових кнопок
		array < Button^, 2>^ buttons;//Кнопки певного кольору
		int numOfSquaresLine;//Кількість квадратиків на одій грані
		int timeLook = 0;//Час для запам'ятовування положення квадратиків

		/*
		* Новий рівень
		*/
		void clear_play() {
			panel1->Controls->Clear();
			timeLook = 0;
			timeScore = 0;
			timer2->Stop();
		}
		/************************************************/

		/*
		* Початок гри
		*/
		void play() {
			clear_play();
			numOfSquaresLine = (labelLev + 3) / 2; //розмір основного квадрата = (numOfSquaresLine*numOfSquaresLine)
			int numOfColorSqure = labelLev; //кількість зафарбованих квадратів

			colorButtons = gcnew array<int, 2>(numOfSquaresLine, numOfSquaresLine);

			int size = (panel1->Size.Width - 6) / numOfSquaresLine; //розмір кожного квадратика
			buttons = gcnew array<Button^, 2>(numOfSquaresLine, numOfSquaresLine);

			int countColorSqr = 0;//Кількість вже зафарбованих квадратиків
			int countSqr = 0;//Кількість незафарбованих квадратиків
			for (int i = 0; i < numOfSquaresLine; i++) {
				for (int j = 0; j < numOfSquaresLine; j++) {
					/*
					* визначити колір кнопки
					*/
					if (countColorSqr < numOfColorSqure && countSqr <= (numOfSquaresLine * numOfSquaresLine) - numOfColorSqure) colorButtons[i, j] = std::rand() % 2;
					else if (countColorSqr >= numOfColorSqure) colorButtons[i, j] = 0;
					else colorButtons[i, j] = 1;
					/***********************************************/
					if (colorButtons[i, j] == 0) countSqr++;
					/*
					* Ініціалізація кнопки - квадратика
					*/
					Button^ btn = gcnew Button();
					btn->Size = Drawing::Size(size, size);
					if (colorButtons[i, j] == 1) {
						countColorSqr++;
						btn->BackColor = System::Drawing::Color::DodgerBlue;
					}
					else {
						btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
							static_cast<System::Int32>(static_cast<System::Byte>(86)));
					}
					btn->Location = Drawing::Point(i * size, j * size);
					btn->ContextMenuStrip = contextMenuStrip1;
					btn->Click += gcnew EventHandler(this, &PlayForm::squareClick);
					panel1->Controls->Add(btn);
					buttons[i, j] = btn;

				}
			}
			timer1->Start();
		}
		/*********************************************************************************/

	private: System::Void PlayForm_Load(System::Object^ sender, System::EventArgs^ e) {
		play();
	}
		   /*
		   * Вибір, які квадратики були зафарбовані (проходження рівня)
		   */
		   System::Void squareClick(System::Object^ sender, System::EventArgs^ e) {
			   if (timeScore != 0) ((Button^)sender)->BackColor = System::Drawing::Color::DodgerBlue;
		   }


	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		timeLook++;
		//Через певний час колір квадратиків стає однаковим
		if (timeLook == 5) {
			timer1->Stop();
			for (int i = 0; i < numOfSquaresLine; i++)
				for (int j = 0; j < numOfSquaresLine; j++)
					if (colorButtons[i, j] == 1)
						buttons[i, j]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
							static_cast<System::Int32>(static_cast<System::Byte>(86)));
			timeLook = 0;
			timeScore = 0;
			timer2->Start();//Початок відліку часу, за який кристувач проходить рівень
		}
		else if (timeLook < 5) textBox1->Text = Convert::ToString(timeLook);
	}

		   /*
		   * Запис часу проходження
		   */
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		timeScore++;
		textBox1->Text = Convert::ToString(timeScore);
	}
		   /******************************************************/


	private: System::Void finishToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (timeScore > 0) {
			timer2->Stop();
			/*
			* Чи правильно пройдений рівень
			 */
			bool levelComplete = true;
			for (int i = 0; i < numOfSquaresLine; i++) {
				for (int j = 0; j < numOfSquaresLine; j++) {
					if ((buttons[i, j]->BackColor == System::Drawing::Color::DodgerBlue && colorButtons[i, j] == 0) ||
						(buttons[i, j]->BackColor != System::Drawing::Color::DodgerBlue && colorButtons[i, j] == 1)) {
						buttons[i, j]->BackColor = System::Drawing::Color::Red;
						levelComplete = false;
					}
				}
			}
			if (levelComplete == false) {
				MessageBox::Show("Ви не пройшли рівень!\nСпробуйте знову",
					"Поразка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				clear_play();
				play();
			}
			else {
				MessageBox::Show("Перемога!\nЧас проходження: " + Convert::ToString(timeScore) + " c",
					"Перемога", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				levels[labelLev] = timeScore;
				if (isLogin == false) {
					//Запис до файлу
					BinaryWriter^ lev = gcnew BinaryWriter(File::OpenWrite("lev.bin"));
					lev->BaseStream->Seek((labelLev * 4), SeekOrigin::Begin);
					lev->Write(timeScore);
					lev->Close();
				}
				else {
					//Запис до бази даних
						//String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=MatrixMemoryUsers.mdb";
						//OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

						String^ connectionString = "provider=Microsoft.Ace.OLEDB.12.0;Data Source=MatrixMemoryUsers.mdb";
						OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);


					dbConnection->Open();
					String^ query = "UPDATE [users] SET level" + labelLev + "=" + timeScore + " WHERE login='" + Convert::ToString(userNameGlob.c_str())+"'";
					OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
					OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
					dbConnection->Close();
					//
				}
				labelLev++;
				clear_play();
				Close();
			}
		}
	}
	private: System::Void restartToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		clear_play();
		play();
	}
		   private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			   clear_play();
			   this->Hide();
		   }
private: System::Void generalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Help::ShowHelp(this, "Matrix Memory Help.chm", "help");
}
};
}
