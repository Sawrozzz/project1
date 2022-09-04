
#include<iostream>
using namespace std;
class demo
{
	int a,b;
	public:
		demo()
		{
			a=7;
			b=8;
		}
		void display()
		{
			cout<<"a="<<a<<endl<<"b="<<b;
		}
};
int main()
{
	demo d;
	d.display();
	
}
