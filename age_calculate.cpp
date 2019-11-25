#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
	string cur,dob,t1="",t2="";
	int days_in_a_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
	cout<<"Enter data of birth(dd/mm/yyyy):";
	cin>>dob;
	cout<<"Enter current date(dd/mm/yyyy):";
	cin>>cur;
	int c_dd=0,c_mm=0,c_yy=0,b_dd=0,b_mm=0,b_yy=0;
	for(int i=0;i<2;i++){
		t1+=cur[i];
		t2+=dob[i];
	}
	c_dd=atoi(t1.c_str());
	b_dd=atoi(t2.c_str());
	t1="",t2="";
	for(int i=3;i<5;i++){
		t1+=cur[i];
		t2+=dob[i];
	}
	c_mm=atoi(t1.c_str());
	b_mm=atoi(t2.c_str());
	t1="",t2="";
	for(int i=6;i<10;i++){
		t1+=cur[i];
		t2+=dob[i];
	}
	c_yy=atoi(t1.c_str());
	b_yy=atoi(t2.c_str());
	if(c_dd<b_dd){
		c_dd+=days_in_a_month[c_mm]-1;
		c_mm-=1;
	}
	if(c_mm<b_mm){
		c_mm+=12;
		c_yy-=1;
	}
	int a_dd=c_dd-b_dd;
	int a_mm=c_mm-b_mm;
	int a_yy=c_yy-b_yy;
	cout<<"Age is:"<<a_yy<<" years "<<a_mm<<" months "<<a_dd<<" days.";
	return 0;
}
