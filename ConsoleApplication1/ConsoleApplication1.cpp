
#include <iostream> 

using namespace std;

int main()

{
	unsigned int score = 5000;
	cout << "score:" << score << endl;
	score = score + 100;
	cout << "score:" << score << endl;
	score += 300;
	cout << "\nscore:" << score << endl;
	int lives = 3;
	++lives;
	cout << "lives:" << lives << endl;
	lives = 3;
	lives++;
	cout << "lives:" << lives << endl;
	lives = 3;
	int bonus = ++lives * 10;
	cout << "lives,bbonus:" << lives << "." << bonus << endl;
	lives = 3;
	bonus = lives++ * 10;
	cout << "lives,bbonus:" << lives << "." << bonus << endl;
	score = 4294967295;
	cout << "\nscore:" << score << endl;
	++score;
	cout << "\nscore:" << score << endl;
	return 0;
}

