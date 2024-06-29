#include <iostream>
#include <iomanip>

using namespace std;

// Function to convert USD to other currencies
void convertFromUSD(double amount) {
    cout << fixed << setprecision(2);
    cout << "Amount in EUR: " << amount * 0.85 << endl; // Assume 1 USD = 0.85 EUR
    cout << "Amount in GBP: " << amount * 0.75 << endl; // Assume 1 USD = 0.75 GBP
}

// Function to convert EUR to other currencies
void convertFromEUR(double amount) {
    cout << fixed << setprecision(2);
    cout << "Amount in USD: " << amount * 1.18 << endl; // Assume 1 EUR = 1.18 USD
    cout << "Amount in GBP: " << amount * 0.88 << endl; // Assume 1 EUR = 0.88 GBP
}

// Function to convert GBP to other currencies
void convertFromGBP(double amount) {
    cout << fixed << setprecision(2);
    cout << "Amount in USD: " << amount * 1.33 << endl; // Assume 1 GBP = 1.33 USD
    cout << "Amount in EUR: " << amount * 1.14 << endl; // Assume 1 GBP = 1.14 EUR
}

int main() {
    int choice;
    double amount;

    cout << "Currency Converter" << endl;
    cout << "1. Convert from USD" << endl;
    cout << "2. Convert from EUR" << endl;
    cout << "3. Convert from GBP" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the amount: ";
    cin >> amount;

    switch(choice) {
        case 1:
            convertFromUSD(amount);
            break;
        case 2:
            convertFromEUR(amount);
            break;
        case 3:
            convertFromGBP(amount);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
