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

	/// <summary>
	/// Сводка для RatingForm
	/// </summary>
	public ref class RatingForm : public System::Windows::Forms::Form
	{
	public:
		RatingForm(void)
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
		~RatingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RatingForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Your score: ";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(264, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(102, 45);
			this->textBox1->TabIndex = 1;
			// 
			// RatingForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(371, 394);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::Silver;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->MinimumSize = System::Drawing::Size(393, 450);
			this->Name = L"RatingForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RatingForm";
			this->Load += gcnew System::EventHandler(this, &RatingForm::RatingForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array < TextBox^, 2>^ ratingInfoControls;
		array <String^, 2>^ ratingInfo;
		int numberOfUsers;

	private: System::Void RatingForm_Load(System::Object^ sender, System::EventArgs^ e) {

		textBox1->Text = Convert::ToString(levels[0]);

			String^ connectionString = "provider=Microsoft.Ace.OLEDB.12.0;Data Source=MatrixMemoryUsers.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

			//String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=MatrixMemoryUsers.mdb";
			//OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);


		dbConnection->Open();
		String^ query = "SELECT * FROM [users] ORDER BY score";
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
		OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
		int i = 0;
		while (dbReader->Read()) {
			//Зареєстровані користувачі
			TextBox^ textBoxName = gcnew TextBox();
			textBoxName->Size = Drawing::Size(220, 30);
			textBoxName->BackColor = System::Drawing::Color::Black;
			textBoxName->ForeColor = System::Drawing::Color::White;
			textBoxName->Location = Drawing::Point(20, i * 40 + 70);
			textBoxName->Font = (gcnew System::Drawing::Font(L"Segoe Script", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			textBoxName->Text = Convert::ToString(dbReader[0]);
			textBoxName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Controls->Add(textBoxName);


			//Рекорд користувачів
			TextBox^ textBoxScore = gcnew TextBox();
			textBoxScore->Size = Drawing::Size(100, 30);
			textBoxScore->BackColor = System::Drawing::Color::Black;
			textBoxScore->ForeColor = System::Drawing::Color::White;
			textBoxScore->Location = Drawing::Point(270, i * 40 + 70);
			textBoxScore->Font = (gcnew System::Drawing::Font(L"Segoe Script", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			textBoxScore->Text = Convert::ToString(dbReader[2]);
			textBoxScore->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Controls->Add(textBoxScore);

			i++;
		}
		dbConnection->Close();
	}
};
}
