#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;


namespace GUIforSIxerr {

	/// <summary>
	/// MessagePresenter 摘要
	/// </summary>
	public ref class MessagePresenter : public System::Windows::Forms::UserControl
	{
	public:
		MessagePresenter(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

		void PopulateUserFrom(String^ userFrom) {
			fromUser->Text = userFrom;
		}
		void PopulateToUser(String^ ToUser) {
			toUser->Text = ToUser;
		}
		void PopulateMessage(String^ mess) {
			message->Text = mess;
		}
		void PopulateDate(DateTime^ coming ) {
			comingDate->Text = coming->ToString("yyyy-mm-dd");
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MessagePresenter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ fromUser;
	private: System::Windows::Forms::Label^ message;
	protected:


	private: System::Windows::Forms::Label^ comingDate;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ toUser;
	private: System::Windows::Forms::TextBox^ textBox1;


	protected:

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
			this->fromUser = (gcnew System::Windows::Forms::Label());
			this->message = (gcnew System::Windows::Forms::Label());
			this->comingDate = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->toUser = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// fromUser
			// 
			this->fromUser->AutoSize = true;
			this->fromUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fromUser->Location = System::Drawing::Point(12, 10);
			this->fromUser->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->fromUser->Name = L"fromUser";
			this->fromUser->Size = System::Drawing::Size(160, 37);
			this->fromUser->TabIndex = 0;
			this->fromUser->Text = L"FromUser";
			this->fromUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->fromUser->Click += gcnew System::EventHandler(this, &MessagePresenter::label1_Click);
			// 
			// message
			// 
			this->message->AutoSize = true;
			this->message->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->message->Location = System::Drawing::Point(12, 71);
			this->message->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->message->Name = L"message";
			this->message->Size = System::Drawing::Size(145, 37);
			this->message->TabIndex = 1;
			this->message->Text = L"Message";
			this->message->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->message->Click += gcnew System::EventHandler(this, &MessagePresenter::Message_Click);
			// 
			// comingDate
			// 
			this->comingDate->AutoSize = true;
			this->comingDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comingDate->Location = System::Drawing::Point(800, 10);
			this->comingDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->comingDate->Name = L"comingDate";
			this->comingDate->Size = System::Drawing::Size(195, 37);
			this->comingDate->TabIndex = 2;
			this->comingDate->Text = L"ComingDate";
			this->comingDate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// toUser
			// 
			this->toUser->AutoSize = true;
			this->toUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->toUser->Location = System::Drawing::Point(412, 10);
			this->toUser->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->toUser->Name = L"toUser";
			this->toUser->Size = System::Drawing::Size(122, 37);
			this->toUser->TabIndex = 3;
			this->toUser->Text = L"ToUser";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->Location = System::Drawing::Point(220, 10);
			this->textBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(122, 37);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"To: ";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MessagePresenter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->toUser);
			this->Controls->Add(this->comingDate);
			this->Controls->Add(this->message);
			this->Controls->Add(this->fromUser);
			this->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Name = L"MessagePresenter";
			this->Size = System::Drawing::Size(996, 415);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Message_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
