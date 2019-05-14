#include<iostream>
using namespace std;
void display(int arr[],int length)
{
for(int i=0;i<length;i++)
  cout<<arr[i]<<" ";
}
void reverse(int arr[],int length)
{
int start=0;
int end=length-1;
while(start<end)
{
  swap(arr[start],arr[end]);
  start++;
  end--;
}
display(arr,length);
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  display(arr,n);
  reverse(arr,n);
}
