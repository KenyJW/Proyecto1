#pragma once
#include"Mascota.h"
#include"Especialidad.h"  
class Cita{
private:
	int hora;
	string fecha;
	Mascota* masPtr;
	Doctor* drPtr;
	Duennio* duePtr;
	Especialidad* espPtr; 
public:
	Cita(int = 0,string="", Mascota* = NULL, Doctor* = NULL);
	Cita(int=0, string="", Doctor* = NULL);
	virtual ~Cita();
	/*void setDia(string);
	void setMes(string);
	void setAnnio(string);*/
	void setHora(int);
	void setFecha(string);
	void setMas(Mascota*);
	void setDr(Doctor*);

	/*string getMes();
	string getAnnio();*/
	string getFecha();
	int getHora();
	Mascota* getMas();
	Doctor* getDr();
	Duennio* getDuennio();
	Especialidad* getEspecialidad();

	string toString();

	bool asegurarHora();
};

