#include <iostream>
using namespace std;

int main() {
    // Initialize account balance and withdrawal amount
    int balance = 1000;   // Starting account balance
    int withdraw = 300;   // Amount to withdraw

    // Check if withdrawal is valid (positive amount and sufficient funds)
    if (withdraw <= balance && withdraw > 0) {
        // Process the withdrawal
        balance -= withdraw;  // Deduct amount from balance
        cout << "Withdrawal successful\n";  // Confirm withdrawal
    } else {
        // Handle invalid withdrawal attempt
        cout << "Invalid transaction\n";  // Not enough funds or invalid amount
    }

    // Display remaining balance
    cout << "Remaining balance: " << balance << endl;
    
    return 0;  // Program ends successfully
}