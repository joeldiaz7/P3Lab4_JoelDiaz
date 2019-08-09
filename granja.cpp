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

#ifndef GRANJA
#define GRANJA

class granja : public edificio{
	private:
		int produc;
	public:
		granja(){
			this->produc=5;
		}
		int producir(){
			return produc;
		}
		void print(){
			cout<<"Granja"<<endl;
		}
};
#endif
