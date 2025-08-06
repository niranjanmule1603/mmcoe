#include <iostream>
using namespace std;

class Temperature {
private:
    float temperature[3][4];

public:
    void getData() {
        for (int i = 0; i < 3; ++i) {
            cout << "Enter temperature for City " << i + 1 << " over 4 days:\n";
            for (int j = 0; j < 4; ++j) {
                cout << "Day " << j + 1 << ": ";
                cin >> temperature[i][j];
            }
        }
    }

    void putData() {
        cout << "\nTemperature Data:\n";
        cout << "City\\Day ";
        for (int j = 0; j < 4; ++j) {
            cout << "Day " << j + 1 << "  ";
        }
        cout << "Average\n";

        for (int i = 0; i < 3; ++i) {
            float sum = 0;
            cout << "City " << i + 1 << "    ";
            for (int j = 0; j < 4; ++j) {
                cout << temperature[i][j] << "    ";
                sum += temperature[i][j];
            }
            cout << sum / 4 << endl;
        }
    }
};

int main() {
    Temperature tempData;

    tempData.getData();
    tempData.putData();

    return 0;
}

