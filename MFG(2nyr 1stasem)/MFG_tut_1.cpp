#include <iostream>
using namespace std;

// macros
#define UNIVERSAL_SET_SIZE 60

int main(void)
{
	// local variables
	int numSetA = 0;
	int numSetB = 0;
	int universalSet[(int)UNIVERSAL_SET_SIZE];
	int intersectionCount = 0;
	int unionCount = 0;
	
	// code
	// first filling the universal set with the members 
	for(int i = 0; i < UNIVERSAL_SET_SIZE; i++)
	{
		universalSet[i] = (i + 1);
	}
	
	cout << "Please enter Roll no's Between 1 and " << (int)UNIVERSAL_SET_SIZE << endl;
	
	cout << "Enter the number of elements in Drama Club: ";
	cin >> numSetA;
	int SetA[numSetA]; // declare SetA of size numSetA
	// take input for elements in SetA
	cout << "Enter Roll Numbers of students in Drama Club: \n";
	for(int i = 0; i < numSetA; i++)
	{
		cin >> SetA[i];
	}
	
	// -----------------------------------------------------
	cout << "-----------------------------------------------------\n";
	
	cout << "Enter the number of elemnts in Science Club: ";
	cin >> numSetB;
	int SetB[numSetB]; // declare SetB of size numSetB
	// take input for elements in SetB
	cout << "Enter Roll Numbers of students in Science Club: \n";
	for(int i = 0; i < numSetB; i++)
	{
		cin >> SetB[i];
	}
	
	// finding intersection count
	for(int i = 0; i < numSetA; i++)
	{
		for(int j = 0; j < numSetB; j++)
		{
			if(SetA[i] == SetB[j])
			{
				intersectionCount++;
			}
		}
	}
	
	// finding union count
	unionCount = numSetA + numSetB - intersectionCount;
	
	
	// -----------------------------------------------------
	cout << "-----------------------------------------------------\n";
	
	cout << "The Total Number of Students Is: " << (int)UNIVERSAL_SET_SIZE << endl;
	cout << "Number of Students in Drama Club: " << numSetA << endl;
	cout << "Number of Students in Science Club: " << numSetB << endl;
	cout << "Number of students in At Least One Club: " << unionCount << endl;
	cout << "Number of Students in Both Clubs: " << intersectionCount << endl;
	cout << "Number of Students in the Drama Club but not in the Science Club: " << (numSetA - intersectionCount) << endl;
	cout << "Number of Students in the Science Club but not in the Drama Club: " << (numSetB - intersectionCount) << endl;
	cout << "Number of Students not in any Club: " << (int)UNIVERSAL_SET_SIZE - unionCount ;
}
