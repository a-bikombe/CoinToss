/*
Student Name: Arianna Bikombe
Date: March 25, 2021
Course: CSCI175N
Lab Assignment: Lab06-02CoinToss
Project Name: Coin Toss
File Name: Lab06-02CoinToss
Description: 
Limitations: Doesn't do very much.
Credits: Not Applicable
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Constants
const int low = 1;
const int high = 2;


// Function Prototypes
void myName();  // Like the one you did in program #1
int coinToss(int);
int randNr(int low, int high);

int main(int randomNr)
{

	// call functions
	myName();
	coinToss(randomNr);

	// skip line
	cout << endl;

	// pause system
    system("pause");

    return 0;
}

int coinToss(int randomNr) {
	
	// local variables
	int tosses, i;
	
	// prompt user
	cout << "How many tosses should I make? " << flush;
	cin >> tosses;

	// program
	for (i = 1; i <= tosses; i++) {
		cout << i << ":	";
		randNr(low, high);
		if (randomNr = 1) {
			cout << "heads";
		}
		else if (randomNr = 2) {
			cout << "tails";
		}
		else {
			cout << "invalid";
		}
		cout << endl;
	}

	return randomNr;
}


//*************************************************
// The myName function outputs my name, course, & *
// Program #, and a blank line as typical for all *
// programs.                                      *
//*************************************************

void myName() {

    // Print out your name and course
    cout << "Arianna Bikombe\n";
    cout << "CSCI175N\n";
    cout << "Lab06_02 Coin Toss\n" << endl;

}

//*************************************************
// The randNR function returns either a 1 or a 2  *
// which you will use a 1 = heads or 2 = tails    *
//*************************************************

//*************************************************
// The randNR function returns either a 1 or a 2  *
// which you will use a 1 = heads or 2 = tails    *
//*************************************************
int randNr(int low, int high)
{
	/* cstdlib and ctime libraries must be included to support the time(),
	 * srand() and rand() function calls.
	 */
	 // local variable declaration
	int randomNr;
	static bool first = true;

	// seed random generator on first pass only
	if (first)
	{
		// time(0) generates an integer based on current time
		// srand() uses this number to seed the psuedo random generator
		srand((unsigned int)time(0));
		first = false;	// prevents reseeding of generator
	}

	// generates a random number between low and high
	randomNr = low + (rand() % (high - low + 1));

	// return the random number to the calling function
	return randomNr;
}

/*

test 1

Arianna Bikombe
CSCI175N
Lab06_02 Coin Toss

How many tosses should I make? 8
1:      heads
2:      heads
3:      heads
4:      heads
5:      heads
6:      heads
7:      heads
8:      heads

Press any key to continue . . .

*/

/*

test 2

Arianna Bikombe
CSCI175N
Lab06_02 Coin Toss

How many tosses should I make? 3
1:      heads
2:      heads
3:      heads

Press any key to continue . . .

*/