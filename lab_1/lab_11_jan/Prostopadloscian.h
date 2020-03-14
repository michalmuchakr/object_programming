#pragma once
#include "Kwadrat.h"
class Prostopadloscian : virtual public Figura
{
public:
	Prostopadloscian();
	Prostopadloscian(int, int, int);

	double pole();
	double obwod();
	double objetosc();

	void wyswietl();
	~Prostopadloscian();
};
