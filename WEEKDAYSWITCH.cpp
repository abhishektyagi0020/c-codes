#include<iostream>
using namespace std;
int main()
{
int week;
cout<<"Enter number of 1 to 7 for daylight:";
cin>>week;
switch(week)
{case 1:
cout<<"M";
break;
case 2:
cout<<"T";
break;
case 3:
cout<<"W";
break;
case 4:
cout<<"T";
break;
case 5:
cout<<"F";
break;
case 6:
cout<<"SAT";
break;
case 7:
cout<<"SUN";
break;
default:
    cout<<"ANY day not match"<<endl;
    break;
}

return 0;}
