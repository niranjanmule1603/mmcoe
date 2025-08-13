#include <iostream>
using namespace std;
int main() {
int players[10];
int n;
cout << "Enter number of players: ";
cin >> n;
cout << "Enter the scores of the players:" << endl;
for (int i = 0; i < n; i++) {
cin >> players[i];
}
for (int i = 0; i < n - 1; i++) {
cout<<"Pass "<<i+1<<endl;
for (int j = 0; j < n - i - 1; j++) {
if (players[j] > players[j + 1]) {
cout<<" swap "<<players[j]<<" with "<<players[j+1];
cout<<endl;
int temp = players[j];
players[j] = players[j + 1];
players[j + 1] = temp;
}
}
}
cout << "Sorted scores: ";
for (int i = 0; i < n; i++) {
cout << players[i] << " ";
}
cout << endl;
return 0;
}
