// Pair Sum
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{10,20,40,60,70};
    int sum = 80;

    //print all pairs
    //outer loop will travers for each element 

    for(int i=0;i<arr.size();i++)
    {
        
        int elemenet = arr[i];
    // for all element will traverse on age wala elements
        for(int j=i+1;j<arr.size();j++)
        {
            if(elemenet + arr[j] == sum){
                cout << elemenet << ","<<arr[j]<<endl;
            }
        }
    }

}