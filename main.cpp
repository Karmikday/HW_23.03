#include <iostream>
using namespace std;
int  summa(int x, int n)
{
    if (n == x - 1)
    {
        return 0;
    }
    return n + summa(x, n - 1);
}
int main()
{
    int x, y;
    cout << "enter a range. 1 num->";
    cin >> x;
    cout << "enter a range. 2 num->";
    cin >> y;
    cout << summa(x, y);
}