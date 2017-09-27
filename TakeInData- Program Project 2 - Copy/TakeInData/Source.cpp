/*
Jacob Hemphill 9/25/2017 Period 2
Take In Data:
Use cin to input data through the console
*/

// Libraries
#include <iostream>
#include <conio.h>

// Namespaces
using namespace std;

// Functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// Main
void main() {

	// Variables
	int pies_eaten;
	char choice_answer;
	bool answersmatcheds = false;
	double piGuess;
	int difference;
	int sum;
	int product;
	int quotient;
	

	// Questions
	cout << "How many pies did Jack eat? : ";
	cin >> pies_eaten;
	if (pies_eaten == '7') {
		answersmatcheds = true;
	}

	cout << "What answer did you get for number 1? : ";
	cin >> choice_answer;
	if (choice_answer == 'b' || choice_answer == 'B') {
		answersmatcheds = true;
	}
	cout << "What number is pi? : ";
	cin >> piGuess;

	// Math Problems

	cout << "What is 43 - 5 ? : ";
	cin >> difference;
	if (difference == '38') {
		answersmatcheds = true;
	}
	cout << "What is 10 + 10? : ";
	cin >> sum;
	if (sum == '20') {
		answersmatcheds = true;
	}
	cout << "What is 2 * 2 ? : ";
	cin >> product;
	if (product == '4') {
		answersmatcheds = true;
	}
	cout << "What is 10 / 5 ? : ";
	cin >> quotient;
	if (quotient == '2') {
		answersmatcheds = true;
	}
	cout << "\n";
	cout << "ANSWERS \n";
	cout << "\n";

	// After Questions
	cout << boolalpha << "I think that's " << answersmatcheds << " for how many pies Jack ate. \n";
	cout << boolalpha << "I think that is " << answersmatcheds << " for question 1 \n";
	cout << "So you think Pi is : " << piGuess << " ? \n";
	cout << boolalpha << "That is " << answersmatcheds << " 43 - 5 is 38 \n";
	cout << boolalpha << "That is " << answersmatcheds << " 10 + 10 is 20 \n";
	cout << boolalpha << "That is " << answersmatcheds << " 2 * 2 is 4 \n";
	pause();



}