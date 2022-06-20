/* Write a C++ program to update every array element by multiplication of 
next and previous values of a given array of integers*/

#include <iostream>

using namespace std;

int main(){
    int num[] = {2,34,56,76,76,90}
    int prev = 1,next = 1;
    int size = sizeof(num)/sizeof(int);
    for(int i = 0; i < size;i++)
    {
        if(i == 0)
        {
            num[i] = 1 * num[i + 1];
        }else if(i == (size - 1))
        {
            num[i] = num[i-1] * 1; 
        }else
        {
            num[i] = num[i-1] * num[i+ 1];
        }
    }
    for(int i = 0; i < size;i++){
        cout << num[i] << endl;
    }
    return 0;
}