#include <iostream>

using namespace std;

int main()
{
    int num[7] = {7,6,5,4,3,2,1};
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
        if (num[i] == largest)
        {
            cout << num[i] << "=>" << -1 << endl;
        }
    }

    return 0;
}