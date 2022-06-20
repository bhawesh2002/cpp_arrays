/*12. Write a C++ program to rearrange the elements of a given array of integers in zig-zag fashion way.
Note: The format zig-zag array in form a < b > c < d > e < f.*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    num[] = {23,43,53,65,23,54}
    int size = sizeof(num)/sizeof(num[0]);
    for(int i = 0; i < size; i++)
    {
        if(i % 2 == 0)
        {
            if(num[i + 1] < num[i])
            {
                swap(num[i],num[i+ 1]);
            }
        }else if(i % 2 != 0)
        {
            if(num[i+ 1]>num[i])
            {
                swap(num[i],num[i+1]);
            }
        }
    }
    return 0;
}