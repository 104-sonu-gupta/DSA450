
// Write a program to reverse an array or string

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    system("cls");
    int n;
    cout << "Enter size : " ;
    cin>>n;
    string arr;

    cout << "Enter string : ";
    cin>>arr;
    
    for (int i = 0 , k = n-1 ; i < k ; i++ , k--)
    {
        swap(arr[i],arr[k]);
    }
    cout << "Reverse : ";
    cout<<arr;
    
    return 0;
}