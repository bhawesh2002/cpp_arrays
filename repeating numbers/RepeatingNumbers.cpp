#include <iostream>

using namespace std;

int main()
{
    int num[5] = {5, 5, 5, 64, 64};
    int counter = 0;
    int a = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; i < a; i++)
        {
            if (num[i] == num[j])
            {
                counter++;
            }
        }
    }

    return 0;
}