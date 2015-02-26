// lab 3-1 tic tac toe.cpp : Defines the entry point for the console application.
//Nate Rowe
//Matt jones
//Andy Rotton

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
void board();
char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char question_YN();
void instructions();
char ask_for_position();

int main()
{
	instructions();
	question_YN();
	board();
	ask_for_position();
	int player = 1, i, choice;
	char action;
	do
	{
		board();
		player = (player % 2) ? 1 : 2;

		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;

		action = (player == 1) ? 'X' : 'O';

		if (choice == 1 && square[1] == '1')

			square[1] = action;
		else if (choice == 2 && square[2] == '2')

			square[2] = action;
		else if (choice == 3 && square[3] == '3')

			square[3] = action;
		else if (choice == 4 && square[4] == '4')

			square[4] = action;
		else if (choice == 5 && square[5] == '5')

			square[5] = action;
		else if (choice == 6 && square[6] == '6')

			square[6] = action;
		else if (choice == 7 && square[7] == '7')

			square[7] = action;
		else if (choice == 8 && square[8] == '8')

			square[8] = action;
		else if (choice == 9 && square[9] == '9')

			square[9] = action;
		else
		{
			cout << "Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}

}
void instructions()
{
cout << " Welcome to the greatest intellectual challenge of all time : Tic - Tac - Toe." << endl;
cout << "This will be a showdown between your human brain and my silicon processor." << endl;
cout << "You will make your move known by entering a number, 0 - 8.  The number " << endl;
cout << "will correspond to the board position as illustrated : " << endl;

cout << "0 | 1 | 2" << endl;
cout << "---------" << endl;
cout << "3 | 4 | 5" << endl;
cout << "---------" << endl;
cout << "6 | 7 | 8" << endl;
cout << "Prepare yourself, human.The ultimate battle is about to begin." << endl;
}

char question_YN()
{
	string question = " are you going first y/n : ";
	char goFirst = 'c';
	cout << question;
	cin >> goFirst;
	cin.sync();
	cin.ignore();
	while (goFirst != 'y' || goFirst != 'n'){
		if (goFirst == 'y'){
			cout << "you shall go first.";
		}
		else if (goFirst == 'n'){
			cout << "you're second.";
		}
		cout << endl;
		return 0;
	}

	return 0;

}
char ask_for_position()
{
	string question = "What spot do you want to take? ";
	int spot = NULL;
	cout << question << endl;
	cin >> spot;
	while (spot <= 8){
		cin >> spot;
	}
	char playerX = 
	cin.sync();
	cin.ignore();
	cout << endl;
	return 0;
}
void board()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";


	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
}

