/* Pseudocode 

Prompt the user to enter the number of rooms

Display number of rooms

Display price per room

Display cost: (number of rooms*price per room)

Display tax: number of rooms*price per room*tax rate

Display total estimate: (number of rooms*price per room)+(number of rooms*price per room*tax rate)
Display estimate expiration time*/


#include<iostream>

using namespace std;
int main() {
	int number_of_rooms {0};
	cout<<"Welcome to the Keshav's carpet cleaning services"<<endl;
	cout<<"\nHow many rooms would you like to be cleaned"<<endl;
	cin>>number_of_rooms;
	const double price_per_room {30.0};
	const double sales_tax {0.06};
	const int estimate_expiry {30};
	
	cout<<"Estimate for  Keshav's carpet cleaning service"<<endl;
	cout<<"Number of rooms:"<<number_of_rooms<<endl;
	cout<<"Price per room:"<<price_per_room <<endl;
	cout<<"Cost:$"<<price_per_room *number_of_rooms<<endl;
	cout<<"Tax:$"<<sales_tax <<endl;
	cout<<"============================================"<<endl;
	cout<<"Total estimate   "<<(price_per_room*number_of_rooms)+(price_per_room*number_of_rooms*sales_tax )<<endl;
	
	return 0;
	
}
/* Here the  Welcome to the cleaning services

How many rooms would you like to be cleaned
2
Estimate for carpet cleaning service
Number of rooms:2
Price per room:30
Cost:$60
Tax:$0.06
============================================
Total estimate   63.6
