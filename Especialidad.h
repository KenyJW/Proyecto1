#pragma once
#include"Doctor.h"
#include<iostream>
#include<sstream>
using namespace std;

class Especialidad{
private:
	string especialidad;
	Doctor* doc;
public:
	Especialidad();
	Especialidad(string="Indef", Doctor* dr);
	Especialidad(string = "Indef");
	virtual ~Especialidad();

	string getEspecialidad();
	Doctor* getDr();

	void setDr(Doctor*);
	void setEspecialidad(string);

	string toString();



};

