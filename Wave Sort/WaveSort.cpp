/*Write a C++ program to sort a given unsorted array of integers, in wave form.
Note: An array is in wave form when array[0] >= array[1] <= array[2] >= array[3] <= array[4] >= . . . .*/

#include <iostream>

using namespace std;

int main()
{
    int num[] = {65,64,6,94,6,94,3,694};
    int i = 0;
    int a = sizeof(num) / sizeof(int);
    for (int i = 0; i < a; i++)
    {
        for (int j = i; j < a - 1; j++)
        {
            if (num[i] <= num[j])
            {
                swap(num[i], num[j]);
                break;
            }
            else
            {
                break;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << num[i] << endl;
    }

    return 0;
}