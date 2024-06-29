#include<iostream>

using namespace std;
int main() {
	cout<<"Hello,Welcome to Frank's carpet cleaning service"<<endl;
	int number_of_small_rooms;
	int number_of_large_rooms;
	cout<<"How many small rooms would you like to be cleaned:"<<endl;
	cin>>number_of_small_rooms;
	cout<<"How many large rooms would you like to be cleaned:"<<endl;
	cin>>number_of_large_rooms;
	
	const double price_per_small_room {25.0};
	const double price_per_large_room {35.0};
	const double sales_tax {0.06};
	 
	cout<<"Estimate for carpet cleaning"<<endl;
	cout<<"Number of small rooms:"<<number_of_small_rooms<<endl;
	cout<<"Number of large rooms:"<< number_of_large_rooms<<endl;
	cout<<"Price per small room: $"<<price_per_small_room<<endl;
	cout<<"Price per large room: $"<<price_per_large_room<<endl;
	cout<<"Cost: $"  <<(number_of_small_rooms*price_per_small_room)+(number_of_large_rooms*price_per_large_room)<<endl;
	cout<<"Tax: $" <<sales_tax<<endl;
	cout<<"========================================================"<<endl;
	cout<<"Total Estimate: $"<<((number_of_small_rooms*price_per_small_room)+(number_of_large_rooms* price_per_large_room))+(((number_of_small_rooms*price_per_small_room)+(number_of_large_rooms* price_per_large_room))*sales_tax)<<endl;
	cout<<"This estimate is valid for 30 days"<<endl;
	return 0;
	
}
