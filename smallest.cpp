#include <iostream>

using namespace std;

int main()
{
    int N,K,n[10],i;
    cin>>N>>K;
    for(i=1;i<N;i++)
    {
        cin>>n[i];
    }
    for(i=1;i<N;i++)
    {
        if(n[K]==n[i])
        cout<<n[i];
    }
    return 0;
}
