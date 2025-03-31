// fightsimulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Setting up my characters
    string player1 = "Hero";
    int hp1 = 100;
    int attack1 = 20;

    string player2 = "Monster";
    int hp2 = 80;
    int attack2 = 15;

    // Loop for the battle
    while (hp1 > 0 && hp2 > 0) {
        hp2 -= attack1;
        cout << player1 << " attacks " << player2 << " for " << attack1 << " damage. Monster HP: " << hp2 << endl;
        if (hp2 <= 0) break; // Stop if Monster is defeated

        hp1 -= attack2;
        cout << player2 << " attacks " << player1 << " for " << attack2 << " damage. Hero HP: " << hp1 << endl;
    }

    // Check who wins
    if (hp1 > 0) {
        cout << player1 << " wins!" << endl;
    }
    else {
        cout << player2 << " wins!" << endl;
    }
    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
