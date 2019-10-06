#include<iostream>
using namespace std;

class cricketer{
	string name,type;
	int total_runs;
	int total_wickets;
	public:
	cricketer(string,string,int,int);
	cricketer(cricketer &);
	bool compare(cricketer ob1) { return this->name == ob1.name and ob1.type == this->type; }
};
cricketer::cricketer(string n,string t,int r,int w){
	name=n;
	type=t;
	total_runs=r;
	total_wickets=w;
}
cricketer::cricketer(cricketer &obj){
	name=obj.name;
	type=obj.type;
	total_runs=obj.total_runs;
	total_wickets=obj.total_wickets;
}

main(){
	string name1,type1,name2,type2;
	int runs1,wickets1,runs2,wickets2;
	cout<<"Enter cricketer name, type";
	cin>>name1>>type1;
	if(type1=="batsman"){
	cout<<"Total runs:"; cin>>runs1;}
	else if(type1=="bowler") {
	cout<<"Total wickets:"; cin>>wickets1;}
	else
	{
		cout<<"Total runs and Total wickets:"; cin>>runs1>>wickets1;
		}
	cout<<"Enter next cricketer name, type";
	cin>>name2>>type2;
	if(type2=="batsman"){
	cout<<"Total runs:"; cin>>runs2;}
	else if(type2=="bowler") {
	cout<<"Total wickets:"; cin>>wickets2;}
	else{
	cout<<"Total runs and Total wickets:"; cin>>runs2>>wickets2;}
	cricketer ck1(name1,type1,runs1,wickets1);
	cricketer ck2(name2,type2,runs2,wickets2);
	cricketer ck3=ck1;
	cricketer ck4=ck2;
	//cout << (ck1 == ck3) << endl;
	cout<<ck1.compare(ck3)<<endl;
	cout<<ck3.compare(ck4)<<endl;
	cout<<ck2.compare(ck4)<<endl;
	cout<<ck1.compare(ck2)<<endl;
	
}
