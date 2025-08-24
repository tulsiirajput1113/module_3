#include <iostream>
using namespace std;
#include<cstdlib>   
#include<ctime> 
class game
{
	public:
		int num;
		void display()
		{
			srand(time(0));          
			int secret = rand() % 100 + 1; 
			cout << "Secret number is: " << secret<< endl;

		    while (true) 
			{
		        cout << "Enter your number: ";
		        cin >> num;
		
		        if (num == secret) 
				{
		            cout << "Congratulations! You guessed it right." << endl;
		            break;  
		        }
		        else if (num < secret) 
				{
		            cout << "Too low! Try again." << endl;
		        }
		        else 
				{
		            cout << "Too high! Try again." << endl;
		        }
		    }
		}
};
int main() 
{
	game g;
	g.display();
    
    return 0;
}

