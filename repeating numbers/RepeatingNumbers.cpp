#include <iostream>

using namespace std;

int main()
{
    int num[5] = {5, 5, 5, 64, 64};
    int counter = 0;
    int a = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < a; i++)
    {
        for (int j = 1; i < a; i++)
        {
            if (num[i] == num[j])
            {
                counter++;
            }
        }
        counter = 0;

        if (counter >= 1)
        {
            cout << num[i] << "repeats " << counter << " times" << endl;
        }
    }

    return 0;
}