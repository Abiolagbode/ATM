#include <iostream>

using namespace std;

int main()
{
	int opcode, amt, dep, pass, bank;
	int bill;
	int transfer, actype, samt;
	int mybal = 1000;
	
	
	cout << "\t WELCOME TO ABIOLA ATM MACHINE\n";
	
	cout << "\t Please insert your atm card\n";
	
	
	cout << "\t Enter your password: ";cin >> pass;
	
	
	if (pass == 1234)
	{
	
	
	//if (pass == 1234)
	cout << string(2, '\n');
	
	cout<< " \tPlease input\n";
	cout<<" \t 1 - inquiry\n";
	cout <<"\t 2 - paybill \n";
	cout << "\t 3 - Transfer \n";
	cout<< " \t 4 - Withdraw \n";
	cout<< " \t 5 - deposit \n";
	cout << "\t 6 - exit\n";
	
	
	
	cin >> opcode, amt;
	
	switch (opcode)
	{
		
	
		case 1: cout << "\t Your balance is = " << mybal;
		break;
		
		case 2: cout << "\t Indicate Bill type";
		break;
		cout << "\t\n Please input \n";
		cout<< "\t 1  - NEPA \n";
		cout << "\t 2 - Hospital Bill";
		cout << "\t\n 3 - DSTV\n"; 

		switch (bill)
		{
			
			case 1: cout <<"Your NEPA BILL Payment was succesful";
			break;
			
			case 2: cout <<" You Hospital Bill payment was successful";
			break;
			
			case 3: cout<< " Your DSTV payment was successful";
			break;
		}
			
		
		case 3: cout << "\t Specify destination bank\n";
		cout <<"\t Please Input \n";
		cout <<"\t 1 - First Bank\n";
		cout <<"\t 2 - Access Bank\n";
		cout <<"\t 3 - Zeneth Bank \n";
		cout <<"\t 5 - GTB \n";
		cout <<"\t 6 - Eco Bank \n";
		cout <<"\t 7 - Union Bank\n";
		
		
		
		cin >> bank;
		switch (bank)
		
		{
			
			case 1: cout <<"\t\n Specify First Bank Account type\n";
			cout << "\t \n Please input\n";
			cout << "\t\n 1 - Saving\n";
			cout << "\t\n 2 -  Current \n";
			cout << "\t\n 3 - Fixed \n";
			
			cin >> actype;
			
			//cout << "\n\t Specify Amount \n";
			//cin >> samt;
			//cout << samt << "was transfered to Mr. Abiola Gbode succeefully";
				
			
		switch (actype) 
		{
			case 1: cout << "\n\t Specify Amount\n";
			cin>> samt;
			cout << samt << " was transfered to Mr. Abiola Gbode Successfully";
			break;
						
			case 2: cout << "\n\t Specify Amount\n";
			cout<< samt;
			cout << samt << " was transfered to Mr. Abiola Gbode Successfully";
			break;
						
			case 3: cout << "\n\t Specify Amount\n";
			cout<< samt;
			cout << samt << " was transfered to Mr. Abiola Gbode Successfully";
			break;
		}
		
			case 2: cout <<"\t\n Specify Access Bank Account type\n";
			cout << "\t \n Please input\n";
			cout << "\t\n 1 - Saving\n";
			cout << "\t\n 2 -  Current \n";
			cout << "\t\n 3 - Fixed \n";
			break;
			
			switch (actype) 
		{
			case 1: cout << "\n\t Specify Amount\n";
			cout<< samt;
			cout << samt << " was transfered to Mr. Abiola Gbode Successfully";
			break;
						
			case 2: cout << "\n\t Specify Amount\n";
			cout<< samt;
			cout << samt << " was transfered to Mr. Abiola Gbode Successfully";
			break;
						
			case 3: cout << "\n\t Specify Amount\n";
			cout<< samt;
			cout << samt << " was transfered to Mr. Abiola Gbode Successfully";
			break;
		}
		
		}		
		
		case 4: cout << "\t Input amt to withdraw: "; 
		cin >> amt;
		mybal = mybal - amt;
		cout << "\t \n your remaining balance: "<< mybal;
		break;
		
		case 5: cout << "\t Input amount deposited: ";
		cin >> dep;
		mybal = mybal + dep;
		break;
		
		case 6: cout << "\t Are you sure";
		break;
	}
}
		else 
		{
				cout << "Invalid Pin";
		}
	
	
	}
	

	

	
}
	return 0;
}
