#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size = 8;

    int key=2;
    bool flag = 0;
    // flag bolean variable
    //Linear Search

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            //found
            flag = 1;
            break;
        }
    }
   
    if(flag){
        cout <<"Found"<<endl;
    } 
    else
    {
        cout <<"Not Found"<<endl;
    }
}