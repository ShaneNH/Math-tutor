#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int addition();
int subtraction();
int multiplication();
int division();
int welcome();
int menu();

int main ()
{

	welcome();
	
	switch (menu())
	{
	case 1:
		addition();
	break;

	case 2:
		subtraction();
		break;

	case 3:
		multiplication();
	break;

	case 4:
		division();
	break;

	default:
		cout << "Please enter 1, 2, 3 or 4" << endl;
	}
	return 0;
}




int addition(){
	int x, y, ans1;
	int ta = 1;
	int prob = 0;
	int i = 0;
	int n = 0;
	int pr[9];
	do {
		x = (rand() % 9)+1;
		y = (rand() % 9)+1;
				cout << "What is the answer to " << x << "+ " << y << endl;
	cin >> ans1;
	while (ans1 != x+y && ta==1){
			cout << "Sorry, That is not the correct answer" << endl;
			cout << "Would you like to try again? Type (1) for yes or (2) for no: ";
			cin >> ta;
			if (ta==1) {
				cout << "What is the answer to " << x << "+ " << y << endl;
	cin >> ans1;
	n++;
			}
	}
	if (ans1 == x+y){
		cout << "Congrats! That is the right answer!\n";
	}
	ta = 1;
		i++;
		prob++;
	} while (prob<10);
	return ans1;
}


int subtraction(){
	int x, y, ans1;
	int ta = 1;
	int prob = 0;
	do {
		x = (rand() % 9) + 1;
		y = (rand() % 9) + 1;
		cout << "What is the answer to " << x << "- " << y << endl;
		cin >> ans1;
		while (ans1 != x - y && ta == 1){
			cout << "Sorry, That is not the correct answer" << endl;
			cout << "Would you like to try again? Type (1) for yes or (2) for no: ";
			cin >> ta;
			if (ta == 1) {
				cout << "What is the answer to " << x << "- " << y << endl;
				cin >> ans1;
			}
		}
		if (ans1 == x - y){
			cout << "Congrats! That is the right answer!\n";
		}
		ta = 1;
		prob++;
	} while (prob < 10);
	return ans1;
}

int multiplication(){
	int x, y, ans1;
	int ta = 1;
	int prob = 0;
	do {
		x = (rand() % 9) + 1;
		y = (rand() % 9) + 1;
		cout << "What is the answer to " << x << "* " << y << endl;
		cin >> ans1;
		while (ans1 != x*y && ta == 1){
			cout << "Sorry, That is not the correct answer" << endl;
			cout << "Would you like to try again? Type (1) for yes or (2) for no: ";
			cin >> ta;
			if (ta == 1) {
				cout << "What is the answer to " << x << "* " << y << endl;
				cin >> ans1;
			}
		}
		if (ans1 == x*y){
			cout << "Congrats! That is the right answer!\n";
		}
		ta = 1;
		prob++;
	} while (prob<10);
	return ans1;
}

int division(){
	int x, y, ans1;
	int ta = 1;
	int prob = 0;
	do {
		x = (rand() % 9) + 1;
		y = (rand() % 9) + 1;
		cout << "What is the answer to " << x << "/ " << y << endl;
		cin >> ans1;
		while (ans1 != static_cast<double>(x) / y && ta == 1){
			cout << "Sorry, That is not the correct answer" << endl;
			cout << "Would you like to try again? Type (1) for yes or (2) for no: ";
			cin >> ta;
			if (ta == 1) {
				cout << "What is the answer to " << x << "/ " << y << endl;
				cin >> ans1;
			}
		}
		if (ans1 == static_cast<double>(x) / y){
			cout << "Congrats! That is the right answer!\n";
		}
		ta = 1;
		prob++;
	} while (prob < 10);
	return ans1;
}

int welcome(){
cout << "Welcome to Shane's Math Tutor" << endl;
cout << "This program will teach and help you learn the basics of math" << endl;
cout << "You will be learninmg about addition, subtraction, multiplication, and division" << endl << endl;
cout << "What is your name: ";
string name;
cin >> name;
cout << endl << endl;
return 0;
}

int menu(){
	int tutor;
	cout << "Options:" << endl << "1) Addition" << endl << "2) Subtraction" << endl << "3) Multiplication" << endl << "4) Division" << endl;
	cout << "Which tutor would you like to work with? ";
	cin >> tutor;
	return tutor;
}