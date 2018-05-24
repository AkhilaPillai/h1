#include <iostream>

using namespace std;

int main()
{
    int N,K,n[10],i;
cin>>N>>K;
for(i=0;i<N;i++)
    cin>>n[i];
for(i=0;i<N;i++)
{
    if(n[i]==K)
    {
    if(n[i+1]%2!=0)
    {
        cout<<n[i+1];
    }
    }
}
