#include<iostream>
using namespace std;
int main()
{
	string str1,str2;
	int l1,l2,flag,i=0;
	cout<<"Enter two strings:"; cin>>str1>>str2;
	for(l1=0;str1[l1]!='\0';l1++);
	for(l2=0;str2[l2]!='\0';l2++);
	if(l1!=l2)
	cout<<"Two strings are unequal";
	else
	{
		for(i=0;i<l1;i++)
		if(str1[i]!=str2[i])
		{
			flag=1;	  break;
		}
		else
		flag=0;
		if(flag==0)
		cout<<"Two strings are equal";
		else
		cout<<"Two strings are unequal";
	}
	return 0;
}
