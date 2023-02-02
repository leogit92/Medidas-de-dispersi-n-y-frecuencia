#ifndef _DATOSDISPERSION_H_
#define _DATOSDISPERSION_H_

#include <iostream>
using namespace std;

class DatosDispersion {
	private:
		double Rango;
		double MediaAritmetica;
		double Varianza;
		double DesviacionTipica;
		double CoeficienteVariacion;
	
	public:
		DatosDispersion();
		DatosDispersion(double rango,double mediaA);
		
		void setRango(double rango);
		void setMediaAritmetica(double mediaA);
		void setVarianza(double varS);
		void setDesviacionTipica(double desvT);
		void setCoeficienteVariacion(double coefVar);
		double getRango();
		double getMediaAritmetica();
		double getVarianza();
		double getDesviacionTipica();
		double getCoeficienteVariacion();
		
};

#endif // _DATOSDISPERSION_H_