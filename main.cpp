#include <iostream>
#include <time.h>
using namespace std;
int Array(int arr[100], int n = 0, int y = 9, int min = 0)
{
	if (n == 0)
	{
		min = arr[0];
	}
	int x = 0;
	for (int i = n; i < n+10; i++)
	{
		x += arr[i];
		cout << "n: " << n << "; x: " << x << endl;
	}
	cout << endl << endl;
	if (y==99)
	{
		return x;
	}
	else
	{
		int x1 = Array(arr, n + 1, y+1);
		if (x <= x1)
		{
			return x;
		}
		else return x1;

	}
}
int main()
{
	srand(time(NULL));
	int arr[100];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = rand() % 100;
	}
	cout << endl << endl;
	cout << "Minimum position: " << Array(arr,0) << endl << endl;
}