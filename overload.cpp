//Tanmay
#include<iostream>
using namespace std;
template<class X> int calculateArea(X a)
{
return(a*a);
}
template<class X,class Y> double calculateArea(X a,Y b)
{
return(a*b*b);
}
template<class X,class Y,class Z> int calculateArea(X a , Y b , Z c) 
{
return(2*(a*b+b*c+c*a));
}
int main()
{
const double pi=3.14;
int sq=calculateArea(5);
double ci=calculateArea(pi,7);
int cub=calculateArea(10,20,35);
cout<<"Area of square:"<<sq<<endl<<"Area of circle:"<<ci<<endl<<"Area of cuboid:"<<cub<<endl;
return 0;
}
