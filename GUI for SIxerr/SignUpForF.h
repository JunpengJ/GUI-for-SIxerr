#pragma once
#include "User.h"

namespace GUIforSIxerr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// SignUpForF 摘要
	/// </summary>
	public ref class SignUpForF : public System::Windows::Forms::Form
	{
	public:
		SignUpForF(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~SignUpForF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ userName;
	private: System::Windows::Forms::TextBox^ CPSW;

	private: System::Windows::Forms::TextBox^ PSW;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ fName;
	private: System::Windows::Forms::TextBox^ lName;


	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ Description;

	private: System::Windows::Forms::Button^ cancel;
	private: System::Windows::Forms::Button^ submit;



	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->userName = (gcnew System::Windows::Forms::TextBox());
			this->CPSW = (gcnew System::Windows::Forms::TextBox());
			this->PSW = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->fName = (gcnew System::Windows::Forms::TextBox());
			this->lName = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->Description = (gcnew System::Windows::Forms::TextBox());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(102, 38);
			this->textBox1->Margin = System::Windows::Forms::Padding(6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(376, 37);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"User Name:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Control;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(102, 115);
			this->textBox2->Margin = System::Windows::Forms::Padding(6);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(376, 37);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Password:";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Control;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(102, 192);
			this->textBox3->Margin = System::Windows::Forms::Padding(6);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(376, 37);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"Confirm Password:";
			// 
			// userName
			// 
			this->userName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userName->Location = System::Drawing::Point(490, 25);
			this->userName->Margin = System::Windows::Forms::Padding(6);
			this->userName->Name = L"userName";
			this->userName->Size = System::Drawing::Size(372, 44);
			this->userName->TabIndex = 3;
			this->userName->TextChanged += gcnew System::EventHandler(this, &SignUpForF::userName_TextChanged);
			// 
			// CPSW
			// 
			this->CPSW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CPSW->Location = System::Drawing::Point(490, 179);
			this->CPSW->Margin = System::Windows::Forms::Padding(6);
			this->CPSW->Name = L"CPSW";
			this->CPSW->Size = System::Drawing::Size(372, 44);
			this->CPSW->TabIndex = 4;
			// 
			// PSW
			// 
			this->PSW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PSW->Location = System::Drawing::Point(490, 102);
			this->PSW->Margin = System::Windows::Forms::Padding(6);
			this->PSW->Name = L"PSW";
			this->PSW->Size = System::Drawing::Size(372, 44);
			this->PSW->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Control;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(102, 265);
			this->textBox4->Margin = System::Windows::Forms::Padding(6);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(376, 37);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"First Name:";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &SignUpForF::textBox4_TextChanged);
			// 
			// fName
			// 
			this->fName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fName->Location = System::Drawing::Point(490, 252);
			this->fName->Margin = System::Windows::Forms::Padding(6);
			this->fName->Name = L"fName";
			this->fName->Size = System::Drawing::Size(372, 44);
			this->fName->TabIndex = 7;
			this->fName->TextChanged += gcnew System::EventHandler(this, &SignUpForF::fName_TextChanged);
			// 
			// lName
			// 
			this->lName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lName->Location = System::Drawing::Point(490, 329);
			this->lName->Margin = System::Windows::Forms::Padding(6);
			this->lName->Name = L"lName";
			this->lName->Size = System::Drawing::Size(372, 44);
			this->lName->TabIndex = 8;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::Control;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(102, 333);
			this->textBox7->Margin = System::Windows::Forms::Padding(6);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(376, 37);
			this->textBox7->TabIndex = 9;
			this->textBox7->Text = L"Last Name:";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Control;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(102, 429);
			this->textBox5->Margin = System::Windows::Forms::Padding(6);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(376, 37);
			this->textBox5->TabIndex = 10;
			this->textBox5->Text = L"Project Have Done:";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &SignUpForF::textBox5_TextChanged);
			// 
			// Description
			// 
			this->Description->Location = System::Drawing::Point(0, 0);
			this->Description->Name = L"Description";
			this->Description->Size = System::Drawing::Size(100, 31);
			this->Description->TabIndex = 24;
			// 
			// cancel
			// 
			this->cancel->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->cancel->Location = System::Drawing::Point(636, 871);
			this->cancel->Margin = System::Windows::Forms::Padding(6);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(196, 65);
			this->cancel->TabIndex = 23;
			this->cancel->Text = L"Cancel";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &SignUpForF::cancel_Click);
			// 
			// submit
			// 
			this->submit->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->submit->Location = System::Drawing::Point(134, 871);
			this->submit->Margin = System::Windows::Forms::Padding(6);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(192, 65);
			this->submit->TabIndex = 22;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = true;
			this->submit->Click += gcnew System::EventHandler(this, &SignUpForF::submit_Click);
			// 
			// SignUpForF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(968, 960);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->Description);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->lName);
			this->Controls->Add(this->fName);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->PSW);
			this->Controls->Add(this->CPSW);
			this->Controls->Add(this->userName);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Location = System::Drawing::Point(98, 481);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"SignUpForF";
			this->Text = L"SignUpForF";
			this->Load += gcnew System::EventHandler(this, &SignUpForF::SignUpForF_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: User^ user = nullptr;
	private: System::Void SignUpForF_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
}
private: System::Void submit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = this->userName->Text;
	String^ Password = this->PSW->Text;
	String^ ConfirmPassword = this->CPSW->Text;
	String^ Firstname = this->fName->Text;
	String^ Lastname = this->lName->Text;
	String^ Description = this->Description->Text;
	String^ Desig = "Freelancer";
	String^ Rating = "0";

	String^ sqlQuery = "INSERT INTO [User] (Username, [Password], Fname, Lname, Rating, Desig, Description) VALUES (?, ?, ?, ?, ?, ?, ?)";
	String^ checkQuery = "SELECT COUNT(*) FROM [User] WHERE Username = ?";

	String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Marcus Hoang\\Documents\\SixerrDB.accdb";



	if (username->Length == 0 || Password->Length == 0 || ConfirmPassword->Length == 0 || Firstname->Length == 0 || Lastname->Length == 0 || Description->Length == 0) {
		MessageBox::Show("Please enter all the fields", "One ore more empty fields", MessageBoxButtons::OK);
		return;
	}
	if (String::Compare(Password, ConfirmPassword) != 0) {
		MessageBox::Show("Password and Confirm Password do not match", "Password Error", MessageBoxButtons::OK);
		return;
	}
	try {
		OleDbConnection^ connection = gcnew OleDbConnection(connString);
		connection->Open();
		OleDbCommand^ command = gcnew OleDbCommand(sqlQuery, connection);

		OleDbCommand^ checkCommand = gcnew OleDbCommand(checkQuery, connection);
		checkCommand->Parameters->Add(gcnew OleDbParameter("@Username", OleDbType::VarWChar))->Value = username;
		int count = safe_cast<int>(checkCommand->ExecuteScalar());

		if (count > 0) {
			// Username already exists
			MessageBox::Show("Username already taken. Please choose a different username.", "Username Taken", MessageBoxButtons::OK);
			return;
		}
		command->Parameters->Add(gcnew OleDbParameter("@Username", OleDbType::VarWChar))->Value = username;
		command->Parameters->Add(gcnew OleDbParameter("@Password", OleDbType::VarWChar))->Value = Password;
		command->Parameters->Add(gcnew OleDbParameter("@Fname", OleDbType::VarWChar))->Value = Firstname;
		command->Parameters->Add(gcnew OleDbParameter("@Lname", OleDbType::VarWChar))->Value = Lastname;
		command->Parameters->Add(gcnew OleDbParameter("@Rating", OleDbType::VarWChar))->Value = Rating;
		command->Parameters->Add(gcnew OleDbParameter("@Desig", OleDbType::VarWChar))->Value = Desig;
		command->Parameters->Add(gcnew OleDbParameter("@Description", OleDbType::VarWChar))->Value = Description;

		command->ExecuteNonQuery();


		MessageBox::Show("User registered successfully!", "Success", MessageBoxButtons::OK);


		user = gcnew User;
		user->Username = username;
		user->Password = Password;
		user->Fname = Firstname;
		user->Lname = Lastname;
		this->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to register new user. Error: " + ex->Message, "Register Failure", MessageBoxButtons::OK);
	}
	this->Close();
}
private: System::Void userName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void fName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
