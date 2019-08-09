#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <typeinfo>

#include "edificio.cpp"
using namespace std;

#ifndef BANCO_CPP
#define BANCO_CPP

class banco : public edificio{
	private:
		int produc;
	public:
		banco(){
			this->produc=14; //empieza con 1 menos para sumar ese 1 desde la primera y comenzar con 15
		}
		int producir(){
			produc++;
			return produc;
		}
		void print(){
			cout<<"Banco"<<endl;
		}

};
#endif
