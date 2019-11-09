//Tanmay
#include<iostream>
using namespace std;
template <class X>
void sort(X a[],X n)
{
for(int i=0;i<n-1;i++)
for(int j=i+1;j<n;j++)
if(a[j]<a[i])
swap(a[j],a[i]);
}
int main()
{
int a[10],n;
cout<<"Enter number of elements:";
cin>>n;
cout<<"Enter elements:\n";
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,n);
cout<<"Sorted Array:\n";
for(int i=0;i<n;i++)
cout<<a[i]<<endl;
}
