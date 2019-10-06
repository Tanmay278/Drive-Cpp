#include<iostream>
using namespace std;
class Frac{
	int num , den;
	public: 
		void add(Frac);
		void substract(Frac);
		void display();
		void input();
		//Fraction();
};

main(){
	Frac o1,o2;
	cout << "Enter the first numerator and denominator"<<endl;
	o1.input();
	cout << "Enter the seocnd numerator and denominator "<<endl;
	o2.input();
	o1.display();
	//cout <<endl;
	o2.display();
	cout << "\nAdding :"<<endl;
	o1.add(o2);
	cout << "\nSubstract :"<<endl;
	o1.substract(o2);
}

void Frac :: add(Frac o){
	Frac b;
	b.num = num*o.den +den*o.num;
	b.den = den * o.den;
	b.display();
}

void Frac :: substract(Frac o){
	Frac b;
	b.num = num*o.den -den*o.num;
	b.den = den * o.den;
	b.display();
}

void Frac :: display(){
	cout << "\nNumerator : " << this -> num <<endl;
	cout << "Denomerator : " <<this -> den <<endl;
	cout << "Fraction :" << this -> num <<"/"<< this->den;
	cout<<"\n";
}

void Frac :: input(){
	cout << "Enter the numerator : ";
	cin >> this -> num;
	cout << "Enter the denominator : ";
	cin >> this -> den;
}
