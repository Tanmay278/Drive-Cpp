//TanmaySaha
#include<iostream>
using namespace std;
class Integer_num
{
	public:
	int inum;
	friend void calsum(int,float);
};
class Float_num
{
	public:
	float fnum;
	friend void calsum(int,float);
};
void calsum(int a,float b)
{
	float sum;
	sum=a+b;
	cout<<"Sum of the two nos. is:"<<sum;
}
int main()
{
	Integer_num ob1;
	Float_num ob2;
	cout<<"Enter an integer:"; cin>>ob1.inum;
	cout<<"Enter a decimal:"; cin>>ob2.fnum;
	calsum(ob1.inum,ob2.fnum);
}

