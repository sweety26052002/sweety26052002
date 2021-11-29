#include<iostream>
using namespace std;
class A
{
	public:
		void showa()
		{
			cout<<"method of class A"<<endl;
		}
};
class B:virtual public A
{
	public:
	void showb()
	{
		cout<<"method of class B"<<endl;
	}
};
class C:virtual public A
{
	public:
	void showc()
	{
		cout<<"method of class C"<<endl;
	}
};
class D:public C,public B
{
	public:
	void showd()
	{
		cout<<"method of class D";
	}
};
int main()
{
	D d;
	d.showa();
	d.showb();
	d.showc();
	d.showd();
	return 0;
}

