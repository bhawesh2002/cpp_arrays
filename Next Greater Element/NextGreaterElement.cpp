#include <iostream>

using namespace std;

int main()
{
    int num[5] = {3, 4, 5, 6, 7};
    int a = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < a; i++)
    {
        for (int j = i; j < i + 1; j++)
        {
            if (num[i] < num[j + 1])
            {
                cout << num[i] << "=>" << num[j] << endl;
            }
            else
            {
                cout << num[i] << " has no greater element adjcent to it" << endl;
            }
        }
    }

    return 0;
}