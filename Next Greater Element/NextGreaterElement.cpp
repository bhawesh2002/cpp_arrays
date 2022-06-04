#include <iostream>

using namespace std;

int main()
{
    int num[5] = {5, 6545, 1, 54, 45};
    int a = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < a - 1; i++)
    {
        if (num[i] < num[i + 1])
        {
            cout << num[i] << "=>" << num[i + 1] << endl;
        }
        else
        {
            cout << num[i] << " has no greater element adjcent to it" << endl;
        }
    }

    return 0;
}