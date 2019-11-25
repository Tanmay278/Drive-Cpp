#define p 3.14 
#include<iostream>
using namespace std;
class volume
{
double r,h,s;
public:
void calvol(double);
void calvol(int,int);
void calvol(double,double);
};
int main()
{
volume c;
double rad,height,side;
int ra,hght;
int ch;
cout<<"Enter:\n1.Volume of Cone\n2.Volume of Cylinder\n3.Volume of Cube\n";
cin>>ch;
switch(ch)
{
case 3: 
cout<<"Enter the side of the cube:"; cin>>side;
c.calvol(side); break;
case 2:
cout<<"Enter radius and height of cylinder:"; cin>>ra>>hght;
c.calvol(ra,hght);
break;
case 1:
cout<<"Enter radius and height of cone:"; cin>>rad>>height;
c.calvol(rad,height); break;
default: cout<<"Wrong input";
}
return 0;
}
void volume::calvol(double s)
{
double vol;
vol=s*s*s;
cout<<"Volume of cube:"<<vol<<"\n";
}
void volume::calvol(int r,int h)
{
double vol;
vol=2*p*r*r*h;
cout<<"Volume of cylinder:"<<vol<<"\n";
}
void volume::calvol(double r,double h)
{
double vol;
vol=(p*r*r*h)/3;
cout<<"Volume of cone:"<<vol<<"\n";
}
