#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    //Размер массива
    const int n = 3 , m = 3;
    //Инициализация массива
    int arr[m][n];
    //Вывод матрицы 
    cout << "Введите значения элементов массива:" << '\n';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Элемент массива [" << i+1 << "][" << j+1 << "]:" << endl;
            cin >> arr[i][j];
        }

    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //Поиск среднего значения
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
    }
    sum /= (n * m);

    // поиск строки и столбца элемента матрицы, наиболее близкого к среднему значению всех его элементов
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (abs(sum - arr[a][b]) > abs(sum - arr[i][j]))
            {
                a = i;
                b = j;
            }
        }
    }

    //Вывод результата
    cout << "Номер строки : " << a + 1 << '\n';
    cout << "Номер столбца: " << b + 1 << '\n';

    return 0;
}