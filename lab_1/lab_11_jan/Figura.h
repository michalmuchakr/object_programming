#pragma once
#include<iostream>
using namespace std;

class Figura
{
public:
	string nazwa;
	string wymiar;
	double *boki;
	int il_boków;

	virtual double pole();
	virtual double obwod();
	virtual double objetosc();

	virtual void nadaj_param_pocz(string, int);
	virtual void wyswietl();

	virtual ~Figura();
};
