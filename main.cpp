#include <iostream>
#include <conio.h>
using namespace std;
void Disk(int x, int y)
{
    cout << x << "-->" << y << endl;
}
void Tower(int h, int x, int z, int y)
{
    if (h == 1)
        Disk(x, z);
    else
    {
        Tower(h - 1, x, y, z);
        Disk(x, z);
        Tower(h - 1, y, z, x);
    }
}
int main()
{
    int n;
    cout << "The Hanoi towers" << endl;
    cout << "enter the number of disk->: ";
    cin >> n;
    Tower(n, 1, 3, 2);
    _getch();
    return 0;

}