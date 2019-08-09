#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <typeinfo>

#include "oreo.cpp"
#include "migajas.cpp"
#include "granja.cpp"
#include "templo.cpp"
#include "banco.cpp"
#include "mejora.cpp"
#include "edificio.cpp"
using namespace std;

bool t = true;

int pGranja=50, pBanco=100, pTemplo=200;
int op, op2, SUM;
string name;
vector<edificio*> edificios;
vector<mejora*> mejoras;

int main(){
	int galletas=0;
	bool O = false, M = false;
	cout<<"Ingrese nombre del jugador: "<<endl;
	cin>>name;
	while(t){
		cout<<"Cantidad de galletas de "<<name<<": "<<galletas<<endl;
		cout<<"Ingrese una opcion: "<<endl;
		cout<<"1) Hacer click"<<endl;
		cout<<"2) Comprar granja"<<endl;
		cout<<"3) Comprar banco"<<endl;		
		cout<<"4) Comprar templo"<<endl;
		if(O==false){
			cout<<"5) Comprar Oreo (multiplicador x2)"<<endl;	
		}
		if(M==false){
			cout<<"6) Comprar Migajas (multiplicador x3)"<<endl;
		}
		cout<<"7) Mostrar edificios y mejoras"<<endl;		
		cout<<"8) Salir"<<endl;
		cin>>op;
		switch(op){
			case 1://click
			SUM=0;
			SUM++;
			for (int i = 0; i < edificios.size(); i++) {
				SUM+=edificios.at(i)->producir();
			}
			for (int i = 0; i < mejoras.size(); i++) {
				if (mejoras[i]->multiplicador() != 0){
					SUM*=mejoras.at(i)->multiplicador();
				}	
			}
			cout<<"+"<<SUM<< " galletas"<<endl;
			galletas= galletas+SUM;
				break;
			case 2://comprar granja
				if (galletas>=pGranja) {
					cout<<"Granja adquirida"<<endl;
					galletas= galletas-pGranja;
					pGranja+=15;
					edificios.push_back(new granja());
				}else{
					cout<<"Galletas insuficientes!"<<endl;
				}
				break;
			case 3://comprar banco
				if (galletas>=pBanco) {
					cout<<"Banco adquirido"<<endl;
					galletas= galletas-pBanco;
					pBanco+=40;
					edificios.push_back(new banco());
				}else{
					cout<<"Galletas insuficientes!"<<endl;
				}
				break;
			case 4://comprar templo
				if (galletas>=pTemplo) {
					cout<<"Templo adquirido"<<endl;
					galletas= galletas-pTemplo;
					pTemplo+=100;
					edificios.push_back(new templo());
				}else{
					cout<<"Galletas insuficientes!"<<endl;
				}
				break;
			case 5://oreo
				if(O){
					cout<<"Opcion invalida!"<<endl;		
				} else{
					if(galletas>=100){
						mejoras.push_back(new oreo());
						galletas = galletas-100;
						cout<<"Mejora OREO adquirida!"<<endl;
						O=true;
					} else {
						cout<<"Galletas insuficientes, necesita 100 la mejora 'Oreo'"<<endl;
					}
				}
				break;
			case 6://migajas
				if(M){
					cout<<"Opcion invalida!"<<endl;		
				} else {
					if(galletas>=1000){
						mejoras.push_back(new migajas());
						galletas= galletas-1000;
						cout<<"Mejora MIGAJAS adquirida!"<<endl;
						M=true;
					} else {
						cout<<"Galletas insuficientes, necesita 1000 la mejora 'Migajas'"<<endl;
					}
				}
				break;	
			case 7://Mostrar edificios y mejoras
				//edificios
				cout<<"Lista de Edificios: "<<endl;
				for (int i=0; i<edificios.size(); i++) {
					cout<<i<<") ";
					edificios.at(i)->print();
				}
				cout<<"\n";
				//mejoras
				cout<<"Lista de Mejoras: "<<endl;
				for (int i=0; i<mejoras.size(); i++) {
					cout <<i<<") ";
					mejoras.at(i)->print();
				}
				cout<<"\n";
				break;
			case 8://salir
				return 0;
				break;
			default:
				cout<<"Opcion invalida!"<<endl;
				break;
		}
	}
	//
	return 0;
}
