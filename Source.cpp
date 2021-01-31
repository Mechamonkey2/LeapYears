#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double num = 0;
    int num2 = 0;
	cout << "Leap Years! " << endl;
	cout << "Enter a number: ";

	cin >> num;
    while (floor(num) != num) {
        cout << endl;
        cout << num << " Is not a whole number ! Please try again: ";
        cin >> num;
    }
    num2 = num;
    cout << endl;
    if (num2 % 4 == 0) {
        if (num2 % 100 == 0) {
            if (num2 % 400 == 0) {
                cout << num2 << " is a leap year !";
            }
            else {
                cout << num2 << " is not a leap year !";
            }
        }
        else {
            cout << num2 << " is a leap year !";
        }
    }
    else {
        cout << num2 << " is not a leap year !";
    }

    return 0;
}