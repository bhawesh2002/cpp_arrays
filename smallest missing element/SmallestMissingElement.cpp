#include <iostream>

using namespace std;

int main()
{
    int sorted[] = {9, 8, 5, 3, 2, 1, 0};
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