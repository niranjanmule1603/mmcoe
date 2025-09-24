#include <iostream>
#include <string>
using namespace std;
class PrinterSpooler {
private:
string* queue;
int capacity;
int front, rear;
public:
PrinterSpooler(int cap) {
capacity = cap;
queue = new string[capacity];
front = rear = -1;
}
void enqueue(const string &job) {
if ((rear + 1) % capacity == front) {
cout << "Queue is full! Cannot add more print jobs." << endl;
return;
}
if (front == -1) {
front = rear = 0;
} else {
rear = (rear + 1) % capacity;
}
queue[rear] = job;
cout << "Print job '" << job << "' added to the queue." << endl;
}
void dequeue() {
if (front == -1) {
cout << "Queue is empty! No jobs to process." << endl;
return;
}
string job = queue[front];
cout << "Processing print job '" << job << "'..." << endl;
if (front == rear) {
front = rear = -1;
} else {
front = (front + 1) % capacity;
}
}
void displayQueue() {
if (front == -1) {
cout << "Queue is empty." << endl;
return;
}
cout << "Current print jobs in the queue: ";
int i = front;
while (true) {
cout << queue[i] << " ";
if (i == rear) break;
i = (i + 1) % capacity;
}
cout << endl;
}
};
int main() {
int capacity;
cout << "Enter the capacity of the printer spooler: ";
cin >> capacity;
PrinterSpooler spooler(capacity);
int choice;
string job;
do {
cout << "\nPrinter Spooler Menu:\n";
cout << "1. Add a print job (enqueue)\n";
cout << "2. Process a print job (dequeue)\n";
cout << "3. Display all print jobs\n";
cout << "4. Exit\n";
cout << "Enter your choice: ";
cin >> choice;
switch(choice) {
case 1:
cout << "Enter the name of the print job: ";
cin.ignore();
getline(cin, job);
spooler.enqueue(job);
break;
case 2:
spooler.dequeue();
break;
case 3:
spooler.displayQueue();
break;
case 4:
cout << "Exiting the Printer Spooler system..." << endl;
break;
default:
cout << "Invalid choice! Please try again." << endl;
}
} while (choice != 4);
return 0;
}