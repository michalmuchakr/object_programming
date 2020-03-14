#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <string>

using namespace std;

void full_fill_tab(double *tab, int tab_length) {
for (int i = 0; i < tab_length; i++) {
tab[i] = rand() % 15 + 5 / 10.;
}
};

double get_sum_of_elements(double *tab, int tab_length) {
double sum = 0;

for (int i = 0; i < tab_length; i++) {
sum += tab[i];
}

return sum;
}

double get_average_of_tab(double *tab, int tab_length) {
double sum = get_sum_of_elements(tab, tab_length);
return sum / tab_length;
}

void display_results(double *tab, int tab_length, double user_tab_sum, double average) {
cout << "Table: " << endl;

for (int i = 0; i < tab_length; i++) {
if (i != 0) {
cout << " ";
}
cout << tab[i];
}

cout << endl;
cout << "Sum: " << user_tab_sum << endl;
cout << "Average: " << average << endl;
}

struct Student {
string name;
string last_name;
string field_of_studdy;
string year_of_studdy;
};

void full_fill_tab_of_student(Student *tab, int tab_length) {
for (int i = 0; i < tab_length; i+=1) {
Student CreatedStudent;

CreatedStudent.name = "TEST";
CreatedStudent.last_name = "TEST";
CreatedStudent.field_of_studdy = "TEST";
CreatedStudent.year_of_studdy = "TEST";

tab[i] = CreatedStudent;
}
}

int main() {
srand(time(NULL));

int user_tab_length;
double user_tab_sum, user_tab_average;

cout << "Provide length of table: " << endl;
cin >> user_tab_length;

double *user_tab = new double[user_tab_length];

full_fill_tab(user_tab, user_tab_length);
user_tab_sum = get_sum_of_elements(user_tab, user_tab_length);
user_tab_average = get_average_of_tab(user_tab, user_tab_length);
display_results(user_tab, user_tab_length, user_tab_sum, user_tab_average);

system("pause");
return 0;
}

