#include<iostream>
using namespace std;
const int SIZE=10;
template<class QueueType> class queue {
      QueueType stck[SIZE];
      int front,rear;
    public:
	  queue()
	  {
	  	front=rear=-1;
		}  
	  void enqueue(QueueType ob);
	  QueueType dqueue();
};
template<class QueueType> void queue<QueueType>::enqueue(QueueType ob)
{
	if(rear<SIZE-1)
		stck[++rear]=ob;
	else
		printf("Overflow.:\n");
}
template<class QueueType> QueueType queue <QueueType> ::dqueue()
{
	if(front<rear)
		return stck[++front];
	else
	{
		front=rear=-1;
		printf("Underflow.\n");
	}
}
int main()
{
	queue<char> s1,s2;
	int i,n; char ch,ch2; double d1,d2;
	cout<<"Enter no. of terms:"; cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter character:"; cin>>ch;
		cout<<"Enter character2:"; cin>>ch2;
		s1.enqueue(ch); s2.enqueue(ch2);
	}
	for(i=0;i<n;i++){ cout<<"Dequeue s1: "<<s1.dqueue()<<endl;
	cout<<"Dequeue s2: "<<s2.dqueue()<<endl;
}
	queue<double> ds1,ds2;
	for(i=0;i<n;i++)
	{
		cout<<"Enter double:"; cin>>d1;
		cout<<"Enter double2:"; cin>>d2;
		ds1.enqueue(d1); ds2.enqueue(d2);
	}
	for(i=0;i<n;i++) 
	{
		cout<<"Dequeue double 1: "<<ds1.dqueue()<<endl;
	 cout<<"Dequeue double 2: "<<ds2.dqueue()<<endl;
	}
}

