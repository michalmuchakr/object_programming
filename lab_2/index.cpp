#include <iostream>
#include <string>
#include <stdlib.h> // srand, rand
#include <time.h>   // time

using namespace std;

class Car {
string mark;
string model;
unsigned int price;

unsigned int getPrice() {
srand(time(NULL));
return rand() % 5000 + 145000;
}

public:
Car(string new_mark = "Volvo", string new_model = "s80") {
price = getPrice();
mark = new_mark;
model = new_model;
}

Car(const Car& Car_pattern) {
// TODO
}

string getModel() {
return model;
}

void setModel(string new_model) {
model = new_model;
}

string getMark() {
return mark;
}

void setMark(string new_mark) {
mark = new_mark;
}

~Car() {
cout << "I'm a destructor of car, bye, bye." << endl;
}
};

void fillArrayOfCars(Car *car_arr, int size) {
for (int i = 0; i < size; i++) {
Car TempCar;
car_arr[i] = TempCar;
}
}

class CarOwner {
int car_owner_id;
static int recent_id;

static unsigned int car_counter;
static const unsigned int car_limit;
Car *car_owned = nullptr;

void copyCartable(Car car_ovned_tab) {
if (car_owned != nullptr) {

}
}
public:
CarOwner():
car_owner_id(recent_id++)
{
cout << "Konstruktor domyslny." << endl;
car_owner_id++;
}

CarOwner( Car *car_owned ) {
cout << "Konstruktor sparametryzowany." << endl;
}

CarOwner(const CarOwner& car_owner_pattern) {
cout << "Konstruktor kopiujący." << endl;
car_owned = car_owner_pattern.car_owned == nullptr
? nullptr
: new Car[car_limit];
}

void getCarOwned() {

}

void getCarCounter() {

}

void getCarOwnerId() {

}

~CarOwner () {
cout << "I'm a destructor of car owner, bye, bye." << endl;
}
};

int CarOwner::recent_id = 1;
unsigned int CarOwner::car_counter = 0;
const unsigned int CarOwner::car_limit = 3;
Car CarOwner::*car_owned = NULL;

int main() {
// 1.
Car MyVolvo();

// 2.
Car *volvo_array = new Car[10];
fillArrayOfCars(volvo_array, 10);

// 3.
Car Kupiec_1();
Car Kupiec_2();
Car Kupiec_3();

system("pause");
return 0;
}
