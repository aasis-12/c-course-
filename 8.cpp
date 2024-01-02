#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the num : ";
    cin>>num;
    if  ((num%2==0) && (num%3==0))
    {
        cout<<num<<endl;

    }
    else {
        cout<<"it is not ";
    }
    return 0;
}