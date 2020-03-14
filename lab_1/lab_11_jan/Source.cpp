#include <iostream>
#include "Odcinek.h"
#include "Kwadrat.h"
#include "Prostopadloscian.h"

using namespace std;

int main() {
	Odcinek *Odcinek_1 = new Odcinek;
	Odcinek *Odcinek_2 = new Odcinek(10);

	Kwadrat *Kwadrat_1 = new Kwadrat;
	Kwadrat *Kwadrat_2 = new Kwadrat(10, 10);

	Prostopadloscian *Prostopadloscian_1 = new Prostopadloscian;
	Prostopadloscian *Prostopadloscian_2 = new Prostopadloscian(10, 10, 10);

	cout << "-------------------------" << endl;
	cout << "Odcinek_1: " << endl;
	cout << "-------------------------" << endl;
	cout << endl;
	Odcinek_1->wyswietl();

	cout << "-------------------------" << endl;
	cout << "Odcinek_2: " << endl;
	cout << "-------------------------" << endl;
	cout << endl;
	Odcinek_2->wyswietl();

	cout << "-------------------------" << endl;
	cout << "Kwadrat_1: " << endl;
	cout << "-------------------------" << endl;
	cout << endl;
	Kwadrat_1->wyswietl();

	cout << "-------------------------" << endl;
	cout << "Kwadrat_2: " << endl;
	cout << "-------------------------" << endl;
	cout << endl;
	Kwadrat_2->wyswietl();

	cout << "-------------------------" << endl;
	cout << "Prostopadloscian_1: " << endl;
	cout << "-------------------------" << endl;
	cout << endl;
	Prostopadloscian_1->wyswietl();

	cout << "-------------------------" << endl;
	cout << "Prostopadloscian_2: " << endl;
	cout << "-------------------------" << endl;
	cout << endl;
	Prostopadloscian_2->wyswietl();

	delete Odcinek_2;
	delete Kwadrat_2;
	delete Prostopadloscian_2;

	Odcinek_1->boki[0] = 5;

	Kwadrat_1->boki[0] = 5;
	Kwadrat_1->boki[1] = 5;

	Prostopadloscian_1->boki[0] = 5;
	Prostopadloscian_1->boki[1] = 5;
	Prostopadloscian_1->boki[2] = 5;

	cout << endl;
	cout << endl;
	cout << endl;

	cout << "-------------------------" << endl;
	cout << "-------------------------" << endl;
	cout << "Po zmianach: " << endl;
	cout << "-------------------------" << endl;
	cout << "-------------------------" << endl;

	cout << endl;
	cout << endl;
	cout << endl;

	cout << "-------------------------" << endl;
	cout << "Odcinek_1: " << endl;
	cout << "-------------------------" << endl;
	cout << endl;
	Odcinek_1->wyswietl();

	cout << "-------------------------" << endl;
	cout << "Kwadrat_1: " << endl;
	cout << "-------------------------" << endl;
	cout << endl;
	Kwadrat_1->wyswietl();

	cout << "-------------------------" << endl;
	cout << "Prostopadloscian_1: " << endl;
	cout << "-------------------------" << endl;
	cout << endl;
	Prostopadloscian_1->wyswietl();

	delete Odcinek_1;
	delete Kwadrat_1;
	delete Prostopadloscian_1;

	system("pause");
	return 0;
}
