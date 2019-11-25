#include<iostream>
using namespace std;
void accept(int a[],int n)
{
	cout<<"Enter elements:\n";
	for(int i=0;i<n;i++) cin>>a[i];
	}
void display(int a[],int n)
{
	cout<<"\nARRAY:\n";
   for(int i=0;i<n;i++)
        printf("\na[%d]=%d",i,a[i]); cout<<endl;
   }	
void insert(int a[],int n)
{
   int temp,k,p;
   for(k=1;k<n;k++)
   {
      temp=a[k];
      p=k-1;
      while(temp<a[p])
      {
        a[p+1]=a[p];
        p=p-1;
      }
      a[p+1]=temp;
    }
	
}
void bubble(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;++i)
	{
		for(j=0;j<n-1-i;++j)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;		}
	}
}
}
int main()
{
	int n,a[n],ch;
	cout<<"Enter no. terms:";
	cin>>n;
	while(1)
	{
		cout<<"ENTER:\n1.To accept:\n2.To display\n3.Insertion Sort\n4.Bubble Sort\n5.Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1: accept(a,n); break;
			case 2: display(a,n); break;
			case 3: insert(a,n); break;
			case 4: bubble(a,n); break;
			case 5: exit(0);
			default: cout<<"Enter correctly\n";
		}
	}
	
}
