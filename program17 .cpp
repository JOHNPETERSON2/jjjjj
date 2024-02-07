#include <iostream>
using namespace std;

int main() {
	char input;
	cout<<"Enter a character: ";
	cin>>input;
	if((input >= 'a' && input <= '2')||(input >= 'A' && input <= 'Z'))
	   cout<<"Your have entered a character.\n";
	else
	   cout<<"Invalid input.\n";
	
}
