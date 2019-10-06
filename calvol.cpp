#include<iostream>
using namespace std;
double calvol(int s){	return (s*s*s);      } //cone
double calvol(double r,int h) { return ((22*r*r*h)/7); } //cylinder
double calvol(double r){ return ((4*22*r*r*r)/7);  } //sphere
double calvol(double r,double h){ return ((22*r*r*h)/21);  } //cone
int main()
{
	cout<<"Volume of cone:"<<calvol(14.0,7.0)<<endl;
	cout<<"Volume of sphere:"<<calvol(3.5)<<endl;
	cout<<"Volume of cylinder:"<<calvol(5.0,7)<<endl;	
	cout<<"Volume of cube:"<<calvol(5)<<endl;
	return 0;
}
