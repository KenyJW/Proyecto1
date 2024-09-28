#include "Mascota.h"
Mascota::Mascota(string nom, string raz, string ani, Duennio* DUE) {
	nombre = nom;
	raza = raz;
	animal = ani;
	DuePtr = DUE;
}
Mascota:: ~Mascota() { if (DuePtr) delete DuePtr; }
//get
string Mascota::getNombre() {
	return nombre;
}
string Mascota::getRaza() {
	return raza;
}
string Mascota::getAnimal() {
	return animal;
}
Duennio* Mascota::getDuennio() {
	return DuePtr; 
}
//set
void Mascota::setNombre(string nom) {
	nombre = nom;
}
void Mascota::setRaza(string raz) {
	raza = raz;
}
void Mascota::setAnimal(string ani) {
	animal = ani;
}
void Mascota::setDuennio(Duennio* DUE) {
	DuePtr = DUE;
}
//to string
string Mascota::toString() {
	stringstream s;
	s << DuePtr->toString() << endl; 
	s << "Nombre: " << nombre << endl;
	s << "Raza: " << raza << endl;
	s << "Animal: " << animal << endl;
	return s.str();
}