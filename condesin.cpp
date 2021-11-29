#include<iostream>
using namespace std;
class a
{
	public:
		a()
		{
			cout<<"constructor a is invoked"<<endl;
		}
		~a()
		{
			cout<<"destructor a is invoked"<<endl;
		}
};
class b:public a
{
	public:
		b()
		{
			cout<<"constructor b is invoked"<<endl;
		}
		~b()
		{
			cout<<"destructor b is invoked"<<endl;
		}
};
class c:public a
{
	public:
		c()
		{
			cout<<"constructor c is invoked"<<endl;
		}
		~c()
		{
			cout<<"destructor c is invoked"<<endl;
		}
};
class d:public b,public c
{
	public:
		d()
		{
			cout<<"constructor d is invoked"<<endl;
		}
		~d()
		{
			cout<<"destructor d is invoked"<<endl;
		}
};
int main()
{
	d D;
	return 0;
}

