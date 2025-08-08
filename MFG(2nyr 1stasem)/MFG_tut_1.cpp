#include<iostream>
using namespace std ;

int main()
{
	int totalStudents = 200;
    int sportsClub = 120;
    int musicClub = 90;
    int bothClubs = 50;
    
    
    int atLeastOneClub = sportsClub + musicClub - bothClubs;
    int onlySports = sportsClub - bothClubs;
    int onlyMusic = musicClub - bothClubs;
    int neitherClub = totalStudents - atLeastOneClub;
    
    
	cout << "RESULT: \n" << endl;
    cout <<"1. students in atleast one club"<<atLeastOneClub << endl;
    cout << "2. Students only in Sports Club: " << onlySports << endl;
    cout << "3. Students only in Music Club: " << onlyMusic << endl;
    cout << "4. Students in neither club: " << neitherClub << endl;

    return 0;
}

	
	 
