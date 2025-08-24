#include <iostream>
using namespace std;
class A
{
	public:
	string name;
    int age;
	void display()
	{
	    cout << "Enter your name: ";
	    cin >> name;   
	    cout << "Enter your age: ";
	    cin >> age;   
	    cout << "Name is:" << name <<endl<< "age is: " << age <<endl;
	}
};
int main() 
{
    A a1;
    a1.display();
    return 0;
}

