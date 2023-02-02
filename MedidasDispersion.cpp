#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

#include "DatosDispersion.h"

class MedidasDispersion {
	
	public:
		MedidasDispersion(){
		}
		
		double CRango(vector<double> Datos){
			double numMayor = 0;
			double numMenor = 1000;
			for(int i=0;i<Datos.size();i++){
				if(Datos[i] > numMayor){
					numMayor = Datos[i];
				}
				if(Datos[i] < numMenor){
					numMenor = Datos[i];
				}
			}
			double rango = numMayor - numMenor;
			//cout << rango << endl;
			return rango;
			
		}
		
		double CPromedio(vector<double> Datos){
			double suma = 0;
			double promedio;
			for(int i=0;i<Datos.size();i++){
				suma += Datos[i];
			}
			promedio = suma/(double) Datos.size();
			return promedio;
		}
		
		double CVarianza(vector<double> Datos, double promedio){
			double varianza=0;
			for(int i=0;i<Datos.size();i++){
				varianza += pow((Datos[i] - promedio),2);
				
			}
			varianza /= ((double) Datos.size() - 1);
			//cout << varianza << endl;
			return varianza;
		}
		
		double CDesviacion(double varianza){
			double desv;
			desv = sqrt(varianza);
			return desv;
		}
		
		double CCoeficienteVar(double promedio,double desviacion){
			double coef;
			coef = desviacion/promedio;
			return coef;
		}
		
		DatosDispersion Recibo(vector<double> Datos){
			vector<double> datosProcesados;
			bool bandera = false;
			for(int i=0;i<Datos.size();i++){
				bandera = false;
				for (int Di=0;Di<datosProcesados.size();Di++){
					if(Datos[i]==datosProcesados[Di]){
						bandera = true;
					}					
				}
				if(bandera != true){
					datosProcesados.push_back(Datos[i]);
				}
			}
			
			DatosDispersion objDatosDispersion;
			
			objDatosDispersion.setRango(CRango(datosProcesados));
			objDatosDispersion.setMediaAritmetica(CPromedio(datosProcesados));
			objDatosDispersion.setVarianza(CVarianza(datosProcesados,objDatosDispersion.getMediaAritmetica()));
			objDatosDispersion.setDesviacionTipica(CDesviacion(objDatosDispersion.getVarianza()));
			objDatosDispersion.setCoeficienteVariacion(CCoeficienteVar(objDatosDispersion.getMediaAritmetica(),objDatosDispersion.getDesviacionTipica()));
			/*
			cout << objDatosDispersion.getRango() << endl;
			cout << objDatosDispersion.getMediaAritmetica() << endl;
			cout << objDatosDispersion.getVarianza() << endl;
			cout << objDatosDispersion.getDesviacionTipica() << endl;
			cout << objDatosDispersion.getCoeficienteVariacion() << endl;*/
			
			return objDatosDispersion;
			
		}
};