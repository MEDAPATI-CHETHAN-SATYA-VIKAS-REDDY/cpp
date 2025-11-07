#include<iostream>
using namespace std;
class pre
{
	int x,y;
	public:
		void get()
		{
			x=2;
			y=4;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y;
		}
		void operator +()
		{
			++x;
			++y;
		}
};
int main()
{
	pre p;
	p.get();
	+p;
	p.show();
}
