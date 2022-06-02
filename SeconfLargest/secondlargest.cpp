#include <iostream>

using namespace std;

int main()
{
    int num[5];
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        cout << "Enter the " << i + 1 << " number:";
        cin >> num[i];
    }
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        for (int j = 0; j < sizeof(num) / sizeof(int) - 1; j++)
        {
            if (num[i] > num[j])
            {
                swap(num[j], num[i]);
            }
        }
    }
    cout << "The second largest number is : " << num[1];

    return 0;
}