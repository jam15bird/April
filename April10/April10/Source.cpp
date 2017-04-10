#include <iostream>
using namespace std;
#include<iomanip>
int main() {
	double num;
	cout << "Enter a temperature you would like " << endl;
	cin >> num;
	cout << fixed<<setprecision(2) << num << "f" << endl << endl;
	cout << fixed << setprecision(2) << (num - 32) * 5 / 9 << "c" << endl << endl;
	cout << fixed << setprecision(2) << (num + 459.67) *5/9 << "k" << endl << endl;
	if (num >= 212)
		cout << "PANT PANT PANT PANT" << endl << endl;
	if (num <= 32)
		cout << "brrrrrr" << endl << endl;
	else
		cout << "You are a fugitive from the law of averages." << endl << endl;
	
}