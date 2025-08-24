#include<iostream>
using namespace std;
class table
{
	public:
		int num;
		void print()
		{
			cout<<"enter number:";
			cin>>num;
			for (int i = 1; i<=10; i++) 
			{
		        cout<<num<<"*"<<i<<"="<<num*i<<endl;
		    }
		}
};
int main()
{
	table t;
	t.print();
	return 0;
}
