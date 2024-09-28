#pragma once
#include<iostream>
#include<sstream>
using namespace std;
class Duennio{
private:
	string nombre; 
	string cedula; 
public:
	Duennio(string nom="Indef", string ced="Indef");
	virtual ~Duennio();
	//gets
	string getNombre();
	string getCedula();
	//sets
	void setCedula(string);
	void setNombre(string);
	// to string
	string toString();

};

