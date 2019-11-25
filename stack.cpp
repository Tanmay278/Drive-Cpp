#include<iostream>
using namespace std;
int a[100],top=-1;
void push(int val,int n)
{
	if(top>=n-1) cout<<"Stack Overflow!!\n";
	else
	{
		top++;
		a[top]=val;
	}	
}
void pop()
{
	if(top<=-1) cout<<"Stack underflow!!!\n";
	else
	{
		cout<<"Element popped:"<<a[top]<<endl; top--;
	}
}
void display()
{
	if(top>=0)
	{
		cout<<"Elements in the stack:\n";
		for(int i=top;i>=0;i--)
		cout<<a[i]<<endl;
			}
	else
		cout<<"Stack poriskar\n";		
}
int main()
{
	int ch,v,n;
	cout<<"Enter no. of elements in the array:";
	cin>>n;
	while(1)
	{
		cout<<"Enter:\n1.Inserting an array\n2.Deleting an array\n3.Displaying remaining elements in the array\n4.Exit\n"; cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<"Enter the value to be pushed:"; cin>>v;
			push(v,n); break;
		case 2:
			pop(); break;
		case 3:
			display(); break;
		case 4: cout<<"Bero ekhan theke\n";exit(0);
		default: cout<<"Bara Thik kore enter kor\n";
	}
	}
	return 0;
}
