#include <iostream>
using namespace std;

class BankAccount 
{
	private:
    	double balance;   

	public:
    void setBalance(double initialBalance) 
	{
        balance = initialBalance;
    }
    double getBalance() 
	{
        return balance;
    }

    void deposit(double amount) 
	{
        if (amount > 0) 
		{
            balance = balance+amount;
            cout << "Deposited: " << amount << endl;
        } 
		else 
		{
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) 
	{
        if (amount > 0 && amount <= balance) 
		{
            balance = balance-amount;
            cout << "Withdrawn: " << amount << endl;
        } 
		else 
		{
            cout << "invalid amount!" << endl;
        }
    }
};

int main() 
{
    BankAccount acc;
    double initial, dep, wd;

    cout << "Enter initial balance: ";
    cin >> initial;
    acc.setBalance(initial);

    cout << "Enter amount to deposit: ";
    cin >> dep;
    acc.deposit(dep);

    cout << "Enter amount to withdraw: ";
    cin >> wd;
    acc.withdraw(wd);

    cout << "Current Balance: " << acc.getBalance() << endl;

    return 0;
}

