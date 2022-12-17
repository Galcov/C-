# include <iostream>
# include <cmath>


using namespace std;


int main() {
	setlocale(LC_ALL, "ru");
	float  A, B;

	cout << "Введите число A:" << A << endl;
	cin >> A;
	cout << "Введите число B: " << B << endl;
	cin >> B;
	if (A != B)
		A = (B = A + B);
	else
		A = (B = 0);
	cout << endl;
	cout << "число A: " << A << endl;
	cout << "число B: " << B << endl;
	return 0;
}