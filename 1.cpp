#include <iostream>

using namespace std;

int main() {
    double speed, time;

    // Get speed from user, input validation: not negative
    do {
        cout << "Enter the speed of the vehicle (in miles per hour): ";
        cin >> speed;
    } while (speed < 0);

    // Get time from user, input validation: not less than 1
    do {
        cout << "Enter the time traveled (in hours): ";
        cin >> time;
    } while (time < 1);

    // Display distance traveled for each hour
    cout << "Hour\tDistance Traveled\n";
    cout << "------------------------\n";
    for (int i = 1; i <= time; i++) {
        double distance = speed * i;
        cout << i << "\t" << distance << endl;
    }

    return 0;
}
