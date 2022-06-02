#include <iostream>

using namespace std;

int main()
{
    int num[7] = {7,6,5,4,3,2,1};
    int counter = 0;
    int j = 0;
    for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
    {
        while (1)
        {

            if (num[i] == num[sizeof(num) / sizeof(num[0]) - 1])
            {
                cout << num[i] << "=>" << -1 << endl;
                break;
            }
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
    /*for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
    {
        cout <<  i  << endl;
    }*/

    return 0;
}