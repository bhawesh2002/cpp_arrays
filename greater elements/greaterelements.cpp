#include <iostream>

using namespace std;

int main()
{
    int num[5] = {95, 645, 884, 331, 994};
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