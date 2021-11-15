#include<iostream>
using namespace std;
class sample
{
	private:
		int x,real,imag;
	public:
		sample()
		{
			x=10;
		}
		void getdata()
		{
			cout<<"enter real and imaginary value";
			cin>>real>>imag;
		}
		void operator +(sample &c2)
		
		{
			cout<<real+c2.real<<"+"<<imag+c2.imag<<"i";
		}
		void operator +()
		{
			++x;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
		}
		
};
int main()
{
sample s1,s2;
+s1;
s1.getdata();
s2.getdata();
s1.show();
s1+s2;
return 0;	
}

