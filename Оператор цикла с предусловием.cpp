#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");
	int n;
	cout << "N:";
	cin >> n;
	int k = 0, temp = 3;
	while (temp < n) {
		temp *= 3;
		++k;
	}
	cout << "Ответ = " << k;
	return 0;
}