#include <iostream>
using namespace std;
int degree(int n, int x)
{
    if (x == 1)
    {
        return n;
    }
    if (!x)
    {
        return 1;
    }
    else if (n < 0)
    {
        return 1;
    }
    return n * degree(n, --x);
}
int main()
{
    int n;
    int x;
    cout << "Your num->";
    cin >> n;
    cout << "Degree->";
    cin >> x;
    cout << "answer->" << degree(n, x);

}