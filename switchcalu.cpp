#include<iostream>
using namespace std;
int main()
{
char operation;
cout<<"enter operator('+','-')"<<endl;
cin>>operation;
float n1,n2;
cout<<"Enter number 1:"<<endl;
cin>>n1;
cout<<"Enter number 2:"<<endl;
cin>>n2;
switch(operation)
{case '+':
cout<<"sum of two number:"<<n1+n1;
break;
case '-':
cout<<"subtraction:"<<n1-n2<<endl;
break;
case '*':
cout<<"Multiply"<<n1*n2<<endl;
break;
case '/':
cout<<"Division:"<<n1/n2<<endl;
break;
default:
    cout<<"operator not match"<<endl;
    break;
}

return 0;}
