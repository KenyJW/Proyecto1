#include "Contenedora.h"

Contenedora::Contenedora() {
    can = 0;
    vec = new Cita * [tam];
    for (int i = 0; i < tam; i++)   // Limpieza del vector...
        vec[i] = NULL;
}
Contenedora:: ~Contenedora() {
    for (int i = 0; i < can; i++)
        delete vec[i];
    delete[] vec;
}
Mascota* Contenedora::getMascota(){return masc;}
Duennio* Contenedora::getDuennio(){return due;}
Doctor* Contenedora::getDr(){return dr;}
Especialidad* Contenedora::getESP(){ return esp;}


void Contenedora::setMascota(Mascota* e) { masc = e; }
void Contenedora::setDuennio(Duennio* d) { due = d; }
void Contenedora::setDr(Doctor* d) { dr = d; }
void Contenedora::setESP(Especialidad* e) { esp = e; }

string Contenedora::toString(){
    stringstream s;
    s << "-------------Listado-------------" << endl;
    for (int i = 0; i < can; i++) {
        s << vec[i]->toString()<<endl;
    }
    s << "---------------FIN--------------" << endl;
    return s.str();
}

bool Contenedora::ingresaCita(Cita* cit) {
    if (can < tam) {
        vec[can++] = cit;
        return true;
    }
    else
        return false;
}
int Contenedora::posicDeLaCita(Cita* ci) {
    for (int i = 0; i < can; i++)
        if (ci == vec[i])
            return i;
    return -1;
}
bool Contenedora::existeCita(Cita* ci) {
    for (int i = 0; i < can; i++)
        if (ci == vec[i])
            return true;
    return false;
}
bool Contenedora::cancelarCita(Cita* cit) {
    int posCita;
    if (existeCita(cit) == true) {
        posCita = posicDeLaCita(cit);
        delete vec[posCita];
        // Corrimiento hacia la izquierda.
        for (int i = posCita; i < can; i++)
            vec[i] = vec[i + 1];
        can--;

        return true;
    }
    return false;
}
string Contenedora::mostrarCitasDr(Doctor* doc) {
    stringstream z;
    z << doc->toString() << endl;
    for (int i = 0; i < can; i++) {
        if (doc == vec[i]->getDr()) {
            z << "Citas:" << endl
                << vec[i]->getMas()->toString() << endl << vec[i]->getHora();
        }

    }
    return z.str();
}
string Contenedora::citaPorDuennio(Duennio* due) {
    stringstream s;
    for (int i = 0; i < can; i++) {
        if (vec[i]->getDuennio() == due) {
            s<<vec[i]->toString()<<endl;
        }
    }
    return s.str();
}

bool Contenedora::existeDueCed(string c){
    for (int i = 0; i < can; i++)
        if (c == vec[i]->getDuennio()->getCedula())
            return true;
    return false;
}

//bool Contenedora::eliminarMascota(string IDD, string nomMasc) {
//    for (int i = 0; i < can; i++) {
//        if ((vec[i]->getDuennio()->getCedula() == IDD) && (vec[i]->getMas()->getNombre() == nomMasc))
//            return true;
//    }
//    return false;
//}
//bool Contenedora::existeMascota(string iDd, string nom) {
//    for (int i = 0; i < can; i++) {
//        if ((iDd == vec[i]->getDuennio()->getCedula()) && (nom == vec[i]->getMas()->getNombre()))//CÓMO LLAMAR LOS MÉTODOS DE OTRAS CLASES SIN MENCIONAR EL PUNTERO
//            delete vec[i];
//        return true;
//    }
//    return false;
//}
//id del duennio y nombre de la mascota
//int Contenedora::posicdeMascota(string ID, string NomMasc) {//AQUI CREO QUE SE LLAMA POR REFERENCIA LAS CLASES EN LOS PARAMETROS PARA REVISAR CON UN Y LOGICO LA CED DEL DUEÑO Y NOMBRE DE LA MASCOTA
//    for (int i = 0; i < can; i++)
//        if ((vec[i]->getDuennio()->getCedula() == ID) && (vec[i]->getMas()->getNombre() == NomMasc))
//            return i;
//    return -1;
//}

string Contenedora::mostrarListEsp() {
    stringstream s;
    for (int i = 0; i < can; i++) {
        s << vec[i]->getEspecialidad();
    }
    return s.str();
}

string Contenedora::mostrarListDocEsp(Especialidad* esp) {
    stringstream s;
    for (int i = 0; i < can; i++) {
        if (esp == vec[i]->getDr()->getEsp())
            s << vec[i]->getDr()->getNombre();
    }
    return s.str();
}

string Contenedora::mostrarDuenniosMascotas() {
    stringstream s;
    for (int i = 0; i < can; i++) {
        s << vec[i]->getMas()->toString()<<endl;
    }
    return s.str();
}

string Contenedora::mostrarPacDoc(Doctor* doc) {
    stringstream z;
    z << doc->toString() << endl;
    for (int i = 0; i < can; i++) {
        if (doc == vec[i]->getDr()) {
            z << "Pacientes: " << endl;
            z << vec[i]->getMas()->toString() << endl;
        }

    }
    return z.str();
}