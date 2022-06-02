#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a < b)
    {
        swap(a, b);
    }
    cout << "largest of two is " << a;
    return 0;
}