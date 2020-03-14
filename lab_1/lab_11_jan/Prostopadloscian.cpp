#include "Prostopadloscian.h"

Prostopadloscian::Prostopadloscian()
{
	nadaj_param_pocz("3D", 3);

	boki[0] = 0;
	boki[1] = 0;
	boki[2] = 0;
}

Prostopadloscian::Prostopadloscian(int x, int y, int z)
{
	nadaj_param_pocz("3D", 3);

	boki[0] = x;
	boki[1] = y;
	boki[2] = z;
}

double Prostopadloscian::pole()
{
	return 2 * boki[0] * boki[1] + 2 * boki[1] * boki[2] + 2 * boki[0] * boki[2];
}

double Prostopadloscian::obwod()
{
	return 4 * (boki[0] + boki[1] + boki[2]);
}

double Prostopadloscian::objetosc()
{
	return boki[0] * boki[1] * boki[2];
}

void Prostopadloscian::wyswietl()
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

	cout << "Objetosc: " << endl;
	cout << "-------------------------" << endl;
	cout << "Objetosc wynosi: " << objetosc() << endl;

	cout << endl;
}

Prostopadloscian::~Prostopadloscian()
{
}