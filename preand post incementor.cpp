#include<iostream>
using namespace std;
int main()
{int i,j,k;
cin>>i>>j;
i=i++ + ++i; /* i++ mean post incrementer andd / ++i pre incrementervalue */

j=j++;
k=i+j+i+++ j++ + ++i + ++j;

/*cout<<i<<endl;
cout<<j<<endl;*/
cout<<k<<endl;
return 0;

}
