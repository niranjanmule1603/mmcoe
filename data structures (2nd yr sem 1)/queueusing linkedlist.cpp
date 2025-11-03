#include <iostream>
using namespace std;

enum ShopMenu
{
	NEW_CUSTOMER = 1,
	SERVE_CUSTOMER,
	DISPLAY,
	EXIT
};

class Node
{
public:
	string sName;
	Node* pNode;

	Node(void)
	{
		sName = "";
		pNode = nullptr;
	}
	
	~Node(void)
	{
	}
};

class Queue
{
private:
	Node* pHead;
	Node* pRear;
	
public:
	Queue(void)
	{
		pHead = nullptr;
		pRear = nullptr;
	}
	
	void enqueue(string sNameOfNewCustomer)
	{	
		Node* pNewNode = new Node;
		pNewNode->sName = sNameOfNewCustomer;
		pNewNode->pNode = nullptr;
		
		if(pHead == nullptr)
		{
			pHead = pRear = pNewNode;
		}
		else
		{ 
			pRear->pNode = pNewNode;
			pRear = pNewNode;
		}
	}
	
	void display(void)
	{
		if(pHead == nullptr)
		{
			cout << "The Queue is Empty\n";
		}
		else
		{
			cout << "Customers In Line: ";
        
			Node* pTemp = pHead;
			while (pTemp != nullptr)
			{
				cout << pTemp->sName;
				if (pTemp->pNode != nullptr) {
					cout << " -> ";
				}
				pTemp = pTemp->pNode;
			}
			cout << "\n";
		}	
	}

	void dequeue(void)
	{
		if(pHead == nullptr)
		{
			cout << "No customer remaining to serve\n";
		}
		else
		{
			cout << pHead->sName << "'s order is ready\n";
			Node* pTemp = pHead;
			pHead = pHead->pNode;
			if (pHead == nullptr) {
				pRear = nullptr;
			}
			delete pTemp;
		}
	}
	
	~Queue(void)
	{
		while (pHead != nullptr) {
			dequeue();
		}
	}
};

int main(void)
{
	int iChoice = 0;
	string sTemp = "";
	
	Queue Q;
	
	while(iChoice != 4)
	{
		cout << "Coffee shop menu\n";
		cout << "1. New Customer Arrival (Enqueue)\n";
		cout << "2. Serve Customer (Dequeue)\n";
		cout << "3. Show Queue\n";
		cout << "4. Exit\n\n";
	
		cout << "Choose an option: ";
		cin >> iChoice;
		
		switch(iChoice)
		{
			case NEW_CUSTOMER:
				cout << "Enter customer name: ";
				cin >> sTemp;
				Q.enqueue(sTemp);
				cout << endl;
				break;
				
			case SERVE_CUSTOMER:
				Q.dequeue();
				break;
				
			case DISPLAY:
				Q.display();
				break;
				
			case EXIT:
				break;
		}
	}
	
	cout << "\n--------------EXITING--------------\n";
}