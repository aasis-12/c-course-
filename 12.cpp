#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char a[20] ;
    char b[20] ;
    char c[20];
    char d[20] ;

    cout<<"enter the name of  a :";
    cin.getline(a,20);

     cout<<"enter the name of b :";
    cin.getline(b,20);

     cout<<"enter the name of c :";
    cin.getline(c,20);

     cout<<"enter the name of d :";
    cin.getline(d,20);
    cout<<"the names are given below :-"<<endl;

    cout<<"the name in a is "<<setw(20)<<a<<endl;
    cout<<"the name in b is "<<setw(20)<<b<<endl;
    cout<<"the name in c is "<<setw(20)<<c<<endl;
    cout<<"the name in d is "<<setw(20)<<d<<endl;

    return 0;


}