#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <typeinfo>

#include "mejora.cpp"
using namespace std;

#ifndef MIGAJAS_CPP
#define MIGAJAS_CPP

class migajas : public mejora{
	public:
		migajas(){}
		int multiplicador(){
			return 3;
		}
		void print() {
			cout<<"Mejora Migajas"<<endl;
		}
		~migajas(){}
};
#endif
