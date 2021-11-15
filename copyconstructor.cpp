#include<iostream>
using namespace std;
class sample
{
	private:
		int x;
	public:
		sample()
		{
			cout<<"enter x value";
			cin>>x;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
		}
		sample(sample &s)
		{
			x=s.x;
		}
};
int main()
{
	sample s1;
	s1.show();
	sample s2(s1);
	s2.show();
	return 0;
}
