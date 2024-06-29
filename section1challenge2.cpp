/*This is a pretty simple challenge that's based on one of the problems that we solved in this section.
Well, this is a little bit different. In this case, Frank has two charges.
One for small rooms and one for large rooms.
So as you can see here he charges $25 for small rooms and $35 for large rooms.
The sales tax rate is still 6% and estimates are still valid for 30 days.
So what you need to do here is prompt the user both for how many small rooms they want cleaned and how many large rooms they want cleaned
and then provide an estimate that looks something like this.
Number of small rooms, for example, 3, number of large rooms 1.
Price per small room $25, price per large room $35.
Calculate the cost. Calculate the tax and then come up with a total estimate and tell them that the estimate is valid for 30 days.
*/


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

/*Here's a sample run that you can see.So here, hello welcome to Frank's Carpet Cleaning Service. How many small rooms would you like clean?
Let's say I want 3 small rooms cleaned and 1 large room clean.
And you can see here the estimate is number of small rooms 3,number of large rooms 1- that's what I just typed in the price per small rooms is $25,
the price per large room is $35 and the cost is $110.
if you do the math, you can see that 3 x 25 is 75
plus 35 is 110. 6% of that is $6.60.If you add it all together you get a $116.60.
And then you display, "This estimate is valid for 30 days".
*/
