#include<iostream>
using namespace std;
class rectengle
{
	public:
		float length,width,area;
		void print()
		{
			cout << "Enter length: ";
	        cin >> length;
	        cout << "Enter width: ";
	        cin >> width;
	        area=length*width;
	        cout<<"area of rectengle:"<<area<<endl;
		}
};
int main()
{
	rectengle r1;
	r1.print();
	return 0;
}
