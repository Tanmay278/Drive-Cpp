#include<iostream>
using namespace std;

class staff
{
	string name;
	string type;
	double salary;
	public:
		staff(string,string,double);
		staff(staff &);
		void show();
		~staff();
		
};
staff::staff(string n,string c,double d){
	name=n;
	type=c;
	salary=d;
}
staff::staff(staff &obj){
	name=obj.name;
	type=obj.type;
	salary=obj.salary;
}
staff::~staff(void){
	cout<<"object deleted\n";
	}

void staff::show(){
	cout<<"Name:"<<name<<endl<<"Type:"<<type<<endl<<"Salary:"<<salary<<endl;
}
int main(){
	string name1,name2;
	string type1,type2;
	double salary1,salary2;
	cout<<"Enter employee name, type and salary:\n";
	cin>>name1>>type1>>salary1;
	cout<<"Enter employee name, type and salary:\n";
	cin>>name2>>type2>>salary2;
	staff ob1(name1,type1,salary1);
	staff ob2(name2,type2,salary2);
	staff ob3=ob1;
	staff ob4=ob2;
	ob1.show();
	ob2.show();
	ob3.show();
	ob4.show();
	return 0;
}
