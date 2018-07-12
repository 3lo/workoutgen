//Program: Gym Workout List Generator

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class workout {
	int sets; // number of exercises
	string aBody; // name of body part
public:
	workout(string uBody, int uSets) :aBody(uBody), sets(uSets){ } // constructor
	void print();
};

void workout::print() {
	srand(time(NULL));
	int rnum;

	if(aBody == "chest" || aBody == "Chest"){
		for (int i = 0; i < sets; i++) { // need a loop to cycle through the array
			rnum = rand() % 7; //rnum = rand() % 7; Random Number is between 0 - 6
			string chest[7] = { "flat bench pench", "inclined bench press", "decline bench press", "flies", "incline flies", "decline flies", "push ups" };
			cout << chest[rnum] << endl;
		}
	}

	else if (aBody == "arms" || aBody == "Arms") {
		for (int i = 0; i < sets; i++) { 
			rnum = rand() % 15;
			string arm[15] = { "bicep curl", "tricep pushdown", "skull crushers", "tricep kickbacks", "tricep extensions", "dips", "preacher curls", "hammer curls", 
			"cross body curls", "concentrationed curls", "incline curls", "21s", "reverse curls", "zottman curl", "forearm curls" };
			cout << arm[rnum] << endl;
		}
	}

	else if (aBody == "legs" || aBody == "Legs") {
		for (int i = 0; i < sets; i++) {
			rnum = rand() % 6;
			string legs[6] = { "squats", "calf raises", "leg press", "lunges", "hip thrusts", "glute ham raises" };
			cout << legs[rnum] << endl;
		}
	}

	else if (aBody == "shoulders" || aBody == "Shoulders") {
		for (int i = 0; i < sets; i++) {
			rnum = rand() % 6;
			string shoulders[6] = { "shoulder press", "arnold press", "front raises", "side raises", "shrugs", "upright rows" };
			cout << shoulders[rnum] << endl;
		}
	}

	else if (aBody == "back" || aBody == "Back") {
		for (int i = 0; i < sets; i++) {
			rnum = rand() % 9;
			string back[9] = { "rows", "pull overs", "pull downs", "pull ups", "lat pull downs", "chin ups", "reverse flies", "straight leg deadlift", "glute ham raises" };
			cout << back[rnum] << endl;
		}
	}

	else {
		cout << "Invalid user input. Valid strings are chest , arms , legs , shoulders , back" << endl;
	}

}


int main() {

	int num;
	string body, answer;
	cout << "Enter the body part you want to workout: ";
	cin >> body;

	cout << "Enter the number of exercises: ";
	cin >> num;
	
	workout BodyPart(body, num); // the exercise and number of excersizes

	BodyPart.print();

	cout << "Would you like to work out another body part? ";
	cin >> answer;

	if (answer == "Yes" || answer == "yes") {
		cout << "Enter the body part you want to workout: ";
		cin >> body;

		cout << "Enter the number of exercises: ";
		cin >> num;
		workout BodyPart(body, num);
		BodyPart.print();
	}
	else {
		cout << "Goodbye" << endl;
	}

	system("pause");
}