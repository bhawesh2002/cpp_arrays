#include <iostream>

using namespace std;

int main()
{
    int num[5] = {};
    int largest;
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        cout << "Enter the " << i + 1 << " number: ";
        cin >> num[i];
    }
    for (int i = 0; i < sizeof(num) / sizeof(int) - 1; i++)
    {
        if (num[i] > num[i + 1])
        {
            largest = num[i];
        }
        else
        {
            largest = num[i + 1];
        }
    }
    cout << "Largest number is: " << largest;
    return 0;
}