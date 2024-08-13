#include <iostream>
using namespace std;

void displayIntro();
void beginJourney();
void encounterSurvivors();
void exploreCity();
void faceConflict();
void concludeJourney();

int main() {

    displayIntro();

    beginJourney();

    return 0;
}


void displayIntro() {
    cout<< "Welcome to the Post-Apocalyptic Adventure!\n";
    cout<< "You wake up in a world ravaged by disaster, seeking refuge in an abandoned city.\n";
    cout<< "Your choices will determine your fate.\n\n";
}


void beginJourney() {
    cout<< "You wake up in a desolate landscape. Where will you go?\n";
    cout<< "1. Head towards the city.\n";
    cout<< "2. Explore the wilderness.\n";

    int choice;
    cin>> choice;

    if (choice == 1) {
    encounterSurvivors();
}
	else {
    cout<< "You venture into the wilderness, facing unknown dangers.\n";
    exploreCity();
}
}

void encounterSurvivors() {
    cout<< "As you approach the city, you encounter a group of survivors.\n";
    cout<< "Do you trust them?\n";
    cout<< "1. Approach the survivors.\n";
    cout<< "2. Avoid them and continue towards the city.\n";

    int choice;
    cin>> choice;

    if (choice == 1) {
    cout<< "You approach the survivors cautiously, hoping for aid.\n";
    faceConflict();
}
	else {
    exploreCity();
}
}


void exploreCity() {
    cout<< "You enter the abandoned city, navigating through its crumbling streets and buildings.\n";
    cout<< "1. Search for supplies.\n";
    cout<< "2. Avoid dangerous areas.\n";

    int choice;
    cin>> choice;

    if (choice == 1) {
    cout<< "You scavenge for supplies, finding food and resources.\n";
}
	else {
    cout<< "You avoid dangerous areas, wary of potential threats.\n";
}

    faceConflict();
}

void faceConflict() {
    cout<< "A critical decision lies ahead.\n";
    cout<< "Will you stand your ground or seek diplomacy?\n";
    cout<< "1. Prepare for conflict.\n";
    cout<< "2. Attempt negotiation.\n";

    int choice;
    cin>> choice;

    if (choice == 1) {
    cout<< "You brace yourself for conflict, ready to defend your beliefs.\n";
}
	else {
    cout<< "You attempt negotiation, hoping for a peaceful resolution.\n";
}

    concludeJourney();
}

void concludeJourney() {
    cout<< "Your journey comes to an end.\n";
    cout<< "Your fate is sealed by the choices you've made.\n";
    cout<< "Thanks for playing!\n";
    
    
}

