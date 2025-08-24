#include <iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			int age = 20;
		    float salary = 15000.50;
		    char grade = 'A';
		    string name = "Jinal";
		    const float PI = 3.14159;
		    float radius = 5;
		
		    cout << "Name: " << name << endl;
		    cout << "Age: " << age << endl;
		    cout << "Salary: " << salary << endl;
		    cout << "Grade: " << grade << endl;
		    
		    age = 25;
		    cout << "Updated Age: " << age << endl;	
		
		    float area = PI * radius * radius;
		    cout << "Area of Circle = " << area << endl;
		}	
};
int main() 
{
	A a1;
	a1.display();
    return 0;
}

