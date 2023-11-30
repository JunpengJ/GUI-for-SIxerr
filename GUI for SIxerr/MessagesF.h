#pragma once
#include "SendMessageF.h"
#include "MessageBoxF.h"


namespace GUIforSIxerr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MessagesF 摘要
	/// </summary>
	public ref class MessagesF : public System::Windows::Forms::Form
	{
	public:
		MessagesF(User ^user)
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
		~MessagesF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ mailBox;
	protected:
	private: System::Windows::Forms::Button^ send;

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
			this->mailBox = (gcnew System::Windows::Forms::Button());
			this->send = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// mailBox
			// 
			this->mailBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mailBox->Location = System::Drawing::Point(99, 217);
			this->mailBox->Name = L"mailBox";
			this->mailBox->Size = System::Drawing::Size(276, 65);
			this->mailBox->TabIndex = 7;
			this->mailBox->Text = L"Message Box";
			this->mailBox->UseVisualStyleBackColor = true;
			this->mailBox->Click += gcnew System::EventHandler(this, &MessagesF::mailBox_Click);
			// 
			// send
			// 
			this->send->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->send->Location = System::Drawing::Point(99, 114);
			this->send->Name = L"send";
			this->send->Size = System::Drawing::Size(276, 65);
			this->send->TabIndex = 6;
			this->send->Text = L"Send Message";
			this->send->UseVisualStyleBackColor = true;
			this->send->Click += gcnew System::EventHandler(this, &MessagesF::send_Click);
			// 
			// MessagesF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(474, 396);
			this->Controls->Add(this->mailBox);
			this->Controls->Add(this->send);
			this->Name = L"MessagesF";
			this->Text = L"MessagesF";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void send_Click(System::Object^ sender, System::EventArgs^ e) {
		SendMessageF^ sendMessageF = gcnew SendMessageF();
		sendMessageF->Show();
	}
	private: System::Void mailBox_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox^ MessagesBoxF = gcnew MessageBox();
		MessagesBoxF->Show();
	}
	};
}
