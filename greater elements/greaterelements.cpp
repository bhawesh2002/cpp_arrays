#include <iostream>

using namespace std;

int main()
{
    int num[7] = {17, 118, 1, 24, 31, 27, 321};
    int largest = 0;
    int a = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (num[j] > num[i])
            {
                largest = num[j];
                break;
            }
        }
        cout << num[i] << "=>" << largest << endl;
    }

    return 0;
}