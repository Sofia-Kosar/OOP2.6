#include "Date.h"
#include <iostream>

using namespace std;

int main() {
    Date::Triad t1 = Date::Triad(), t2 = Date::Triad();
    Date d1, d2;

    cout << "Enter values for the first triad:" << endl;
    cin >> t1;
    cout << "Enter values for the second triad:" << endl;
    cin >> t2;

    d1 = Date(t1);
    d2 = Date(t2);

    cout << "First date: " << d1 << endl;
    cout << "Second date: " << d2 << endl;

    
    if (d1 <= d2) {
        cout << "First date is less than or equal to the second date." << endl;
    }
    else {
        cout << "First date is greater than the second date." << endl;
    }

    if (d1 < d2) {
        cout << "First date is less than the second date." << endl;
    }
    else {
        cout << "First date is greater or equal than the second date." << endl;
    }

    if (d1 == d2) {
        cout << "First date is equal to the second date." << endl;
    }
    else {
        cout << "First date is not equal to the second date." << endl;
    }

    if (d1 != d2) {
        cout << "First date is not equal to the second date." << endl;
    }
    else {
        cout << "First date is equal to the second date." << endl;
    }

    if (d1 > d2) {
        cout << "First date is greater than the second date." << endl;
    }
    else {
        cout << "First date is less than or equal to the second date." << endl;
    }

    if (d1 >= d2) {
        cout << "First date is greater or equal than the second date." << endl;
    }
    else {
        cout << "First date is less than the second date." << endl;
    }

    return 0;
}
