#include <iostream>

using namespace std;
int swap (int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}
int main()
{
   int a,b,temp;
   cin>>a>>b;
   swap(&a,&b);
   cout<<a<<" "<<b;
    return 0;
}
