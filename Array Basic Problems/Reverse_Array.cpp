//Reverse an Array

#include<iostream>
using namespace std;
int main()
{
    int arr[]={20,30,45,67,12,43,67,21};
    int size = 8;

    int start = 0;
    int end = size - 1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end --;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}