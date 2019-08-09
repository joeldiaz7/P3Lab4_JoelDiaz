#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <typeinfo>

using namespace std;

#ifndef MEJORA_CPP
#define MEJORA_CPP

class mejora {
	private:
		string name;
	public:
		mejora(){}
		mejora(string name){
			this->name=name;
		}
		virtual int multiplicador()=0;
		virtual void print()=0;
		~mejora(){}
};
#endif
