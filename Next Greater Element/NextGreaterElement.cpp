#include <iostream>

using namespace std;

int main()
{
    int num[5] = {7, 6, 5, 4, 3};
    int a = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < a; i++)
    {
        for (int j = i; j < i + 1; j++)
        {
            if (num[i] < num[j])
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