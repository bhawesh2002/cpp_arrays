#include <iostream>

using namespace std;

int main()
{
    int num[5];
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        cout << "Enter the " << i + 1 << " number; ";
        cin >> num[i];
    }
    return 0;
}