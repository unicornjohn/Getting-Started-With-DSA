 /*
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-row-1;col++)
        {
            cout << " ";
        }
        for(int gap=0;gap<row;gap++)
        {
            cout << "* ";
        }
        cout << endl;
    }
        for(int row=0;row<n;row++)
    {
        for(int col=0;col<row;col++)
        {
            cout <<" ";
        }
        for(int gap=0;gap<n-row-1;gap++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}