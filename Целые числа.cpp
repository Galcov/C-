#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int a, b;
	cout << "Ведите трехзначное число:";
	cin >> a;
	cout << endl;
	b = a / 100;
	cout << "Сотни:" << b;
}