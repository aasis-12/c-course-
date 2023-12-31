#include<iostream>
using namespace std;
int main()
{
    int num1=5;
    int num2=2;
   // using arithmetic operators 
    cout<<num1+num2<<endl; //7
    cout<<num1-num2<<endl;   //3
    cout<<num1/num2<<endl;  //2.5
    cout<<num1*num2<<endl;  // 10
    cout<<num1%num2<<endl; //1

   // using relational operators
   
    cout<<(num1==num2)<<endl;   // false 0
    cout<<(num1<=num2)<<endl;  // false 0
    cout<<(num1>=num2)<<endl;   // true 1
    cout<<(num1!=num2)<<endl;   // true 1

    // using loogical operators 
    bool exp1=true;
    bool exp2=false;
    cout<<(exp1&&exp2)<<endl;  //false
    cout<<(exp1||exp2)<<endl;  //true
    cout<<(!exp1)<<endl;  //false

return 0;
}
