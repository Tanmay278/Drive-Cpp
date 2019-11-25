#include<iostream>
using namespace std;
int main()
{
	string str1,sub;
	int j,l,i;
	cout<<"Enter the string:"; cin>>str1;
	cout<<"Enter the substring to be searched:"; cin>>sub;
	for(l=0;sub[l]!='\0';l++);
	 for(i=0,j=0;str1[i]!='\0'&& sub[j]!='\0';i++)
	 {
	 	if(str1[i]==sub[j]) j++;
	 	else j=0;
	 }
	 if(j==l) cout<<"Substring "<<sub<<" found at position "<<i-j+1;
	 else cout<<"Substring not found!!!";
	 return 0;
}
