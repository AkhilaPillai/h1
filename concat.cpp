#include <iostream>
#include<sstream>
#include<string>
using namespace std;

int main()
{
    int N,K,pow=10,a;
    cin>>N>>K;
    if(K >= pow)
    {
    pow *= 100;
    a = (N*pow) + K;
    cout<<a;
    }
    return 0;
}
