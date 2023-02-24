#include <iostream>;
using namespace std;

int factorial(int n)
{
	int x = 1;
	for (int i = 1; i <= n; i++)
	{
		x *= i;
	}
	return x;
}
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите количество строк треугольника Паскаля: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= (n - i); j++)
		{
			cout.width(2);

			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout.width(3);
			cout << " " << (factorial(i) / (factorial(j) * factorial(i - j)));
		}
		cout << endl;
	}
}
