#include <iostream>
using namespace std;

int main() {
    double distance, fare;
    int choice;
    string promo;

    cout << "=== Grab Fare Calculator ===\n";
    cout << "Enter distance (km): ";
    cin >> distance;

    cout << "\nChoose ride type:\n";
    cout << "1. Standard (Base RM5 + RM1/km)\n";
    cout << "2. Grab 6-seater (Base RM8 + RM2/km)\n";
    cout << "3. Premium (Base RM10 + RM3/km)\n";
    cout << "Choice: ";
    cin >> choice;

    switch(choice) {
        case 1: fare = 5 + (1 * distance); break;
        case 2: fare = 8 + (2 * distance); break;
        case 3: fare = 10 + (3 * distance); break;
        default: 
            cout << "Invalid choice! Exiting program.\n"; 
            return 0;
    }

    cout << "\nDo you have a promo code? : ";
    cin >> promo;
    if (promo == "GRAB10" ) {
        fare = fare * 0.9; // 10% discount
        cout << "Promo code applied! New fare: " << fare << endl;
    } else {
        cout << "Invalid promo code or no discount applied. Fare: " << fare << endl;
    }

    cout << "\nEstimated Fare: RM " << fare << endl;
    cout << "Thank you for using Grab Fare Calculator!" << endl;

return 0;
}