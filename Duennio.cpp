#include "Duennio.h"
Duennio::Duennio(string nom, string ced) { 
	nombre = nom; 
	cedula = ced; 
}
Duennio:: ~Duennio() {}
//gets
string Duennio::getNombre() {
	return nombre;
}
string Duennio::getCedula() {
	return cedula;
}
//sets
void Duennio::setCedula(string ced) {
	cedula = ced;
}
void Duennio::setNombre(string nom) {
	nombre = nom;
}
// to string
string Duennio::toString() {
	stringstream s;
	s << "Nombre: " << nombre << endl;
	s << "Cedula: " << cedula << endl;
	return s.str();
}
