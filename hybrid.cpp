#include<iostream>
using namespace std;
class student
{
	protected:
		string name,branch;
		int rollno;
		student()
		{
			cout<<"enter name and rollno:";
			cin>>name>>rollno;
			cout<<"enter branch";
			cin>>branch;
		}
};
class marks:public student
{
	protected:
		int m1,m2,m3,m4;
		marks()
		{
			cout<<"enter four subject marks";
			cin>>m1>>m2>>m3>>m4;
		}
		void show()
		{
			cout<<"name of the student:"<<name<<endl;
			cout<<"branch name:"<<branch<<endl;
		}
};
class project
{
	protected:
		int ip,ep;
		project()
		{
			cout<<"enter ip and ep marks";
			cin>>ip>>ep;
		}
};
class percentage:public marks,public project
{
	private:
		float a;
	public:
		void print()
		{
			a=(float)(m1+m2+m3+m4+ip+ep)/6;
			show();
			cout<<"percentage of student:"<<a<<endl;
		}
};
int main()
{
	percentage p;
	p.print();
	return 0;
}
