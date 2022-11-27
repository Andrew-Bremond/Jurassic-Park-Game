//character.cpp
#include "../header/Character.h"
#include <iostream>

using namespace std;

void Character::dies() {
    string choice;
    cout << "You've lost the game" << endl;
    cout << "Press 'r' to start over " << endl;
    cout << "or " << endl;
    cout << "Press any character to quit the game" << endl;
    cout << endl;
    cin >> choice;
    cout << endl;

    if (choice == "r") {
        intro();
    }
    else {
        cout << "Exiting Game..." << endl;
        exit(0);
    }
}

void Character::lives() {
    string choice;
    cout << "\n----------------------------------\n";
    cout << "Congrats you've survived Jurassic Park! Your character is on a helicopter to safety, off the island, and you've finished the game!" << endl;
    cout << "Press 'r' to start over " << endl;
    cout << "or " << endl;
    cout << "Press any character to quit the game" << endl;
    cout << endl;
    cin >> choice;
    cout << endl;

    if (choice == "r") {
        intro();
    }
    else {
        cout << "Exiting Game..." << endl;
        exit(0);
    }
}
