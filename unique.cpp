#include<iostream>
using namespace std;
 void print_repeat(int array[],int size[])
 {
 int v;
  int *count = (int *)calloc(sizeof(int), (size - 2));
 cout<<"Repeating elements are:";
for(v= 0; v<size; v++)
  {  
    if(count[arr[v]] == 1)
    cout<<arr[v];
    else
     count[arr[v]]++;
  }    
  }         
  int main()
{
  int array[1000];
  int array_size = sizeof(array)/sizeof(array[0]);
  print_repeat(array, array_size);
  getchar();
  return 0;
}
