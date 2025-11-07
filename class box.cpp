#include<iostream>
using namespace std;
class Box
{
	private:
	int length,breadth,height;
	public:
	void get (int l, int b, int h)
	 {
	 	length=l;
	 	breadth=b;
	 	height=h;
	 } 		
	 int area()
	 {
	 	return(length * breadth * height);
	 }
};

int main()
{
	Box v;
	v.get(10, 10, 10)
	cout<<"volume: "<<v.area();
	return 0;
}
