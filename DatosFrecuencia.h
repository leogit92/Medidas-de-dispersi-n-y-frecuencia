#ifndef _DATOSFRECUENCIA_H_
#define _DATOSFRECUENCIA_H_

#include <iostream>
using namespace std;

class DatosFrecuencia {
	private:
		int vXi;
		int vfi;
		int vFi;
		double vfr;
		double vFra;
		double vfrp;
		double vFrp;
		int vNDat;
	
	public:
		DatosFrecuencia();
		DatosFrecuencia(int Xi, int fi, int Fi, double fr, double Fra, double frp, double Frp, int NDat);
		
		int getXi();
		int getfi();
		int getFi();
		double getfr();
		double getFra();
		double getfrp();
		double getFrp();
		int getNDat();
		
};

#endif // _DATOSFRECUENCIA_H_