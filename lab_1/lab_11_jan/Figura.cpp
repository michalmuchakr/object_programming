#include "Figura.h"

double Figura::pole()
{
	return 0.0;
}

double Figura::obwod()
{
	double obw = 0;

	for (int i = 0; i < il_boków; i++) {
		obw += boki[i];
	}

	return obw;
}

double Figura::objetosc()
{
	double obj = 0;

	for (int i = 0; i < il_boków; i++) {
		obj *= boki[i];
	}

	return obj;
}

void Figura::nadaj_param_pocz(string uzytkownik_nazwa, int ilosc_bokow)
{
	nazwa = uzytkownik_nazwa;
	boki = new double[ilosc_bokow];
	il_boków = ilosc_bokow;
}

void Figura::wyswietl()
{
}

Figura::~Figura()
{
}
