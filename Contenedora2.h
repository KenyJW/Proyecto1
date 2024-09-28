#pragma once
#include"Contenedora.h"

class Contenedora2{
private:
	Contenedora** vec;
	Mascota* masc;
	Duennio* due;
	Doctor* dr;
	Especialidad* esp;
	int tam = 6;
	int can;
public:
	Contenedora2();
	virtual ~Contenedora2();
	Mascota* getMascota();
	Duennio* getDuennio();
	Doctor* getDr();
	Especialidad* getESP();
	//SETS
	void setMascota(Mascota*);
	void setDuennio(Duennio*);
	void setDr(Doctor*);
	void setESP(Especialidad*);
	//to string
	string toString();
	void agregarCita(int, Cita*);
	string mostrarCitasDr(Doctor*);
	string mostrarCitasDue(Duennio*);

	bool existeDueCed(string);
	/*string mostrarListEsp();*/
	/*string mostrarListDocEsp(Especialidad*);
	string mostrarDueMas();
	string mostrarPacDoc(Doctor*);*/



};

