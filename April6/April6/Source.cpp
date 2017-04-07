#include <iostream>
using namespace std;
//function declarations
void menu();
void title (int year);
void index(int index);
int main() {
	char request = 'a';
	int num;
	while (request != 'q') {
		cout << "request" << endl;
		cin >> request;

		if (request == 'q') {
			return 0;
		}
		else if (request == 'h')
			menu();
		else if (request == 'i') {
			cout << "enter index" << endl;
			cin >> num;
			index(num);
		}
		else if (request == 'y') {
			cout << "give year:" << endl;
			cin >> num;
			title(num);
		}


	}




}//end main

//function definitions
void menu() {
	
	cout << "q to quit" << endl;
	cout << "y to enter a year" << endl;
	cout << "i to enter an index" << endl;

}

void title(int year) {
	if (year == 1900)
		cout << "Wonderful Wizard of Oz" << endl;
	if (year == 1904)
		cout << "The Marvelous Land of Oz" << endl;
	if (year == 1907)
		cout << "Ozma of Oz" << endl;
	if (year == 1908)
		cout << "Dorothy and the Wizard in Oz" << endl;
	if (year == 1909)
		cout << "The Road to Oz" << endl;
	if (year == 1910)
		cout << "The Emerald City of Oz" << endl;
	if (year == 1913)
		cout << "The Patchwork Girl of Oz" << endl;
	if (year == 1914)
		cout<<"Tik-Tok of Oz" << endl;
		if (year == 1915)
			cout<<"The Scarecrow of Oz" << endl;
			if (year == 1916)
				cout<<"Rinkitink in Oz" << endl;
				if (year == 1917)
					cout<<"The Lost Princess of Oz" << endl;
					if (year == 1918)
						cout<<"The Tin Woodman of Oz" << endl;
						if (year == 1919)
							cout<<"The Magic of Oz" << endl;
							if (year == 1920)
								cout<<"Glinda of Oz" << endl;
}
void index(int index) {
	int yearsold[14] = { 117,113,110,109,108,107,104,103,102,101,100,99,98,97 };
	cout << "this book is" << yearsold[index] << "year sold." << endl;
	
}