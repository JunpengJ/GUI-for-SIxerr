#pragma once

#include "User.h"

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

void MarshalString(String^ s, std::string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void PopulateFreelancers(std::vector <Freelancer>& freelancers) {
	String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\mckay\\Documents\\SixerrDB.accdb";
	//String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Marcus Hoang\\Documents\\SixerrDB.accdb";
	String^ sqlQuery = "SELECT * FROM Users WHERE Desig = 'Freelancer'";

	OleDbConnection^ connection = gcnew OleDbConnection(connString);

	try
	{
		connection->Open();

		OleDbCommand^ command = gcnew OleDbCommand(sqlQuery, connection);
		OleDbDataReader^ reader = command->ExecuteReader();

		while (reader->Read())
		{
			User^ freelancer = gcnew User();

			String^ un = reader->GetString(1);
			String^ p = reader->GetString(0);
			String^ fn = reader->GetString(2);
			String^ ln = reader->GetString(3);
			int r = reader->GetInt32(4);
			String^ d = reader->GetString(5);
			String^ desc = reader->GetString(6);

			std::string unS, pS, fnS, lnS, dS, descS;
			MarshalString(un, unS);
			MarshalString(p, pS);
			MarshalString(fn, fnS);
			MarshalString(ln, lnS);
			MarshalString(d, dS);
			MarshalString(desc, descS);

			Freelancer fl = Freelancer(unS, pS, fnS, lnS, r, dS, descS);
			freelancers.push_back(fl);
		}
	}
	catch (Exception^ ex)
	{
		String^ errorMessage = String::Format("Error: {0}\nStackTrace: {1}", ex->Message, ex->StackTrace);
		MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally
	{
		if (connection != nullptr)
		{
			connection->Close();
		}
	}
}

bool compareRating(const Freelancer& v1, const Freelancer& v2) {
	return v1.rating < v2.rating;
}

bool compareUsername(const Freelancer& v1, const Freelancer& v2) {
	return v1.username < v2.username;
}

template <typename T> void heapSort(std::vector <T>& v, int type) {
	if (type == 0) {
		std::make_heap(v.begin(), v.end(), compareRating);
		std::sort_heap(v.begin(), v.end(), compareRating);
	}
	else if (type == 1){
		std::make_heap(v.begin(), v.end(), compareRating);
		std::sort_heap(v.begin(), v.end(), compareRating);
		std::reverse(v.begin(), v.end());
	}
	else if (type == 2) {
		std::make_heap(v.begin(), v.end(), compareUsername);
		std::sort_heap(v.begin(), v.end(), compareUsername);
		std::reverse(v.begin(), v.end());
	}
	else{
		std::make_heap(v.begin(), v.end(), compareUsername);
		std::sort_heap(v.begin(), v.end(), compareUsername);
	}

}