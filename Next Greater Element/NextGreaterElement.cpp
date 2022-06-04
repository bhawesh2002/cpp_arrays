#include <iostream>

using namespace std;

int main()
{
    int num[5] = {3,4,5,6,7};
    int a = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < a; i++)
    {
        for (int j = i; j < i + 2; j++)
        {
            if (num[i] < num[j])
            {
                cout << num[i] << "=>" << num[j] << endl;
            }
        }
    }

    return 0;
}