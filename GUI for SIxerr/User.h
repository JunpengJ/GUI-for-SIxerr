#pragma once
#include <string>
#include <vector>
using namespace System;

public ref class User {
public:
	String^ Username;
	String^ Password;
	String^ Fname;
	String^ Lname;
	int Rating;
	String^ Desig;
	String^ Description;
};

public class Freelancer {
public:
	Freelancer() {
	}
	Freelancer(std::string _username, std::string _pass, std::string _fName, std::string _lName, int _rating, std::string _desig, std::string _description) {
		this->username = _username;
		this->pass = _pass;
		this->fName = _fName;
		this->lName = _lName;
		this->rating = _rating;
		this->desig = _desig;
		this->description = _description;
	}

	std::string username;
	std::string pass;
	std::string fName;
	std::string lName;
	int rating;
	std::string desig;
	std::string description;
};

std::vector <Freelancer> freelancerVec;