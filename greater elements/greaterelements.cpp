#include <iostream>

using namespace std;

int main()
{
    int num[7] = {17, 18, 19, 20, 21, 22, 23};
    int index = 0;
    int a = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            if (num[j] > num[i])
            {
                cout << num[i] << "=>" << num[j] << endl;
                break;
            }
            else
            {
                cout << num[i] << "=>" << -1 << endl;
                break;
            }
        }
    }

    return 0;
}