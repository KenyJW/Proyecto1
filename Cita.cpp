#include "Cita.h"

Cita::Cita(int h,string="", Mascota* mas, Doctor* dr) { hora = h; masPtr = mas; drPtr = dr; }
Cita::Cita(int h,string="", Doctor* dr) { hora = h; drPtr = dr; }
Cita::~Cita(){
	if(masPtr) delete masPtr;
	if (drPtr) delete drPtr;
}

void Cita::setFecha(string d) { fecha = d; }
void Cita::setHora(int h) { hora = h; }
void Cita::setMas(Mascota* ma) { masPtr = ma; }
void Cita::setDr(Doctor* dr) { drPtr = dr; }

int Cita::getHora() { return hora; }
string Cita::getFecha(){return fecha;}
Mascota* Cita::getMas() { return masPtr; }
Doctor* Cita::getDr() { return drPtr; }
Duennio* Cita::getDuennio(){return duePtr ;}
Especialidad* Cita::getEspecialidad(){return espPtr;}

string Cita::toString() {
	stringstream s;
	s << "Informacion del paciente: " << masPtr->toString() << endl
		<< "Informacion del doctor: " << drPtr->toString() << endl
		/*<< "Fecha de cita: " << dia << "/" << mes << "/" << annio << endl*/
		<< "La cita sera a las: " << hora << endl;
	return s.str();
}

bool Cita::asegurarHora(){
	if ((hora >= 8) && (hora <= 19))
		return true;
	return false;
}

