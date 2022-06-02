#include <iostream>

using namespace std;

int main()
{
    int num[7] = {2, 7, 3, 5, 4, 6, 8};
    int counter = 0;
    int j = 0;
    for (int i = 0; i < sizeof(num) / sizeof(num[0]) - 1; i++)
    {
        while (1)
        {
            if (num[j] > num[i])
            {
                cout << num[i] << "=>" << num[j] << endl;
                counter++;
                j = counter;

                break;
            }
            else
            {
                j++;
            }
        }
    }
    return 0;
}