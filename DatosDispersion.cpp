#include <iostream>
using namespace std;

#include "DatosDispersion.h"

DatosDispersion::DatosDispersion(){
}

DatosDispersion::DatosDispersion(double rango,double mediaA){
	Rango = rango;
	MediaAritmetica = mediaA;
}

void DatosDispersion::setRango(double rango){
	Rango = rango;
}

void DatosDispersion::setMediaAritmetica(double mediaA){
	MediaAritmetica = mediaA;
}

void DatosDispersion::setVarianza(double varS){
	Varianza = varS;
}

void DatosDispersion::setDesviacionTipica(double desvT){
	DesviacionTipica = desvT;
}

void DatosDispersion::setCoeficienteVariacion(double coefVar){
	CoeficienteVariacion = coefVar;
}

double DatosDispersion::getRango(){
	return Rango;
}

double DatosDispersion::getMediaAritmetica(){
	return MediaAritmetica;
}

double DatosDispersion::getVarianza(){
	return Varianza;
}

double DatosDispersion::getDesviacionTipica(){
	return DesviacionTipica;
}

double DatosDispersion::getCoeficienteVariacion(){
	return CoeficienteVariacion;
}