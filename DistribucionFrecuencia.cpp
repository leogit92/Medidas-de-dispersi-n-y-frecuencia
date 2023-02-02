#include <iostream>
//#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

#include "DatosFrecuencia.h"

class DistribucionFrecuencia {
	
	public:
		DistribucionFrecuencia(){
		}
		
		
		DatosFrecuencia* Recibo(vector<double> Datos){
		//void Recibo(double Datos[]){
			vector<double> datosProcesados;
			bool bandera = false;
			for(int i=0;i<Datos.size();i++){
			//for(int i=0;i<30;i++){
				bandera = false;
				for (int Di=0;Di<datosProcesados.size();Di++){
				//for(int Di=0;Di<paso;Di++){
					if(datosProcesados[Di]==Datos[i]){
						bandera = true;
					}					
				}
				
				if(bandera != true){
					datosProcesados.push_back(Datos[i]);
				}
			}
			
			//vector<DatosFrecuencia> datResult[datosProcesados.size()];

			DatosFrecuencia* datResult = new DatosFrecuencia[datosProcesados.size()];
			sort(datosProcesados.begin(),datosProcesados.end());
			double totalFreq=(double) Datos.size();
			//double totalFreq=(double) 30;
			double freq;
			double datfr;
			double datfrT;
			for(int i=0;i<datosProcesados.size();i++){
			//for(int i=0;i<16;i++){
				freq=0;
				for(int ifc=0;ifc<Datos.size();ifc++){
				//for(int ifc=0;ifc<30;ifc++){
					if(Datos[ifc]==datosProcesados[i]){
						freq += 1;
					}
				}
				if(i==0){
					datfr = freq/totalFreq; 
					datfrT = datfr*100;
					datResult[i] = DatosFrecuencia(datosProcesados[i],freq,freq,datfr,datfr,datfrT,datfrT,datosProcesados.size());
					//cout << datResult[i].getXi() << endl;
					//cout << datResult[i].getNDat() << endl;
				}else{
					double datfr = freq/totalFreq; 
					double freqAcum = freq+datResult[i-1].getFi();
					double frAcum = datfr+datResult[i-1].getFra();
					double frpAcum = (datfr*100)+datResult[i-1].getFrp();
					datResult[i] = DatosFrecuencia(datosProcesados[i],freq,freqAcum,datfr,frAcum,datfr*100,frpAcum,datosProcesados.size());
				}
			}
			
			return datResult;
			
			/*
			for(int i=0;i<datResult[0].getNDat();i++){
				cout << "Xi - " << "fi - " << "Fi - " << "fr - " << "Fra - " << "frp - " << "Frpa - "<< endl;
				cout << datResult[i].getXi() << " - " << datResult[i].getfi() << " - " << datResult[i].getFi() << " - " << datResult[i].getfr() << " - " << datResult[i].getFra() << " - " << datResult[i].getfrp() << " - " << datResult[i].getFrp() << " - " << endl;
			}*/
			
			/*
			cout << "Xi - " << "fi - " << "Fi - " << "fr - " << "Fra - " << "frp - " << "Frpa - "<< endl;
			for(int i=0;i<datResult[0].getNDat();i++){
				cout << datResult[i].getXi() << " - " << datResult[i].getfi() << " - " << datResult[i].getFi() << " - " << datResult[i].getfr() << " - " << datResult[i].getFra() << " - " << datResult[i].getfrp() << " - " << datResult[i].getFrp() << " - " << endl;
			}*/
			
			
			
		}
};