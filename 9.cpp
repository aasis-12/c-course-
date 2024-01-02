#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the num : ";
    cin>>num;
    if  ((num%3==0) || (num%5==0))
    {
        cout<<"the answer is "<<num<<endl;

    }
    else {
        cout<<"it is not ";
    }
    return 0;
}