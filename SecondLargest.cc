#include<iostream>
using namespace std;
int main()
{
int a,b,c,secLargest;
cin>>a>>b>>c;
if(a>b && a>c)
{
if(b>c)
    secLargest=b;
else
    secLargest=c;
}
if(b>c && b>a)
{
 if(c>a)
 secLargest=c;
else
    secLargest=a;

}
if(c>a&&c>b)
{
    if(a>b)
 secLargest=a;
else
    secLargest=b;


}
cout<<secLargest<<endl;
}
