#include<iostream>
using namespace std;
const int SIZE=10;
template<class StackType> class stack {
      StackType stck[SIZE];
      int tos;
    public:
	  stack()
	  {
	  	tos=0;
		}  
	  void push(StackType ob);
	  StackType pop();
};
template<class StackType> void stack<StackType>::push(StackType ob)
{
	if(tos==SIZE) {
		cout<<"Stack is full\n";
		return;
	}
	stck[tos]=ob;
	tos++;
}
template<class StackType> StackType stack <StackType> ::pop()
{
	if(tos==0)
	{
		cout<<"Stack is empty\n"; return 0;
	}
	tos--; return stck[tos];
}
int main()
{
	stack<char> s1,s2;
	int i,n; char ch,ch2; double d1,d2;
	cout<<"Enter no. of terms:"; cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter character:"; cin>>ch;
		cout<<"Enter character2:"; cin>>ch2;
		s1.push(ch); s2.push(ch2);
	}
	for(i=0;i<n;i++) cout<<"Pop s1: "<<s1.pop()<<endl;
	for(i=0;i<n;i++) cout<<"Pop s2: "<<s2.pop()<<endl;
	
	stack<double> ds1,ds2;
	for(i=0;i<n;i++)
	{
		cout<<"Enter double:"; cin>>d1;
		cout<<"Enter double2:"; cin>>d2;
		ds1.push(d1); ds2.push(d2);
	}
	for(i=0;i<n;i++) cout<<"Pop double 1: "<<ds1.pop()<<endl;
	for(i=0;i<n;i++) cout<<"Pop double 2: "<<ds2.pop()<<endl;
}

