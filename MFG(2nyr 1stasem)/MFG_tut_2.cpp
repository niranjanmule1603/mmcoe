#include <iostream>
using namespace std;

int main() {
    int totalStudents = 200;

    int sportsClub = 120;
    int musicClub = 90;
    int bothClubs = 50;

    int atLeastOne = sportsClub + musicClub - bothClubs;
    int onlySports = sportsClub - bothClubs;
    int onlyMusic = musicClub - bothClubs;
    int neither = totalStudents - atLeastOne;

    cout << "Total students who are in at least one club: " << atLeastOne << endl;
    cout << "Students who are only in Sports Club: " << onlySports << endl;
    cout << "Students who are only in Music Club: " << onlyMusic << endl;
    cout << "Students who are in neither club: " << neither << endl;

    return 0;
}
