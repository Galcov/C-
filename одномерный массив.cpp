#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	const int N = 20;
	int a[N];
	int i, n;
	cout << "n=", cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	for (i = 0; i < n - 1; i++)
		if (a[i] * a[i + 1] >= 0) break;
	if (i == n - 1) cout << "0";
	else cout << i;
	return 0;
}
