#pragma once

namespace GUIforSIxerr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MassagesBox 摘要
	/// </summary>
	public ref class MassagesBox : public System::Windows::Forms::Form
	{
	public:
		MassagesBox(void)
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
		~MassagesBox()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	protected:
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;

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
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(90, 76);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(200, 100);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(974, 429);
			this->flowLayoutPanel2->TabIndex = 0;
			this->flowLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MassagesBox::flowLayoutPanel2_Paint);
			// 
			// MassagesBox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(974, 429);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MassagesBox";
			this->Text = L"MassagesBox";
			this->Load += gcnew System::EventHandler(this, &MassagesBox::MassagesBox_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MassagesBox_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void flowLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	};
}
