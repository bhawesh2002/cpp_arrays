#include <iostream>

using namespace std;

int main()
{
    int num[5] = {3, 4, 5, 6, 7};
    int a = sizeof(num) / sizeof(num[0]);
    int counter = 0;
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = i + 1; j <= i + 1; j++)
        {
            if (num[i] < num[j])
            {
                cout << num[i] << "=>" << num[j] << endl;
            }
        }
    }

    return 0;
}