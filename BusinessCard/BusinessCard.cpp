//Jonathan Veriz
//ITSE 1307
//Programming Problem Business Card
//BusinessCard.cpp : Simple program that displays a first name, last name, and phone number

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Initialized the values that we'll need for our program
	string strFirstName = "John";
	string strLastName = "Smith";
	int intPhoneNumber = 0;

	//Block of code that asks for the users name and number
	cout << "First Name: ";
	cin >> strFirstName;
	cout << "Last Name: ";
	cin >> strLastName;
	cout << "Phone Number: ";
	cin >> intPhoneNumber;

	//Displays the text that the user put in
	cout << "First Name: " << strFirstName 
		<< " | Last Name: " << strLastName << endl;
	cout << "Phone Number: " << intPhoneNumber << endl;
}