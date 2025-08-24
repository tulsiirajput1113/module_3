#include <iostream>
using namespace std;
class grade
{
	public:
		int marks;
		void print()
		{
		    cout << "Enter student marks: ";
		    cin >> marks;
		
		    if (marks >= 90 && marks <= 100) 
			{
		        cout << "Grade: A" << endl;
		    }
		    else if (marks >= 75) 
			{
		        cout << "Grade: B" << endl;
		    }
		    else if (marks >= 50) 
			{
		        cout << "Grade: C" << endl;
		    }
		    else if (marks >= 35) 
			{
		        cout << "Grade: D" << endl;
		    }
		    else 
			{
		        cout << "Grade: Fail" << endl;
		    }
		}
};
int main() 
{
	grade g;
	g.print();
    return 0;
}

