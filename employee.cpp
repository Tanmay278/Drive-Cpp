#include<iostream>
using namespace std;
class employee
{
	string name,desig,dept; int bp;
	double sal=0.0;
	public:
		void get(); void computsal();
		void show();
	
};
int main()
{
	employee ob;
	string n,d,de; int bal;
	int ch;
	while(1)
	{
		cout<<"Enter:\n1.To assign name of the employee\n2.To calculate salary\n3.Display all details\n4.Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1: ob.get(); break;
			case 2: ob.computsal(); break;
			case 3: ob.show(); break;
			case 4: exit(0);
			default: cout<<"Bloody fuck off\n";
		}
	}
	return 0;
}

void employee::get()
{
	cout<<"Employee name:"; cin>>name;
	cout<<"Enter designation:"; cin>>desig;
	cout<<"Enter department:"; cin>>dept;
	cout<<"Enter basic salary:"; cin>>bp;
}
void employee::computsal()
{
	double da,hra,ma,it;
	da=0.2*bp; hra=0.15*bp; ma=0.1*bp; it=0.12*bp;
	sal=bp+0.5*da+0.15*hra+0.03*ma-0.1*it;
}
void employee::show()
{
	cout<<"Employee name:"<<name<<"\nDesignation:"<<desig<<"\nDepartment:"<<dept<<"\nBasic Salary:"<<bp<<"\nSalary of the employee:"<<sal<<"\n";
}
