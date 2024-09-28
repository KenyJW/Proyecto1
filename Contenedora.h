#pragma once
#include"Cita.h"

class Contenedora{
private:
	Cita** vec;
	Mascota* masc;
	Duennio* due;
	Doctor* dr;
	Especialidad* esp;
	int tam=11;
	int can;
public:
	Contenedora();
	virtual ~Contenedora();
	//gets
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
	//ingresar cita
	bool ingresaCita(Cita*);
	//cancelar cita
	int posicDeLaCita(Cita*);
	bool existeCita(Cita*);
	bool cancelarCita(Cita*);
	//
	string mostrarCitasDr(Doctor*);
	string citaPorDuennio(Duennio*);
	//
	bool existeDueCed(string);//id del duennio y nombre de la mascota
	//bool eliminarMascota(string, string);
	//int posicdeMascota(string, string);
	
	//listado
	string mostrarListEsp();
	string mostrarListDocEsp(Especialidad*);
	string mostrarDuenniosMascotas();
	string mostrarPacDoc(Doctor*); 
};

