// Write a function to add 2 numbers
#include<iostream>
using namespace  std;
int getSum (int a, int b){
    int total = a+b;
    return total;

}
int main()
{
    int a;
    cout <<"Enter the value of a: ";
    cin >>a;

    int b;
    cout <<"Enter the value of b: ";
    cin >> b;

   int sum = getSum(a,b);
   cout <<"Sum is "<< sum << endl;
    
}