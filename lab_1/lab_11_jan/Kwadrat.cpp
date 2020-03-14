#include "Kwadrat.h"

Kwadrat::Kwadrat()
{
	nadaj_param_pocz("2D", 2);

	boki[0] = 0;
	boki[1] = 0;
}

Kwadrat::Kwadrat(double x, double y)
{
	nadaj_param_pocz("2D", 2);

	boki[0] = x;
	boki[1] = y;
}

double Kwadrat::pole()
{
	return boki[0] * boki[1];
}

double Kwadrat::obwod()
{
	return 2 * boki[0] + 2* boki[1];
}

void Kwadrat::wyswietl()
{
	cout << "Dlugosci bokow: " << endl;
	cout << "-------------------------" << endl;

	for (int i = 0; i < il_boków; i++) {
		cout << "Bok " << i << " ma dlugosc: " << boki[i] << endl;
	}

	cout << endl;

	cout << "Pole: " << endl;
	cout << "-------------------------" << endl;
	cout << "Pole wynosi: " << pole() << endl;

	cout << endl;

	cout << "Obwod: " << endl;
	cout << "-------------------------" << endl;
	cout << "Obwod wynosi: " << obwod() << endl;

	cout << endl;
}

Kwadrat::~Kwadrat()
{
}
