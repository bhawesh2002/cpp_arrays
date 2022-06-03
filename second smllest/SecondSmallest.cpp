#include <iostream>

using namespace std;

int main()
{
    int num[5] = {342, 24, 556, 23, 857};
    int a = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - 1; j++)
        {
            if (num[i] < num[j])
            {
                swap(num[i], num[j]);
            }
        }
    }
    cout << "Two smaller numbers are:\n";
    for (int i = 0; i < 2; i++)
    {
        cout << num[i] << endl;
    }

    return 0;
}