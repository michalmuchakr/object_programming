#pragma once
#include "Odcinek.h"
class Kwadrat : virtual public Figura
{
public:
	Kwadrat();
	Kwadrat(double, double);

	double pole();
	double obwod();

	void wyswietl();
	~Kwadrat();
};
