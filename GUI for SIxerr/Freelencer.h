#pragma once
#include "Messages.h"
#include "User.h"




namespace GUIforSIxerr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;


	/// <summary>
	/// Freelencer 摘要
	/// </summary>
	public ref class Freelencer : public System::Windows::Forms::Form
	{

	private:
		User^ user ; // Declare user as a member variable

	public:
		Freelencer(User^ user)
		{
			this->user = user;
			InitializeComponent();
			
			FreelancerUser->Text = "Welcome " + user->Fname + ". \nThese are your current work orders";
			FreelancerUser->TextAlign = ContentAlignment::MiddleCenter;


			String^ username = user->Password;

			//	// Connection string for Microsoft Access
			String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\jiang\\DataBase\\SixerrDBLandMY.accdb";

			// SQL query to select all data from your table
			String^ query = "SELECT USERNAME, TITLE, DESCRIPTION, DATE FROM [WorkOrder] WHERE FREELANCER = @Username ORDER BY [DATE] ASC ";


		
			// Create a connection and command
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->AddWithValue("@Username", username);


			// Create a data adapter and fill a dataset
			OleDbDataAdapter^ dataAdapter = gcnew OleDbDataAdapter(command);
			DataSet^ dataSet = gcnew DataSet();
			dataAdapter->Fill(dataSet, "TableData");

			


			// Set the DataGridView's DataSource to the filled dataset
			dataGridView1->DataSource = dataSet->Tables["TableData"];

			dataGridView1->DefaultCellStyle->Font = gcnew System::Drawing::Font("Arial", 12);  // Change the font and size

			// Change the default row height to accommodate larger text
			dataGridView1->RowTemplate->Height = 400;  // Set the default row height to 60 pixels

			// Enable text wrapping for all cells
			for (int i = 0; i < dataGridView1->Rows->Count; i++)
			{
				for (int j = 0; j < dataGridView1->Columns->Count; j++)
				{
					dataGridView1->Rows[i]->Cells[j]->Style->WrapMode = DataGridViewTriState::True;
				}
			}
			dataGridView1->DefaultCellStyle->WrapMode = DataGridViewTriState::True;


			// Change the default column width
			dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::None;  // Disable auto-sizing of columns
			dataGridView1->Columns[2]->Width = 400;  // Set the width of the third column to 200 pixels (adjust the column index as needed)


			// Adjust this to the column index you want


			// Adjust the appearance of the displayed data
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


	private: System::IO::FileSystemWatcher^ fileSystemWatcher1;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnLoadData;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ Refresh;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ FreelancerUser;



















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
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			this->btnLoadData = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->FreelancerUser = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Refresh = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// fileSystemWatcher1
			// 
			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;
			// 
			// btnLoadData
			// 
			this->btnLoadData->Location = System::Drawing::Point(153, 576);
			this->btnLoadData->Name = L"btnLoadData";
			this->btnLoadData->Size = System::Drawing::Size(121, 48);
			this->btnLoadData->TabIndex = 3;
			this->btnLoadData->Text = L"Work Order Complete";
			this->btnLoadData->UseVisualStyleBackColor = true;
			this->btnLoadData->Click += gcnew System::EventHandler(this, &Freelencer::CompleteOrder_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel2->Controls->Add(this->FreelancerUser);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->Refresh);
			this->panel2->Controls->Add(this->btnLoadData);
			this->panel2->Location = System::Drawing::Point(5, 6);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(288, 646);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Freelencer::panel2_Paint);
			// 
			// FreelancerUser
			// 
			this->FreelancerUser->Font = (gcnew System::Drawing::Font(L"Consolas", 11));
			this->FreelancerUser->ForeColor = System::Drawing::Color::White;
			this->FreelancerUser->Location = System::Drawing::Point(8, 114);
			this->FreelancerUser->Name = L"FreelancerUser";
			this->FreelancerUser->Size = System::Drawing::Size(266, 108);
			this->FreelancerUser->TabIndex = 6;
			this->FreelancerUser->Text = L"label2";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(53, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 94);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Sixerr";
			this->label1->Click += gcnew System::EventHandler(this, &Freelencer::label1_Click_1);
			// 
			// Refresh
			// 
			this->Refresh->Location = System::Drawing::Point(8, 576);
			this->Refresh->Name = L"Refresh";
			this->Refresh->Size = System::Drawing::Size(123, 48);
			this->Refresh->TabIndex = 4;
			this->Refresh->Text = L"Refresh ";
			this->Refresh->UseVisualStyleBackColor = true;
			this->Refresh->Click += gcnew System::EventHandler(this, &Freelencer::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(299, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(767, 646);
			this->dataGridView1->TabIndex = 2;
			// 
			// Freelencer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1078, 664);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Freelencer";
			this->Text = L"Freelencer";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
		/*MessagesF^ messagesf = gcnew MessagesF();
		messagesf->Show();*/
}

private: System::Void Freelencer_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}



private: System::Void WorkOrderTbl_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
	private: System::Void CompleteOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = user->Password;  // Assuming Password holds the username, change it accordingly

		// Ask for confirmation
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete the oldest work order?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		// Check the user's response
		if (result == System::Windows::Forms::DialogResult::Yes) {
			// SQL query to delete the oldest row where the freelancer matches the logged-in user
			String^ deleteQuery = "DELETE FROM [WorkOrder] WHERE FREELANCER = @Username AND [DATE] = (SELECT MIN([DATE]) FROM WORKORDER WHERE FREELANCER = @Username);";
			String^ connectionString = "Provider = Microsoft.ACE.OLEDB.12.0; Data Source = C:\\Users\\jiang\\DataBase\\SixerrDBLandMY.accdb";

			// Create a connection and command
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
			OleDbCommand^ deleteCommand = gcnew OleDbCommand(deleteQuery, connection);
			deleteCommand->Parameters->AddWithValue("@Username", username);

			try {
				// Open the connection
				connection->Open();

				// Execute the delete command
				deleteCommand->ExecuteNonQuery();

			}
			catch (Exception^ ex) {
				MessageBox::Show("Error deleting row: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				// Close the connection
				connection->Close();
				connection->Close();
			}
		}

	}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = user->Password;

	// Refresh the DataGridView to reflect the changes
	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Marcus Hoang\\Documents\\SixerrDB.accdb";


	// SQL query to select all data from your table
	String^ query = "SELECT USERNAME, TITLE, DESCRIPTION, DATE FROM [WorkOrder] WHERE FREELANCER = @Username ORDER BY [DATE] ASC ";

	// Create a connection and command
	OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
	OleDbCommand^ command = gcnew OleDbCommand(query, connection);
	command->Parameters->AddWithValue("@Username", username);

	// Create a data adapter and fill a dataset
	OleDbDataAdapter^ dataAdapter = gcnew OleDbDataAdapter(command);
	DataSet^ dataSet = gcnew DataSet();
	dataAdapter->Fill(dataSet, "TableData");

	// Set the DataGridView's DataSource to the filled dataset
	dataGridView1->DataSource = dataSet->Tables["TableData"];
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
