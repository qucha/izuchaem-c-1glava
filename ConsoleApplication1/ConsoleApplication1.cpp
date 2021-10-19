
#include <iostream> 

using namespace std;

int main()

{
	const int alien_points = 150;
	int aliensKillied = 10;
	int score = aliensKillied * alien_points;
	cout << "score:" << score << endl;
	enum difficulty { novice, easy, normal, hard, unbeatablle };
	difficulty myDifficutly = easy;
	enum shipCost { figher_cost = 25, bomber_cost, cruise_cost = 50 };
	shipCost myShipCost = bomber_cost;
	cout << "\ncena upgrade my floppa " << (cruise_cost - myShipCost) << " Resource Poinsts.\n";
	return 0;
}
