#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main() {
	int num;
	char oop;
	char input;
	cout << "Welcome one and all to a round of Rock, Paper, Scissors, Lizard, Spock! (Enter P, R, S, L, or K)" << endl << endl;
	cin >> input;
	cout << "Computer please select either Rock, Paper, Scissors, Lizard, Spock!" << endl << endl;
	cout << "Player one:" << input << endl;
	cout << "computer:" << endl;
	srand(time((NULL)));
	num = rand() % 5 + 1;
	if (num == 1)
		oop = 'R';
	else if (num == 2)
		oop = 'P';
	else if (num == 3)
		oop = 'S';
	else if (num == 3)
		oop = 'L';
	else if (num == 3)
		oop = 'K';



	if (input == 's') {
		if (oop == 'C' || oop == 'R')
			cout << "Player one wins!" << endl;
		else if (oop == 's')
			cout << "TIE!" << endl;
		else
			cout << "player loses, computer wins!" << endl;
	}
	if (input == 'k') {
		if (oop == 'S' || oop == 'R')
			cout << "Player one wins!" << endl;
		else if (oop == 'k')
			cout << "TIE!" << endl;
		else
			cout << "Player loses, computer wins!" << endl;
	}
	if (input == 'l') {
		if (oop == 'K' || oop == 'P')
			cout << "Player one wins!" << endl;
		else if (oop == 'l')
			cout << "TIE!" << endl;
		else
			cout << "Player loses, computer wins!" << endl;
	}
	if (input == 'p') {
		if (oop == 'k' || oop == 'r')
			cout << "Player one wins!" << endl;
		else if (oop == 'p')
			cout << "TIE!" << endl;
		else
			cout << "Player loses, computer wins!" << endl;
	}
	if (input == 'r') {
		if (oop == 'l' || oop == 's')
			cout << "Player one wins!" << endl;
		else if (oop == 'r')
			cout << "TIE!" << endl;
		else
			cout << "Player loses, computer wins!" << endl;
	}

}//end main