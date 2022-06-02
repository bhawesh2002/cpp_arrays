#include <iostream>

using namespace std;

int main()
{
    int num[7] = {};
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        cout << "Enter the " << i + 1 << " number:";
        cin >> num[i];
    }
    int largest[3] = {};
    int index = 0;
    for (int i = 0; i < sizeof(num) / sizeof(int) - 1; i++)
    {
        for (int j = 1; j < sizeof(num) / sizeof(int); j++)
        {
            if (num[j] > num[j])
            {
            }
        }
    }
}