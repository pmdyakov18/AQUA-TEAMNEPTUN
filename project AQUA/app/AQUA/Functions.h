#pragma once
#include <iostream>
using namespace std;
struct OCEAN {
	string name;
	int area;
	int depth;
	int volume;
	string animals[10];
};

void Pacific(){
    cout << "Location: Separates Asia and Australasia from the Americas" << endl;
    cout << "Area: 168,723,000 km2" << endl;
    cout << "Volume: 669,880,000 km3" << endl;
    cout << "Depth: 3,970m" << endl;

}
void Atlantic(){
    cout << "Location: Separates the Americas from Europe and Africa" << endl;
    cout << "Area: 85,133,000 km2" << endl;
    cout << "Volume: 310,410,900 km3" << endl;
    cout << "Depth: 3,646m" << endl;

}

void Indian(){
    cout << "Location: Borders southern Asia and separates Africa and Australia" << endl;
    cout << "Area: 70,560,000 km2" << endl;
    cout << "Volume: 264,000,000 km3" << endl;
    cout << "Depth: 3,741m" << endl;

}

void Southern(){
    cout << "Location: Encircles Antarctica" << endl;
    cout << "Area: 21,960,000 km2" << endl;
    cout << "Volume: 71,800,000 km3" << endl;
    cout << "Depth: 3,270m" << endl;

}
void Artic(){
    cout << "Location: Borders northern North America and Eurasia and covers much of the Arctic" << endl;
    cout << "Area: 15,558,000 km2" << endl;
    cout << "Volume: 18,750,000 km3" << endl;
    cout << "Depth: 1,205m" << endl;

}

void InfoOceans() {
	int choice;
	cout << "Choose ocean" << endl;
	cout << "1) Pacific Ocean" << endl;
	cout << "2) Atlantic Ocean" << endl;
	cout << "3) Indian Ocean" << endl;
	cout << "4) Southern Ocean" << endl;
	cout << "5) Arctic Ocean" << endl;
	cin >> choice;
	switch (choice) {
	case 1:
		Pacific();
		break;
	case 2:
		Atlantic();
		break;
	case 3:
		Indian();
		break;
	case 4:
		Southern();
		break;
	case 5:
		Artic();
		break;
	default:
		while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5) {
			cout << "Invalid choice! Try again.";
			cin >> choice;
		}
	}
}

void initOceans(OCEAN ocean[]) {
	int oceanq;
	cout << "How many oceans would you like to enter? ";
	cin >> oceanq;
	for (int i = 0; i < oceanq; i++) {
		cout << "Enter ocean name: ";
		cin >> ocean[i].name;
		cout << "Enter ocean area: ";
		cin >> ocean[i].area;
		cout << "Enter the depth of the ocean: ";
		cin >> ocean[i].depth;
		cout << "Enter the volume of the ocean: ";
		cin >> ocean[i].volume;
		cout << "Enter what animals are in the ocean: ";
		cin >> ocean[i].animals[i];
	}
	for (int i = 0; i < oceanq; i++) {
		cout << "Ocean name: " << ocean->name << endl;
		cout << "Ocean area: " << ocean->area << endl;
		cout << "Ocean depth: " << ocean->depth << endl;
		cout << "Ocean volume: " << ocean->volume << endl;
		cout << "Ocean animal(s): " << ocean->animals[i] << endl;
		cout << "Thank you for your participation! You have successfully added the " << ocean[i].name << " ocean to our oceans!" << endl;
	}
}

	void menu() {
		int choice;
		int choiceofOcean;
		OCEAN oceans[5];
		int oceansq;
		cout << "AQUA PROJECT" << endl;
		cout << "Main Menu" << endl;
		cout << "1) Information about the oceans" << endl;
		cout << "2) Add or remove information" << endl;
		cout << "3) Exit the program" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		do {
			switch (choice) {
			case 1:
				InfoOceans();
				break;
			case 2:
				initOceans(oceans);
				break;
			case 3:
				exit(0);
				break;
			}
		} while (choice != 0);
	}