#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
double sum=0, a;
int n,i;
cin>>n;
for(i=1; i<=n; ++i)
{
    a=1/pow(i,i);
cout<<"1/"<<i<<"^"<<i<<"="<<a<<endl;
sum+=a;
}
cout<<" "<<sum<<endl;
return 0;
}
