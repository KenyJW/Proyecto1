/*Especialidad* espPtr = new Especialidad("Cardiologia");
	Duennio* duePtr = new Duennio("Kenny", "2222");*/

	//cout << "Creando doctor..." << endl;
	//Doctor* DocPtr = new Doctor("Tham", "1111", 18, espPtr);
	//cout << "Doctor: " << DocPtr->toString();
	////-------------------------------------------------
	////CREACION MASCOTA
	//Mascota* masPtr = new Mascota("Lulu","SchNauzer","PERRA",5, 7, duePtr);
	//cout << "Info de mascota...." << endl;
	//cout << masPtr->toString() << endl;
	////
#include<iostream>
#include"Doctor.h"
#include"Mascota.h"
#include"Cita.h" 
#include"Contenedora2.h"
using namespace std;
int main() {
	

	Especialidad* objEsp = NULL;
	Duennio* objDue = NULL;
	Mascota* objMasc = NULL;
	Doctor* objDr = NULL;
	Cita* objCita = NULL;
	Contenedora2* COS = new Contenedora2();

	string especialidad;
	string nombre, cedula;
	string raza, animal;

	int op;
	do {
		cout << "Menu Principal" << endl
			<< "1.-Submenu administracion" << endl
			<< "2.-submenu control del citas \n3.-submenu busquedas y listados" << endl;
		cout << "digite la opcion: "; cin >> op;
		system("cls");
		switch (op) {
		case 1:cout << "=============Submenu: Administración==============" << endl
			<< "(1) Ingresar Especialidades" << endl
			<< "(2) Ingresar Doctor(por especialidad)" << endl
			<< "(3) Ingresar Dueño" << endl
			<< "(4) Ingresar Mascota(por dueño)" << endl
			<< "(0) Regresar al Menú Principal" << endl;
			cout << "ingrese la opcion: "; cin >> op;
			system("cls");
			switch (op)
		case 1: {//DESARROLLO DE LO DE ADENTRO DEL PRIMER MENÚ
				cout << "---------  Ingresar Especialidades  ----------" << endl;
				cout << "Ingrese la especialidad: "; cin >> especialidad;
				objEsp = new Especialidad(especialidad);
				COS->setESP(objEsp);
				system("cls");
				break;
		case 2:
			cout << "========== Ingresar Doctor(por especialidad) =========" << endl;
			cout << "Ingrese los datos del doctor..." << endl;
			cout << "Nombre: "; cin >> nombre;
			cout << "Ingrese la cedula: "; cin >> cedula;
			cout << "especialidad del Doctor:"; cin >> especialidad;
			objEsp = new Especialidad(especialidad);
			objDr = new Doctor(nombre, cedula);
			COS->setDr(objDr);
			system("cls");
			break;
		case 3:
			cout << "==========  Ingresar Dueño  ============" << endl;
			cout << "Nombre del duennio: "; cin >> nombre;
			cout << "Cedula: "; cin >> cedula;
			objDue = new Duennio(nombre, cedula);
			COS->setDuennio(objDue);
			system("cls");
			break;
		case 4:cout << "============= Ingresar Mascota(por dueño) ===============" << endl;
			cout << "Nomnre de la mascota: "; cin >> nombre;
			cout << "Raza del animal: "; cin >> raza;
			cout << "Tipo de animal: "; cin >> animal;
			cout << "Ingrese la cedula del duennio: "; cin >> cedula;
			objMasc = new Mascota(nombre, raza, animal, objDue);
			cout << "todo se ingreso correctamente...";
			system("pause");
			system("cls");
			break;
		default:
			break;
			}
			break;
		case 2: cout << "Submenu: Control de citas" << endl
			<< "(1) Sacar cita" << endl
			<< "(2) Cancelar cita" << endl
			<< "(3) Mostrar calendario de citas por doctor" << endl
			<< "(4) Mostrar Citas por dueño" << endl
			<< "(0) Regresar al Menú Principal" << endl;
			cout << "ingrese la opcion: "; cin >> op;

			break;
		case 3: cout << "Búsquedas y listada" << endl
			<< "(1) Mostrar listado de especialidades" << endl
			<< "(2) Mostrar listado de doctores por especialidad" << endl
			<< "(3) Mostrar dueños con sus mascotas" << endl
			<< "(4) Mostrar pacientes por doctor" << endl
			<< "(0) Regresar al Menú Principal" << endl;
			cout << "ingrese la opcion: "; cin >> op;
			break;
		}
	} while (op != 10);
	system("cls");
	
	/*system("pause");
	cout << "Jose Puto" << endl;
	system("pause");*/
	return 0;
}