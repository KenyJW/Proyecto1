#include "Especialidad.h"
#include<iostream>
#include<sstream>
using namespace std;

Especialidad::Especialidad() {especialidad = "Indef";}

Especialidad::Especialidad(string esp, Doctor* dr) { especialidad = esp; doc = dr; }

Especialidad::Especialidad(string esp) {especialidad = esp;}
Especialidad:: ~Especialidad() {} 
string Especialidad::getEspecialidad() {
	return especialidad;
	}
Doctor* Especialidad::getDr(){return doc;}
void Especialidad::setDr(Doctor* dr) { doc = dr; }
void Especialidad::setEspecialidad(string esp) {especialidad = esp;}
string Especialidad::toString() {
	stringstream s;
	s << "Especialidad: " << especialidad << endl;
	s << "Doctor: " << doc->toString() << endl;
	return s.str();
	}




