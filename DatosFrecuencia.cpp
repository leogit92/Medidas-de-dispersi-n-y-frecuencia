#include <iostream>
using namespace std;

#include "DatosFrecuencia.h"

DatosFrecuencia::DatosFrecuencia(){
}

DatosFrecuencia::DatosFrecuencia(int Xi, int fi, int Fi, double fr, double Fra, double frp, double Frp, int NDat){
	vXi = Xi;
	vfi = fi;
	vFi = Fi;
	vfr = fr;
	vFra = Fra;
	vfrp = frp;
	vFrp = Frp;
	vNDat = NDat;
}

int DatosFrecuencia::getXi(){
	return vXi;
}

int DatosFrecuencia::getfi(){
	return vfi;
}

int DatosFrecuencia::getFi(){
	return vFi;
}

double DatosFrecuencia::getfr(){
	return vfr;
}

double DatosFrecuencia::getFra(){
	return vFra;
}

double DatosFrecuencia::getfrp(){
	return vfrp;
}

double DatosFrecuencia::getFrp(){
	return vFrp;
}

int DatosFrecuencia::getNDat(){
	return vNDat;
}