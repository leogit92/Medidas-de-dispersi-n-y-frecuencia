#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "Controller.cpp"
#include "DatosDispersion.h"
#include "DatosFrecuencia.h"

void FuncMenu();
void HacerCalculo();
void ImprimirDispersion(DatosDispersion resultadoDispersion);
void ImprimirFrecuencia(DatosFrecuencia* resultadoFrecuencia);

int main()
{
	
	HacerCalculo();
	
	system("pause");
	//return 0;
	return EXIT_SUCCESS;
}

void FuncMenu()
{
	char siNo;
	cout << "desea hacer otro calculo (s/n): ";
	cin >> siNo;
	cin.ignore(256,'\n');
	cout << endl;
	if (siNo == 's' || siNo == 'S'){
		HacerCalculo();
	}
	//return 0;
}

void HacerCalculo()
{
	char datosInput[1000];
	string convertChar;
	/*
	vector<double> datosIn = {150,160,164,158,183,150,160,164,158,183,150,160,164,158,183,150,160,164,158,183};
	//{150;160;164;158;183;150;160;164;158;183;150;160;164;158;183;150;160;164;158;183};
	Controller Controlador;
	
	DatosDispersion resultadoDispersion = Controlador.CalculoDispersion(datosIn);
	ImprimirDispersion(resultadoDispersion);
	
	//vector<double> datosFrecuencia = {25,26,27,28,28,29,29,30,30,30,31,31,31,31,32,32,32,32,33,33,34,34,35,35,35,36,37,38,39,40};
	vector<double> datosFrecuencia = {31,31,31,39,32,32,25,33,26,28,29,36,29,30,30,30,31,32,32,40,33,34,27,28,34,35,35,35,37,38};
	//{31;31;31;39;32;32;25;33;26;28;29;36;29;30;30;30;31;32;32;40;33;34;27;28;34;35;35;35;37;38};
	//double datosFrecuencia[30] = {25,26,27,28,28,29,29,30,30,30,31,31,31,31,32,32,32,32,33,33,34,34,35,35,35,36,37,38,39,40};
	
	//vector<double> datosFrecuencia = {1,4,4,2,2,3,3,0,0,0,0,0,1,1,1,1,1,1,2,2,2,0,0,0,2,2,3,3,3,4};
	//{1;4;4;2;2;3;3;0;0;0;0;0;1;1;1;1;1;1;2;2;2;0;0;0;2;2;3;3;3;4}
	DatosFrecuencia* resultadoFrecuencia = Controlador.CalculoFrecuencia(datosFrecuencia);
	ImprimirFrecuencia(resultadoFrecuencia);
	*/
	
	cout << "ingrese los datos separados por ';': ";
	cin.getline(datosInput, 1000);
	cin.ignore(256,'\n');
	
	convertChar = (string) datosInput;
	
	Controller Controlador;
	
	DatosDispersion resultadoDispersion = Controlador.CalculoDispersion(convertChar);
	ImprimirDispersion(resultadoDispersion);
	
	DatosFrecuencia* resultadoFrecuencia = Controlador.CalculoFrecuencia(convertChar);
	ImprimirFrecuencia(resultadoFrecuencia);
	
	system("pause");
	system("cls");
	FuncMenu();
}

void ImprimirDispersion(DatosDispersion resultadoDispersion){
	cout << "---------------------------------------" << endl;
	cout << "|        Medidas de Dispersion        |" << endl;
	cout << "---------------------------------------" << endl << endl;
	cout << "Rango:                    " << resultadoDispersion.getRango() << endl;
	cout << "Media Aritmetica:         " << resultadoDispersion.getMediaAritmetica() << endl;
	cout << "Varianza:                 " << resultadoDispersion.getVarianza() << endl;
	cout << "Desviacion Tipica:        " << resultadoDispersion.getDesviacionTipica() << endl;
	cout << "Coeficiente de Variacion: " << resultadoDispersion.getCoeficienteVariacion() << endl;
	cout << endl << endl;
}

void ImprimirFrecuencia(DatosFrecuencia* resultadoFrecuencia){
	cout << "----------------------------------------------------------------------------" << endl;
	cout << "|                        Distribucion de Frecuencia                        |" << endl;
	cout << "----------------------------------------------------------------------------" << endl << endl;
	cout << "|  Xi  " << "|  fi  " << "|  Fi  " << "|     fr     " << "|     Fra     " << "|     frp     " << "|    Frpa    |"<< endl;
	for(int i=0;i<resultadoFrecuencia[0].getNDat();i++){
		cout << "|  " << resultadoFrecuencia[i].getXi() << "  |  " << resultadoFrecuencia[i].getfi() << "  |  " << resultadoFrecuencia[i].getFi() << "  |  " << resultadoFrecuencia[i].getfr() << "  |  " << resultadoFrecuencia[i].getFra() << "  |  " << resultadoFrecuencia[i].getfrp() << "  |  " << resultadoFrecuencia[i].getFrp() << "  |" << endl;
	}
	cout << endl;
}