// Write a function of Students & Grade Probles
#include<iostream>
using namespace std;
int coutNumber(int marks){
    if(marks>=90){
       return 'A';
    }
    else if(marks>=80){
        return 'B';
    }
    else if(marks>=70){
        return 'C';
    }
    else if(marks>=60){
        return 'D';
    }
    else{
       return 'F';
    }
}
int main()
{
    int marks;
    cout <<"Enter the of marks: "<<endl;
    cin >> marks;

    char finalResult = coutNumber(marks);
    cout << finalResult;

}