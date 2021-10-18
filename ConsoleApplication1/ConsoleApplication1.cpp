
#include <iostream> 

using namespace std;

int main()

{
	int score;
	double distace;
	char playAgain;
	bool shieldsup;
	short lives, alienskilled;
	score = 0;
	distace = 1500.42;
	playAgain = 'y';
	shieldsup = true;
	lives = 3;
	alienskilled = 10;
	double enginetemp = 6666.66;
	cout << "\nscore:" << score << endl;
	cout << "\ndistance:" << distace << endl;
	cout << "\nplayagain:" << playAgain << endl;
	cout << "\nlives:" << alienskilled << endl;
	cout << "\nalienskilled:" << enginetemp << endl;
	cout << "\nenginetemp:" << lives << endl;
	int fuel;
	cout << "\nHow much fuel?";
	cin >> fuel;
	cout << "fuel" << fuel << endl;
	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << " \nbonus: " << bonus << endl;
	return 0;
}

