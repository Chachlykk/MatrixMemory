#pragma once
#include "vars.h"
namespace MatrixMemory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::IO;

	/// <summary>
	/// Сводка для QuickGame
	/// </summary>
	public ref class QuickGame : public System::Windows::Forms::Form
	{
	public:
		QuickGame(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~QuickGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(QuickGame::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Location = System::Drawing::Point(150, 60);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(550, 550);
			this->panel1->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Ravie", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->textBox1->Location = System::Drawing::Point(729, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(110, 27);
			this->textBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button1->Location = System::Drawing::Point(706, 562);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 48);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Finish";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &QuickGame::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &QuickGame::timer1_Tick);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->ForeColor = System::Drawing::Color::Red;
			this->textBox2->Location = System::Drawing::Point(12, 17);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(44, 45);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"3";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox1->Location = System::Drawing::Point(62, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(55, 50);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &QuickGame::timer2_Tick);
			// 
			// QuickGame
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->ClientSize = System::Drawing::Size(851, 671);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"QuickGame";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"QuickGame";
			this->Load += gcnew System::EventHandler(this, &QuickGame::QuickGame_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array <int, 2>^ colorButtons;//Кількість кольорових кнопок
		array < Button^, 2>^ buttons;//Кнопки певного кольору
		int numOfSquaresLine = 1;//Кількість квадратиків на одій грані
		int numOfSquaresColumn = 1;//Кількість квадратиків на одій грані
		int timeLook = 5;//Час для запам'ятовування положення квадратиків
		int timeScore = 10;//Час для відтворення послідовності
		int newScore = 0;
		int hearts=3;
		int countColorSqr = 0;
		bool isAnswerCorrect;
		int isColorSquareAll;
		int tempNumOfSquaresLine=2;//Кількість квадратиків на одій грані, якщо була помилка
		int tempNumOfSquaresColumn=2;//Кількість квадратиків на одій грані, якщо була помилка
		int wasError=0;
		/*
		* Новий рівень
		*/
		void clear_play() {
			panel1->Controls->Clear();
			timer1->Stop();
			timer2->Stop();
			timeLook = 5;
			timeScore = 10;
			isColorSquareAll = 0;

		}
		void play() {
			clear_play();
			if (wasError) {
				numOfSquaresLine -= 1;
				numOfSquaresColumn -= 1;
				wasError = 0;
			}
			else {
				numOfSquaresLine++; //розмір основного квадрата = (numOfSquaresLine*numOfSquaresColumn)
			}
			if (numOfSquaresLine % 2 == 0 || (double)numOfSquaresLine / numOfSquaresColumn > 1.5) numOfSquaresColumn++;
				colorButtons = gcnew array<int, 2>(numOfSquaresLine, numOfSquaresColumn);

			int size = (panel1->Size.Width - 6) / numOfSquaresLine; //розмір кожного квадратика
			buttons = gcnew array<Button^, 2>(numOfSquaresLine, numOfSquaresColumn);

			countColorSqr = 0;//Кількість вже зафарбованих квадратиків
			int countSqr = 0;//Кількість незафарбованих квадратиків
			for (int i = 0; i < numOfSquaresLine; i++) {
				for (int j = 0; j < numOfSquaresColumn; j++) {
					/*
					* визначити колір кнопки
					*/
					if (numOfSquaresLine == 1) colorButtons[i, j] = 1;
					else if (countColorSqr < numOfSquaresLine && countSqr <= (numOfSquaresLine * numOfSquaresColumn) - numOfSquaresLine) colorButtons[i, j] = std::rand() % 2;
					else if (countColorSqr >= numOfSquaresLine) colorButtons[i, j] = 0;
					else colorButtons[i, j] = 1;
					/***********************************************/

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
						countSqr++;
						btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
							static_cast<System::Int32>(static_cast<System::Byte>(86)));
					}
					btn->Location = Drawing::Point(i * size, j * size);
					btn->Click += gcnew EventHandler(this, &QuickGame::squareClick);
					panel1->Controls->Add(btn);
					buttons[i, j] = btn;

				}
			}
			timer1->Start();
		}

		void finishGame() {
			clear_play();
			if (levels[0] >= newScore) {
				MessageBox::Show("Отакої!\nВаш результат: " + Convert::ToString(newScore),
					"Поразка", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}else{
				levels[0] = newScore;
				MessageBox::Show("Перемога!\nВаш новий рекорд: " + Convert::ToString(levels[0]),
					"Перемога", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				if (isLogin == false) {
					//Запис до файлу
					FileStream^ fs = gcnew FileStream("lev.bin", FileMode::Open);
					BinaryWriter^ lev = gcnew BinaryWriter(fs);
					lev->BaseStream->Seek((0), SeekOrigin::Begin);
					lev->Write(timeScore);
					fs->Close();
				}
				else {
					//Запис до бази даних
						//String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=MatrixMemoryUsers.mdb";
						//OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

						String^ connectionString = "provider=Microsoft.Ace.OLEDB.12.0;Data Source=MatrixMemoryUsers.mdb";
						OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
					dbConnection->Open();
					String^ query = "UPDATE users SET score=" + levels[0] + " WHERE login='"+ Convert::ToString(userNameGlob.c_str())+"'";
					OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
					OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
					dbConnection->Close();
				}
			}
			newScore = 0;
			Close();
		}

	private: System::Void QuickGame_Load(System::Object^ sender, System::EventArgs^ e) {
		play();
	}

		   /**************************************************/

		   System::Void squareClick(System::Object^ sender, System::EventArgs^ e) {
			   if (timeScore < 10 && ((Button^)sender)->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				   static_cast<System::Int32>(static_cast<System::Byte>(86)))) {

				   isAnswerCorrect = false;
				   for (int i = 0; i < numOfSquaresLine; i++)
					   for (int j = 0; j < numOfSquaresColumn; j++)
						   if (colorButtons[i, j] == 1 && buttons[i, j] == ((Button^)sender)) {
							   ((Button^)sender)->BackColor = System::Drawing::Color::DodgerBlue;
							   isAnswerCorrect = true;
							   isColorSquareAll++;
							   if (isColorSquareAll == countColorSqr) {
								   newScore += 10 * numOfSquaresColumn;
								   play();
							   }
							   break;
						   }

				   if (!isAnswerCorrect) {
					   wasError++;
					   ((Button^)sender)->BackColor = System::Drawing::Color::Red;
					   hearts--;
					   textBox2->Text = Convert::ToString(hearts);
					   if (hearts == 0) finishGame();
				   }
			   }
		   }


	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (timeLook > 0) {
			timeLook--;
			textBox1->Text = Convert::ToString(timeLook);
		}
		else if (timeLook == 0) {
			timer1->Stop();
			timeLook = 5;
			for (int i = 0; i < numOfSquaresLine; i++)
				for (int j = 0; j < numOfSquaresColumn; j++)
					if (colorButtons[i, j] == 1)
						buttons[i, j]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
							static_cast<System::Int32>(static_cast<System::Byte>(86)));
			timer2->Start();
		}
	}

	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		timeScore--;
		textBox1->Text = Convert::ToString(timeScore);
		if (timeScore == 0) finishGame();
		if (isColorSquareAll == countColorSqr && timeScore < 8) {
			newScore += 10 * numOfSquaresColumn;
			play();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		finishGame();
	}
	};
}
