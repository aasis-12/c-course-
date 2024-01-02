#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age";
    cin>>age;
    if(age<12){
        cout<<"the given age indicates a child"<<endl;
    }
         else if (age>18) {
                 cout<<"the given age indicates a adult"<<endl;
    }
          else 
    {
              cout<<"the age is of teenager";
    } 
    return 0;
}