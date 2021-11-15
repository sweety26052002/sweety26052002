#include<iostream>
using namespace std;
class base
{
	int val1,val2;
	public:
		void get()
		{
			cout<<"enter two values:";
			cin>>val1>>val2;
			
		}
		friend float avg(base ob);
		
};
float avg(base ob)
{
	return float(ob.val1+ob.val2)/2;
	
}
int main()
{
	base obj;
	obj.get();
	cout<<"\n average value is: "<<avg(obj)<<endl;
	return 0;
}
