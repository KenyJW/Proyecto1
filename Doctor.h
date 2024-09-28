#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class Doctor
{
private:
	string nombre;
	string cedula;
public:
	Doctor();
	Doctor(string="", string="");
	virtual ~Doctor();
	//gets;
	string getNombre();
	string getCedula();
	//sets
	void setNombre(string);
	void setCedula(string);
	//toString
	string toString();

};

