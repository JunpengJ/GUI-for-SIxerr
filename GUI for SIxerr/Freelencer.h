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
		Freelencer(User^ user)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
	

	private: String^ _title;
		   
	public: property String^ Title {
			String^ get() {
			return _title;
			}

			void set(String^ value) {
				_title = value;
			}
		};

	private: String^ _message;
	public: property String^ Message {
			String^ get() {
				return _message;
			}

			void set(String^ value) {
				_message = value;
			}
		};


	private: Image^ _icon;
	public: property Image^ Icon {
			Image^ get() {
				return _icon;
			}

			void set(Image^ value) {
				_icon = value;
			}
		
		};

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(237, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(747, 499);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Freelencer::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel2->Location = System::Drawing::Point(1, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(230, 100);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Freelencer::panel2_Paint);
			// 
			// Freelencer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 499);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Freelencer";
			this->Text = L"Freelencer";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void customerid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void intrSubmit_Click(System::Object^ sender, System::EventArgs^ e) {

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



private: System::Void Freelencer_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
