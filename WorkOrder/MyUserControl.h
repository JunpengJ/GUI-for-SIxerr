#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace WorkOrder {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ WorkOrderTitle;

	private: System::Windows::Forms::Label^ WorkOrderDescription;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->WorkOrderTitle = (gcnew System::Windows::Forms::Label());
			this->WorkOrderDescription = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Teal;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(144, 127);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(27, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(87, 77);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// WorkOrderTitle
			// 
			this->WorkOrderTitle->AutoSize = true;
			this->WorkOrderTitle->Location = System::Drawing::Point(173, 24);
			this->WorkOrderTitle->Name = L"WorkOrderTitle";
			this->WorkOrderTitle->Size = System::Drawing::Size(27, 13);
			this->WorkOrderTitle->TabIndex = 1;
			this->WorkOrderTitle->Text = L"Title";
			this->WorkOrderTitle->Click += gcnew System::EventHandler(this, &MyUserControl::label1_Click);
			// 
			// WorkOrderDescription
			// 
			this->WorkOrderDescription->AutoSize = true;
			this->WorkOrderDescription->Location = System::Drawing::Point(173, 60);
			this->WorkOrderDescription->Name = L"WorkOrderDescription";
			this->WorkOrderDescription->Size = System::Drawing::Size(60, 13);
			this->WorkOrderDescription->TabIndex = 2;
			this->WorkOrderDescription->Text = L"Description";
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->WorkOrderDescription);
			this->Controls->Add(this->WorkOrderTitle);
			this->Controls->Add(this->panel1);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(484, 127);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: property String^ Title {
		String^ get() {
			return WorkOrderTitle->Text;
		}

		void set(String^ value) {

			WorkOrderTitle->Text = value;
		}
	};



	public: property String^ Description {
		String^ get() {
			return WorkOrderDescription->Text;
		}

		void set(String^ value) {
			WorkOrderDescription->Text = value;
		}
	};



	public: property Image^ Icon {
		Image^ get() {
			return pictureBox1->Image;
		}

		void set(Image^ value) {

			pictureBox1->Image = value;
		}

	};
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
