#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

template <typename T>
T Super(T* a, const int size, int i, T S) {
	if (i < size) {
		if (a[i] <= 0) {
			S += a[i];
		}
		return Super(a, size, i + 1, S);
	}
	return S;
}

void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}
int Sum(int* a, const int size, int i, int S)
{
	if (a[i] <= 0)
		S += a[i];
	if (i < size - 1)
		return Sum(a, size, i + 1, S);
	else
		return S;
}

int main()
{

	srand((unsigned)time(NULL));
	int n;
	cout << "n = ";
	cin >> n;
	int* a = new int[n];
	int Low = -10;
	int High = 10;
	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	cout << "Sum = " << Sum(a, n, 0, 0) << endl;
	cout << "Super= " << Super(a, n, 0, 0) << endl;
	return 0;
}