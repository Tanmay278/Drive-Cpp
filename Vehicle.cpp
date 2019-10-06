#include<iostream>
using namespace std;
class Vehicle{
	string type,brand;
	int chasis_no;
	long price;
	public:
	Vehicle(string,string,int,long);
	Vehicle(Vehicle &);
	void show();
};
Vehicle::Vehicle(string t,string b,int c,long p){
	type=t;
	brand=b;
	chasis_no=c;
	price=p;
}
Vehicle::Vehicle(Vehicle &obj){
	type=obj.type;
	brand=obj.brand;
	chasis_no=obj.chasis_no;
	price=obj.price;
}
void Vehicle::show(){
	cout<<"Vehicle type: "<<type<<endl
	<<"Vehicle brand: "<<brand<<endl
	<<"Vehicle chasis no: "<<chasis_no<<endl
	<<"Vehicle price: "<<price<<endl<<endl;
}
int main(){
	Vehicle vh1("Sports","Mercedes BENZ",1569,13000000);
	Vehicle vh2=vh1;
	vh1.show();
	vh2.show();
	Vehicle vh3("Sumo","Tata",9854,10000);
	vh3.show();
	return 0;
}
