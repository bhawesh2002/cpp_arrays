#include <iostream>

using namespace std;

int main()
{
    int num[] = {56,84,65,23,84,31,64};
    int largest = -1;
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

        if (num[i] == largest)
        {
            cout << num[i] << "=>" << -1 << endl;
        }
        else
        {
            cout << num[i] << "=>" << largest << endl;
        }
    }

    return 0;
}