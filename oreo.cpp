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

#ifndef OREO_CPP
#define OREO_CPP

class oreo : public mejora{
	public:
		oreo(){}
		int multiplicador(){
			return 2;
		}
		void print() {
			cout<<"Mejora Oreo"<<endl;
		}
		~oreo(){}
};
#endif
