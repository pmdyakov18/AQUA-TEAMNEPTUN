#pragma once
#include <iostream>
#include <string>
using namespace std;
struct OCEAN {
	string name;
	int area{};
	int depth{};
	int volume{};
	string animals;
};

void Pacific(){
    cout << "Location: Separates Asia and Australasia from the Americas" << endl;
    cout << "Area: 168,723,000 km2" << endl;
    cout << "Volume: 669,880,000 km3" << endl;
    cout << "Depth: 3,970m" << endl;
	cout << endl;
	system("pause");
	system("cls");
}
void Atlantic(){
    cout << "Location: Separates the Americas from Europe and Africa" << endl;
    cout << "Area: 85,133,000 km2" << endl;
    cout << "Volume: 310,410,900 km3" << endl;
    cout << "Depth: 3,646m" << endl;
	cout << endl;
	system("pause");
	system("cls");
}

void Indian(){
    cout << "Location: Borders southern Asia and separates Africa and Australia" << endl;
    cout << "Area: 70,560,000 km2" << endl;
    cout << "Volume: 264,000,000 km3" << endl;
    cout << "Depth: 3,741m" << endl;
	cout << endl;
	system("pause");
	system("cls");
}

void InfoOceans() {
	int choice;
	cout << "Choose ocean" << endl;
	cout << "1) Pacific Ocean" << endl;
	cout << "2) Atlantic Ocean" << endl;
	cout << "3) Indian Ocean" << endl;
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
	default:
		cout << "Invalid choice! Try again. ";
		cin.clear();
		cin >> choice;
			
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
		cin >> ocean[i].animals;
	}

	for (int i = 0; i < oceanq; i++) {
		if (ocean[i].name == "Pacific" || ocean[i].name == "Atlantic" || ocean[i].name == "Indian") {
			cout << "Sorry! " << ocean[i].name << " is already in our list. " << endl;
			break;
		}
	}

	for (int i = 0; i < oceanq; i++) {
		cout << "Ocean name: " << ocean->name << endl;
		cout << "Ocean area: " << ocean->area << endl;
		cout << "Ocean depth: " << ocean->depth << endl;
		cout << "Ocean volume: " << ocean->volume << endl;
		cout << "Ocean animal(s): " << ocean->animals << endl;
		cout << "You have successfully added the " << ocean[i].name << " ocean to our oceans!" << endl;
		system("pause");
		system("cls");
	}
}

void menu() {
	int choice;
	OCEAN oceans[5];
	do {
		cout << "AQUA PROJECT" << endl;
		cout << endl;
		cout << "Main Menu" << endl;
		cout << "1) Information about the oceans" << endl;
		cout << "2) Add information" << endl;
		cout << "3) Exit the program" << endl;
		cout << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			InfoOceans();
			break;
		case 2:
			initOceans(oceans);
			break;
		case 3:
			cout << "You exited the program successfully!";
			break;
		default:
			cout << "Wrong choice. Try again! ";
			cin >> choice;
		}
	}
		while(choice != 3);
}

	