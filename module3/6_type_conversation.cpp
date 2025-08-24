#include <iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			// Implicit Conversion
		    int a = 10;
		    float b = 3.5;
		    float result1 = a + b;  
		    cout << "Implicit Conversion = " << result1 << endl;
		
		    // Explicit Conversion
		    float x = 9.8;
		    int y = (int)x;   
		    cout << "Explicit Conversion = " << y << endl;
		}
	
};
int main() {
    A a1;
    a1.display();

    return 0;
}

