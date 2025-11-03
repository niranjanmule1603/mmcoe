#include <iostream>
using namespace std;

// macros
#define NUMBER_OF_TASKS 10

class Node
{
public:
	// class data members
	unsigned int uiCount;
	unsigned int uiPriority;
	unsigned int uiTimeRequired;
	Node *pNext;
	
public: 
	// constructor
	Node()
	{
		uiCount = 0;
		uiPriority = 0;
		uiTimeRequired = 0;
		pNext = nullptr;
	}
	
	// Node Operations
	void takeNodeInput(unsigned int uiCountToGive)
	{
		// code
		uiCount = uiCountToGive;
		cout << "Enter Priority for Node: ";
		cin >> uiPriority;
		cout << "Enter Time of Execution for Node: ";
		cin >> uiTimeRequired;
		cout << endl;
	}
	
	void displayNodeOutput(void)
	{
		// code
		cout << "Task Number: " << uiCount << endl;
		cout << "Task Priority: " << uiPriority << endl;
		cout << "Task Execution Time: " << uiTimeRequired << endl;
		cout << "Next Node Address: " << pNext << endl;
	}
	
	void addNodeInLink(void)
	{
		// code
		pNext = new Node();
	}
};

int main(void)
{
	// variable declarations
	Node *pHead = new Node();
	Node *pTemp = pHead;
		
	for(int i = 0; i < NUMBER_OF_TASKS; i++)
	{
		if(i < NUMBER_OF_TASKS - 1)
		{
			pTemp->addNodeInLink();
		}
		
		pTemp->takeNodeInput(i + 1);
		
		pTemp = pTemp->pNext;
	}
	
	pTemp = pHead;
	
	for(int i = 0; i < NUMBER_OF_TASKS; i++)
	{
		pTemp->displayNodeOutput();
		
		pTemp = pTemp->pNext;
	}
	
	
}