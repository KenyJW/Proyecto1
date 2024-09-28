#pragma once
#include"Duennio.h"
class Mascota{
private:
	string nombre;
	string raza;
	string animal;
	Duennio* DuePtr;
public:
	Mascota(string nom="Indef", string raz="Indef", string ani="Indef", Duennio* DUE=NULL);
	virtual ~Mascota();
	//get
	string getNombre();
	string getRaza();
	string getAnimal();
	Duennio* getDuennio();
	//set
	void setNombre(string);
	void setRaza(string);
	void setAnimal(string);
	void setDuennio(Duennio*);
	//to string
	string toString();

	
};

