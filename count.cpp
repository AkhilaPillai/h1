#include <iostream>

using namespace std;

int main()
{
    int N,K,n[10],i,c=0;
cin>>N>>K;
for(i=0;i<N;i++)
    cin>>n[i];
for(i=0;i<N;i++)
{
    if(n[i]==K)
    {
    c++;
    }
}
cout<<c;
    return 0;
}
