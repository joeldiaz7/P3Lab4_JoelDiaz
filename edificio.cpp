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

#ifndef EDIFICIO_CPP
#define EDIFICIO_CPP

class edificio {
	private:
		string name;
	public:
		edificio(){}
		virtual void print()=0;
		virtual int producir()=0;
		~edificio(){}
};
#endif
