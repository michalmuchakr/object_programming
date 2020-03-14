#include "Odcinek.h"

Odcinek::Odcinek()
{
	nadaj_param_pocz("1D", 1);
	boki[0] = 1;
}

Odcinek::Odcinek(double uzytkownik_bok)
{
	nadaj_param_pocz("1D", 1);
	boki[0] = uzytkownik_bok;
}

void Odcinek::wyswietl()
{
	cout << "Dlugosci bokow: " << endl;
	cout << "-------------------------" << endl;

	for (int i = 0; i < il_boków; i++) {
		cout << "Bok " << i << " ma dlugosc: " << boki[i] << endl;
	}

	cout << endl;

	cout << "Obwod: " << endl;
	cout << "-------------------------" << endl;
	cout << "Obwod wynosi: " << boki[0] << endl;

	cout << endl;
}

Odcinek::~Odcinek()
{
}
