#include <iostream>

using namespace std;

int main()
{
    int num[7] = {2, 7, 3, 5, 4, 6, 8};
    for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
    {
        for (int j = 0; j < sizeof(num) / sizeof(num[0]); j++)
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