#pragma once
#include "Figura.h"

class Odcinek : virtual public Figura
{
public:
	Odcinek();
	Odcinek(double);
	void wyswietl();

	~Odcinek();
};
