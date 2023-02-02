#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;

#include "MedidasDispersion.cpp"
#include "DistribucionFrecuencia.cpp"
#include "DatosDispersion.h"
#include "DatosFrecuencia.h"

class Controller {
	
	public:
		Controller(){
		}
		
		vector<double> ProcessChain(string cadena){
			int punt = 0;
			int Spunt;
			double dat;
			vector<double> recDat;
			
			string datS;
			
			for(int ii=0;ii<cadena.length();ii++){
				if(ii==(cadena.length()-1)){
					dat = atof(cadena.substr(punt,Spunt-punt).c_str());
					recDat.push_back(dat);
					//cout << Datos.substr(punt,(ii+1)-punt) << " Mas 5 = " << dat+5 << endl;
					
				}
				if(cadena[ii] == ';'){
					Spunt = ii;
					//cout << punt << " - " << Spunt;
					
					dat = atof(cadena.substr(punt,Spunt-punt).c_str());
					recDat.push_back(dat);
					//dat = std::stod(Datos.substr(punt,Spunt-punt));   //otra forma 
					//cout << cadena.substr(punt,Spunt-punt) << " Mas 5 = " << dat+5 << endl;
					
					//datS << Datos.substr(punt,Spunt-punt);
					//datS >> dat;
					
					//datS = Datos.substr(punt,Spunt-punt);
					//dat = atof(datS.c_str());
					
					punt = Spunt+1;
				}
				
			}
			return recDat;
			
		}
		
		//DatosDispersion CalculoDispersion(vector<double> datosIn){
		DatosDispersion CalculoDispersion(string cadena){
			vector<double> datosIn = ProcessChain(cadena);
			MedidasDispersion datDispersion;
			DatosDispersion resultadoDispersion = datDispersion.Recibo(datosIn);
			return resultadoDispersion;
		}
		
		//DatosFrecuencia* CalculoFrecuencia(vector<double> datosIn){
		DatosFrecuencia* CalculoFrecuencia(string cadena){
		//void CalculoFrecuencia(double datosIn[]){
			vector<double> datosIn = ProcessChain(cadena);
			DistribucionFrecuencia datFrecuencia;
			//DatosDispersion resultadoFrecuencia = datFrecuencia.Recibo(datosIn);
			DatosFrecuencia* resultadoFrecuencia = datFrecuencia.Recibo(datosIn);
			return resultadoFrecuencia;
		}
};

