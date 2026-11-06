#include <iostream> using namespace std;

int main() { const int SENTINEL = -99;


int number;
int smallest;
int largest;
bool hasData = false;

cout << "Enter integers (-99 to stop): ";
cin >> number;

while (number != SENTINEL) {
    if (!hasData) {
        // Initialize both values using the first actual number.
        smallest = number;
        largest = number;
        hasData = true;
    }
    else {
        // Update the smallest and largest when necessary.
        if (number < smallest) {
            smallest = number;
        }

        if (number > largest) {
            largest = number;
        }
    }

    cin >> number;
}

if (!hasData) {
    cout << "No data values were entered." << endl;
}
else {
    cout << "Smallest value: " << smallest << endl;
    cout << "Largest value: " << largest << endl;
}

return 0;
}
