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

#ifndef TEMPLO_CPP
#define TEMPLO_CPP

class templo : public edificio{
	private:
		int produc;
	public:
		templo(){
			this->produc=27; //empieza con 3 menos para sumar 3 desde la primera y comenzar con 30
		}
		int producir(){
			produc+=3;
			return produc;
		}
		void print() {
			cout<<"Templo"<<endl;
		}
};
#endif
