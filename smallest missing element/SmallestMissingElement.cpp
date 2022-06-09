#include <iostream>

using namespace std;

int main()
{
    int sorted[] = {0, 1, 2, 3, 5, 6, 7, 8, 9};
    int a = sizeof(sorted) / sizeof(int);
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; i < a - 1; i++)
        {
            if (sorted[j] == (sorted[i] + 1))
            {
                break;
            }
            else
            {
                cout << "Missing number is " << sorted[i] + 1 << endl;
                break;
            }
        }
    }

    return 0;
}