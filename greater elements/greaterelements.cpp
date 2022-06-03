#include <iostream>

using namespace std;

int main()
{
    int num[7] = {7, 6, 5, 4, 3, 2, 1};
    int index = 0;
    int a = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < a; i++)
    {
        for (int j = i; j < a; j++)
        {
            if (num[j] > num[i])
            {
                cout << num[i] << "=>" << num[j] << endl;
                break;
            }
        }
    }

    return 0;
}