#pragma once
#include "Messages.h"

namespace GUIforSIxerr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Freelencer 摘要
	/// </summary>
	public ref class Freelencer : public System::Windows::Forms::Form
	{
	public:
		Freelencer(User ^user)
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
		~Freelencer()
		{
			if (components)
			{
				delete components;
			}
		}








	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ req;
	private: System::Windows::Forms::TextBox^ flnName;

	private: System::Windows::Forms::TextBox^ introducation;



	private: System::Windows::Forms::Button^ intrSubmit;
	private: System::Windows::Forms::Button^ message;


	protected:

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
			this->req = (gcnew System::Windows::Forms::TextBox());
			this->flnName = (gcnew System::Windows::Forms::TextBox());
			this->introducation = (gcnew System::Windows::Forms::TextBox());
			this->intrSubmit = (gcnew System::Windows::Forms::Button());
			this->message = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 8);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(177, 19);
			this->textBox1->TabIndex = 13;
			this->textBox1->Text = L"Freelancer Name :";
			// 
			// req
			// 
			this->req->BackColor = System::Drawing::SystemColors::Control;
			this->req->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->req->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->req->Location = System::Drawing::Point(12, 41);
			this->req->Name = L"req";
			this->req->ReadOnly = true;
			this->req->Size = System::Drawing::Size(375, 19);
			this->req->TabIndex = 14;
			this->req->Text = L"Introducation to Yourself:";
			// 
			// flnName
			// 
			this->flnName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flnName->Location = System::Drawing::Point(195, 5);
			this->flnName->Name = L"flnName";
			this->flnName->Size = System::Drawing::Size(777, 26);
			this->flnName->TabIndex = 15;
			this->flnName->TextChanged += gcnew System::EventHandler(this, &Freelencer::flnName_TextChanged);
			// 
			// introducation
			// 
			this->introducation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->introducation->Location = System::Drawing::Point(12, 66);
			this->introducation->Multiline = true;
			this->introducation->Name = L"introducation";
			this->introducation->Size = System::Drawing::Size(960, 328);
			this->introducation->TabIndex = 16;
			this->introducation->TextChanged += gcnew System::EventHandler(this, &Freelencer::introducation_TextChanged);
			// 
			// intrSubmit
			// 
			this->intrSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->intrSubmit->Location = System::Drawing::Point(764, 397);
			this->intrSubmit->Name = L"intrSubmit";
			this->intrSubmit->Size = System::Drawing::Size(208, 52);
			this->intrSubmit->TabIndex = 18;
			this->intrSubmit->Text = L"Submit";
			this->intrSubmit->UseVisualStyleBackColor = true;
			this->intrSubmit->Click += gcnew System::EventHandler(this, &Freelencer::intrSubmit_Click);
			// 
			// message
			// 
			this->message->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->message->Location = System::Drawing::Point(549, 397);
			this->message->Name = L"message";
			this->message->Size = System::Drawing::Size(209, 51);
			this->message->TabIndex = 19;
			this->message->Text = L"Message";
			this->message->UseVisualStyleBackColor = true;
			this->message->Click += gcnew System::EventHandler(this, &Freelencer::message_Click);
			// 
			// Freelencer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 461);
			this->Controls->Add(this->message);
			this->Controls->Add(this->intrSubmit);
			this->Controls->Add(this->introducation);
			this->Controls->Add(this->flnName);
			this->Controls->Add(this->req);
			this->Controls->Add(this->textBox1);
			this->Name = L"Freelencer";
			this->Text = L"Freelencer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void customerid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void intrSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (introducation->Text->Empty) {
		MessageBox::Show("The Project Name and Requirement should not empty.","", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Requirement for the project has submited.","",MessageBoxButtons::OK);
	}
}
private: System::Void flnName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void fid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void fpswd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void introducation_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void message_Click(System::Object^ sender, System::EventArgs^ e) {
		Messages^ message = gcnew Messages();
		message->Show();
}
};
}
