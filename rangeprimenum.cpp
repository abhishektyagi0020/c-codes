#include<bits/stdc++.h>
using namespace std;
int main()
{
int n1,n2,fnd=0,ctr=0;
cin>>n1>>n2;
cout<<"\n number \n"<<  n1 <<" to "<< n2 <<" "<<endl;
for(int i=n1; i<=n2; i++)
{
for(int j=2;j<=sqrt(i);j++){
if(i%j==0)
ctr++;
}
if(ctr==0&&i!=1)
{
fnd++;
cout<<i<<" ";
}
ctr=0;
}
cout<<"\n total "<< n1 <<" to "<<n2<<" :"<< fnd<<endl;
return -1;
}


