#include <iostream>
#include <string>

// Global variables to store wallet balances
double sendingWalletBalance = 1000.55;    // Initial sender's balance
double receivingWalletBalance = 500.45;   // Initial receiver's balance

int main() {
    double sendAmount;  // Amount to be transferred
    
    // Prompt user for transfer amount
    std::cout << "Enter the amount to send: ";
    std::cin >> sendAmount;  // Read user input for transfer amount

    // Calculate gas fees (2% of the send amount)
    double gasFees = (sendAmount * 2) / 100;
    double totalDeduction = sendAmount + gasFees;

    // Validate and process the transfer
    if (sendAmount > 0 && totalDeduction <= sendingWalletBalance) {
        // Deduct from sender (amount + gas fees) and add amount to receiver
        sendingWalletBalance -= totalDeduction;
        receivingWalletBalance += sendAmount;
        
        std::cout << "Transaction successful!" << std::endl;
        std::cout << "Gas fees: " << gasFees << std::endl;
    } else {
        // Error message for invalid amount or insufficient funds
        std::cout << "Invalid amount or insufficient funds (including gas fees)!" << std::endl;
    }

    // Display updated balances
    std::cout << "Sending wallet balance: " << sendingWalletBalance << std::endl;
    std::cout << "Receiving wallet balance: " << receivingWalletBalance << std::endl;
    
    return 0;  // End of program
}