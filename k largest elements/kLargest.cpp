#include <iostream>

using namespace std;

int main()
{
    int num[5];
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        cout << "Enter the " << i + 1 << " number: ";
        cin >> num[i];
    }
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        for (int j = 0; j < sizeof(num) / sizeof(int) - 1; j++)
        {
            if (num[j] < num[i])
            {
                swap(num[i], num[j]);
            }
        }
    }
    cout << "How many largest numbers to display? => ";
    int k;
    cin >> k;
    /*for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        cout << num[i] << endl;
    }*/

    return 0;
}