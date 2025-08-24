#include <iostream>
using namespace std;
class avg
{
	public:
		int n;
		int arr[100];   
	    int sum = 0;  
	    void display()
	    {
	    	cout <<"Enter number of length: ";
		    cin >> n;   
		    for (int i = 0; i < n; i++) 
			{
				cout << "Enter number: ";
		        cin >> arr[i];
		        sum = sum + arr[i];   
		    }
		
		    int avg = sum / n;  
		
		    cout << "Sum = " << sum << endl;
		    cout << "Average = " << avg << endl;
		}
};
int main() 
{
    avg a;
    a.display();
    return 0;
}

