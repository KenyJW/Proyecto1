#include "Contenedora2.h"

Contenedora2::Contenedora2() {
    can = 0;
    vec = new Contenedora * [tam];
    for (int i = 0; i < tam; i++) {
        vec[i] = NULL;
    }
}
Contenedora2:: ~Contenedora2() {
    for (int i = 0; i < tam; i++) 
        delete vec[i];
    delete[] vec;
}
Mascota* Contenedora2::getMascota() { return masc; }
Duennio* Contenedora2::getDuennio() { return due; }
Doctor* Contenedora2::getDr() { return dr; }
Especialidad* Contenedora2::getESP() { return esp; }

void Contenedora2::setMascota(Mascota* e) { masc = e; }
void Contenedora2::setDuennio(Duennio* d) { due = d; }
void Contenedora2::setDr(Doctor* d) { dr = d; }
void Contenedora2::setESP(Especialidad* e) { esp = e; }

void Contenedora2::agregarCita(int dia, Cita* c) {
    if (dia >= 0 && dia < tam) {
        vec[dia]->ingresaCita(c);
    }
}

string Contenedora2::mostrarCitasDr(Doctor* doc){
    stringstream z;
    for (int i = 0; i < tam; ++i) {
        z << "Día " << i + 1 << ":\n";
        z << vec[i]->mostrarCitasDr(doc) << "\n"; 
    }
    return z.str();
}

string Contenedora2::mostrarCitasDue(Duennio* d){
    stringstream z;  
    for (int i = 0; i < tam; ++i) {
        z << "Día " << i + 1 << ": \n";
        z << vec[i]->citaPorDuennio(d) << "\n";
    }
    return z.str();
}

bool Contenedora2::existeDueCed(string c){
    for (int i = 0; i < can; i++)
        if (true == vec[i]->existeDueCed(c))
            return true;
    return false;
}

//string Contenedora2::mostrarListEsp(){
//    stringstream s;
//    for (int i = 0; i < tam; ++i) 
//        s << vec[i]->mostrarListEsp() << "\n"; 
//    return s.str();
//}





