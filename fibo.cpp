#include <iostream>

using namespace std;

int main()
{
    int n,f1=0,f2=1,f3,i;
    cin>>n;
    cout<<f2<<" ";
    for(i=1;i<n;i++)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        cout<<f3<<" ";
    }

    return 0;
}
