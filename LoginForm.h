#pragma once
#include "vars.h"
#include <msclr\marshal_cppstd.h>
namespace MatrixMemory {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::OleDb;

    /// <summary>
    /// Сводка для LoginForm
    /// </summary>
    public ref class LoginForm : public System::Windows::Forms::Form
    {
    public:
        LoginForm(void)
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
        ~LoginForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    protected:
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Data::OleDb::OleDbConnection^ oleDbConnection1;
    private: System::Data::OleDb::OleDbCommand^ oleDbSelectCommand1;
    private: System::Data::OleDb::OleDbCommand^ oleDbInsertCommand1;
    private: System::Data::OleDb::OleDbCommand^ oleDbUpdateCommand1;
    private: System::Data::OleDb::OleDbCommand^ oleDbDeleteCommand1;
    private: System::Data::OleDb::OleDbDataAdapter^ oleDbDataAdapter1;
    private: System::Data::DataSet^ dataSet1;
    private: System::Data::DataTable^ dataTable1;
    private: System::Data::DataColumn^ dataColumn1;
    private: System::Data::DataColumn^ dataColumn2;
    private: System::Data::DataColumn^ dataColumn3;
    private: System::Data::DataColumn^ dataColumn4;
    private: System::Data::DataColumn^ dataColumn5;
    private: System::Data::DataColumn^ dataColumn6;
    private: System::Data::DataColumn^ dataColumn7;
    private: System::Data::DataColumn^ dataColumn8;
    private: System::Data::DataColumn^ dataColumn9;
    private: System::Data::DataColumn^ dataColumn10;
    private: System::Data::DataColumn^ dataColumn11;


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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(28, 50);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(108, 49);
            this->label1->TabIndex = 0;
            this->label1->Text = L"login: ";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(28, 158);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(162, 49);
            this->label2->TabIndex = 1;
            this->label2->Text = L"password:";
            // 
            // button1
            // 
            this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Location = System::Drawing::Point(120, 257);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(245, 61);
            this->button1->TabIndex = 2;
            this->button1->Text = L"Confirm";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->textBox1->ForeColor = System::Drawing::Color::DodgerBlue;
            this->textBox1->Location = System::Drawing::Point(206, 42);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(245, 57);
            this->textBox1->TabIndex = 3;
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->textBox2->ForeColor = System::Drawing::Color::DodgerBlue;
            this->textBox2->Location = System::Drawing::Point(206, 150);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(245, 57);
            this->textBox2->TabIndex = 4;
            // 
            // LoginForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->ClientSize = System::Drawing::Size(503, 350);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->ForeColor = System::Drawing::Color::DodgerBlue;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"LoginForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Login/Registration";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ userName = textBox1->Text;
        String^ userPassword = textBox2->Text;
        
        if (userName->Length == 0) MessageBox::Show("Введіть ім'я користувача",
            "Невірний логін", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        else {
                //String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=MatrixMemoryUsers.mdb";
                //OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
            
               String^ connectionString = "provider=Microsoft.Ace.OLEDB.12.0;Data Source=MatrixMemoryUsers.mdb";
               OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

            dbConnection->Open();
            String^ query = "SELECT * FROM [users]";
            OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
            OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

            //Вхід
            bool isReg = false;
            while (dbReader->Read()) {
                if (Convert::ToString(dbReader[0]) == userName) {
                    isReg = true;
                    if (Convert::ToString(dbReader[1]) == userPassword) {
                        for (int i = 0; i < 11; i++)
                            levels[i] = Convert::ToInt32(dbReader[i + 2]);
                        labelLev = 1;
                        labelScore = 0;
                        for (int i = 2; i < 11; i++) {
                            if (levels[i - 1] > 0) {
                                labelLev = i;
                                labelScore = levels[i];
                            }
                        }
                        MessageBox::Show("Ви успішно ввійши!",
                            "Авторизація", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
                        isLogin = true;
                        userNameGlob = msclr::interop::marshal_as<std::string>(userName);
                        Close();
                    }
                    else  MessageBox::Show("Пароль не відповідає обліковому запису!",
                        "Невірний пароль", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                }
            }
            //Реєстрація
            if (isReg == false && userPassword->Length < 8) MessageBox::Show("Пароль має містити не менше восьми символів",
                "Невірний пароль", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            else if (isReg == false && userPassword->Length >= 8) {
                /*******************************************/
                query = "INSERT INTO [users] VALUES ('" + userName + "', '" + userPassword + "', " + 0 + ", " + 0 + ", " + 0 + ", " + 0 + ", " + 0 + ", " + 0 + ", " + 0 + ", " + 0 + ", " + 0 + ", " + 0 + ", " + 0 + ")";
                dbCommand = gcnew OleDbCommand(query, dbConnection);
                /*******************************************/
                dbCommand->ExecuteNonQuery();

                MessageBox::Show("Ви успішно зареєструвалися!",
                    "Реєстрація", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
                userNameGlob = msclr::interop::marshal_as<std::string>(userName);
                for (int i = 0; i < 11; i++) levels[i] = 0;

                labelScore = 0;
                labelLev = 1;
                isLogin = true;
                Close();
            }
            dbReader->Close();
            dbConnection->Close();
        }
    }
    };
}
