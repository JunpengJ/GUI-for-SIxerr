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
			this->SuspendLayout();
			// 
			// fromUser
			// 
			this->fromUser->AutoSize = true;
			this->fromUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fromUser->Location = System::Drawing::Point(12, 10);
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
			this->message->Location = System::Drawing::Point(178, 10);
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
			this->comingDate->Location = System::Drawing::Point(802, 10);
			this->comingDate->Name = L"comingDate";
			this->comingDate->Size = System::Drawing::Size(195, 37);
			this->comingDate->TabIndex = 2;
			this->comingDate->Text = L"ComingDate";
			this->comingDate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MessagePresenter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->comingDate);
			this->Controls->Add(this->message);
			this->Controls->Add(this->fromUser);
			this->Name = L"MessagePresenter";
			this->Size = System::Drawing::Size(1000, 65);
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
