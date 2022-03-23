#include <iostream>
using namespace std;
int stars(int n) 
{ 
	if (n == 0)
	{
		return 1;
	}
	stars(n - 1); 
	cout << " * "; 
}
int main()
{
	int n;
	cout << "How much stars->";
	cin >> n;
	stars(n);

}