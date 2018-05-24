#include <iostream>

using namespace std;

int main()
{
   int n[50],i,m;
   for(i=0;i<10;i++)
   {
       cin>>n[i];
   }
m=n[0];
for(i=1;i<10;i++)
{
    if(m<n[i])
    {
        m=n[i];
    }
}
cout<<m;
    return 0;
}
