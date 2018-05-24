#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
    string str;
    int i,c=0;
    getline(cin, str);
    for(i=0;i<str.length();i++)
    {
    if(str.at(i)!=' ')
    {
        c++;
    }
}
cout<<c;
   return 0;
}
