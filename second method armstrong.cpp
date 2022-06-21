#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,r,sum,temp;
    cin>>n;
temp=n;
while(n>0)
{
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
}
if(temp==sum)
{
cout<<"armstrong"<<endl;
}
else{cout<<"not armstrong"<<endl;
}
return 0;
}

