#include "Doctor.h"
#include<iostream>
#include<sstream>
using namespace std;

Doctor::Doctor() {
	nombre="indef";
	cedula="Indef";
}
Doctor::Doctor(string nom, string ced) {
	nombre = nom; cedula = ced;
}
Doctor::~Doctor() { }
//gets
string Doctor:: getNombre() { return nombre;}
string Doctor::getCedula() { return cedula; }
//sets
void Doctor::setNombre(string no) { nombre = no; }
void Doctor::setCedula(string cedu) { cedula = cedu; }
//toString
string Doctor::toString() {
	stringstream s;
	s << "Doctor " << nombre << endl;
	s << "cedula: " << cedula << endl;
	return s.str();
	
}