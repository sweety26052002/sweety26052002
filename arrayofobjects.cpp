#include<iostream>
using namespace std;
class sample
{
	private:
		string name;
		int id;
		float percentage;
	public:
		void getdata()
		{
			cout<<"enter details";
			cin>>name>>id>>percentage;
		}
		void show()
		{
			cout<<name<<id<<percentage<<endl;
		}
};
int main()
{
	int n,i;
	cout<<"enter n";
	cin>>n;
	sample s[60];
	for(i=0;i<n;i++)
	{
		s[i].getdata();
		s[i].show();
	}
	return 0;
}
