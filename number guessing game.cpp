#include<iostream>
#include<time.h>
using namespace std;

int main() {

	srand(time(0));
	int choice;
	int attempt;
	int range;

	int x = rand() % 100;
	//for range
	cout << "Enter your range from 0 to ... ";
	cin >> range;

	cout << "This game is for guess number between ( 0 - "<<range<<" ) and you can input number of attempts !" << endl;
	//number of chances
	cout << "Enter number of chances : ";
	cin >> attempt;
	//choices
	cout << "Enter your choice between ( 0 - "<<range<<" ) : ";
	cin >> choice;
	
	//loop body
	if (choice >= 0 && choice <= range) {
		for (int chances = 1; chances < attempt; chances++) {
			
			if (choice > x) {
				cout << "Guess a little number  " << endl;
				cout << "Enter your choice between (0-100) : ";
				cin >> choice;
			}


			else if(choice<x){
				
				cout << "Guess a higher number"<<endl;
				cout << "Enter your choice between (0-100) : ";
				cin >> choice;
			}
			else if (choice == x) {
				cout << "You won !!! " << endl;
				cout << "The correct number is : " << x << endl;
				break;
			}if (chances == attempt) {
				cout << "You are  out of attempts !!!" << endl;
				break;
			}
			}
	}
	else {
		cout << "Enter number between (0-100) : ";
	}
		return 0;
}
