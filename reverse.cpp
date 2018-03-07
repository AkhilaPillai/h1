#include<iostream>
#include<string.h>
using namespace std;
void main()
{
int b,e,i,j=0,l,t;
String s;
cout<<"Enter string:";
gets(s);
l=s.length();
for(i=0;i<l;i++)
{
for(b=j,e=j-1;b<(i+j)/2;b++;e--)
{
t=s[b];
s[b]=s[e];
s[e]=t;
}
j=i+1;
}
}
cout<<s<<"";
return 0;
}
