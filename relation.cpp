#include<iostream>
using namespace std;
int main()
{
/*relation operator
->    == give true value if both have equal value
->    != give true value if both operand are not equal
->    >  give true if  left value greater then right value)
->    <  give true if left value less then  right value
->    >=
->    <=
 */

int n;
cin>>n;
if(n>10)
    {cout<<"More then 10"<<endl;
}
else if(n<10){cout<<"less then 10"<<endl;
}
else{cout<<"Equal to 10"<<endl;
}
return 0;
}
