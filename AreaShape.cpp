#include <iostream>
using namespace std;

void square() {
    float side;
    cout << "Enter side: ";
    cin >> side;
    cout << "Area = " << side * side << endl;
}

void rectangle() {
    float length, width;
    cout << "Enter length and width: ";
    cin >> length >> width;
    cout << "Area = " << length * width << endl;
}

void triangle() {
    float base, height;
    cout << "Enter base and height: ";
    cin >> base >> height;
    cout << "Area = " << 0.5 * base * height << endl;
}

int main() {
    int choice = 0;

    while (choice != 4) {
        cout << "\nPlease select the area of the shape to calculate\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Quit Program\n";
        cout << "Enter selection: ";
        cin >> choice;

        switch (choice) {
            case 1:
                square();
                break;
            case 2:
                rectangle();
                break;
            case 3:
                triangle();
                break;
            case 4:
                cout << "Program ended.\n";
                break;
            default:
                cout << "Invalid input! Please enter a valid input.\n";
        }
    }

    return 0;
}