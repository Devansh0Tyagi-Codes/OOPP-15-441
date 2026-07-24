#include <iostream>
using namespace std;

int main()
{
    float balance = 10000, amount;
    int choice;

  
        cout << "\n===== ATM MENU =====" << endl;
        cout << "1. Show Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Current Balance: Rs. " << balance << endl;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;

            if (amount > 0)
            {
                balance += amount;
                cout << "Rs. " << amount << " deposited successfully." << endl;
            }
            else
            {
                cout << "Invalid amount!" << endl;
            }
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount > balance)
            {
                cout << "Insufficient Balance!" << endl;
            }
            else if (amount <= 0)
            {
                cout << "Invalid amount!" << endl;
            }
            else
            {
                balance -= amount;
                cout << "Please collect your cash." << endl;
                cout << "Remaining Balance: Rs. " << balance << endl;
            }
            break;

        case 4:
            cout << "Thank you for using the ATM!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    

    return 0;
}