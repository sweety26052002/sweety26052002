#include<iostream>
using namespace std;
template<class t1,class t2>
class sample
{
	t1 a;
	t2 b;
	public:
		void get()
		{
			cout<<"enter a and b :"<<endl;
			cin>>a>>b;
		}
		void display()
		{
			cout<<"a="<<a<<endl<<"b="<<b<<endl;
		}
};
int main()
{
	sample <int,int>s1;
	sample <int,char>s2;
	sample <int,float>s3;
	cout<<"two integer data values"<<endl;
	s1.get();
    s1.display();
	cout<<"int and char"<<endl;
	s2.get();
	s2.display();
	cout<<"int and float"<<endl;
	s3.get();
	s3.display();
	return 0;	
}
