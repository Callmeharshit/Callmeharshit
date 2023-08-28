// ATM Management system

#include <iostream>
#include <string>
using namespace std;

struct ATM {
    int upin = 2003;
};

int main() 
{
    ATM myATM; // Creates an instance of the ATM structure
    int pin;
    int withdrawCash;
    int newPin;
    int method; // Variable to store the selected method
    int amount;
    cout << "Hello! Welcome to SBI ATM\n" << endl;

    int i;
    for (i = 1; i <= 5; i++) 
	{
        cout << "Please enter your secret number: ";
        cin >> pin;
        if (pin != myATM.upin) {
            cout << "Incorrect pin" << endl;
        } else {
            cout << "Please select the following method: \n" << endl;
            break;
        }
    }

    if (i == 6) 
	{ 	
        cout << "Maximum attempts reached. Exiting..." << endl;
        return 0;
    }

    while (true) 
	{
        cout << "1. Withdraw cash\n";
        cout << "2. Fast cash\n";
        cout << "3. Change pin\n";
        cout << "4. Help\n";
        cout << "Select a method: ";
        cin >> method;

        switch (method) 
		{
            case 1:
                cout << "Please enter the amount: ";
                cin >> amount;
                // Add code to handle cash withdrawal
                cout<<"Please wait while your transaction is being processed\n";
                cout<<"Collect the cash\n";
                break;
            case 2:
                cout << "Select the amount you want to withdraw:\n";
                while(true)
                {
                	cout<<"1. 100\t\t";
                	cout<<"2. 200\n\n";
                	cout<<"3. 500\t\t";
                	cout<<"4. 1000\n\n";
                	cout<<"5. 2000\t\t";
                	cout<<"6. 5000\n\n";
                	cin>>withdrawCash;
                	
                	switch(withdrawCash)
                	{
                		case 1:
                			cout<<"Please wait while your transaction is being processed\n";
                			break;
                		case 2:
                			cout<<"Please wait while your transaction is being processed\n";
							break;
						case 3:
							cout<<"Please wait while your transaction is being processed\n";
							break;
						case 4:
						    cout<<"Please wait while your transaction is being processed\n";
						    break;
						case 5:
						    cout<<"Please wait while your transaction is being processed\n";
						    break;
						case 6:
						    cout<<"Please wait while your transaction is being processed\n";
						    break;
						default:
							cout<<"Connection timedout\n";
							break;
					} cout<<"Collect the cash which will not be taken back by the machine\n";
					break;
				}
                // Add code to handle fast cash withdrawal
                
                break;
            case 3:
                cout << "Enter new pin: ";
                cin >> newPin;
                cout<<"Your new pin is changed\n";                
                // Add code to handle pin change
                break;
            case 4:
                cout <<"\nContact us on +91 8824891262" << endl;
                // Add code to handle help option
                break;
            default:
                cout << "Invalid method. Please try again." << endl;
                break;
        }
        
        break;
        
    }

    cout<<"\n\n\nThank you for contacting with us\n\n\n";
	
	return 0;
}
