#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int n;
    cout << "N = ";
    cin >> n;

    float rez = 0;
    for (int i = 1; i <= n; i++)
        rez += pow(-1, i + 1) * (1.0 + (float)i / 10);
    cout << "Ответ = " << rez;
    return 0;
}