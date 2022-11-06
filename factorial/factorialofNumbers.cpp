#include <iostream>
using namespace std;


int Fact(int N)
{
	if (N == 0)
	return 0;
	if (N == 1)
	return 1;
	return N * Fact(N - 1);
}
void main()
{
	setlocale(LC_ALL, "");
	int N;
	cout << "Введите число: " << endl;
	cin >> N;
	cout << "Факториал вашего числа равен:" << Fact(N) << endl;
}