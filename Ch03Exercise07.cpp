#include <iostream>
#include <iomanip>
using namespace std;

double calc(double netBalance, double payment, int d1, int d2);
void output(double interest);

int main() {
    double netBalance, payment, interestRate, interest;
    int d1, d2;

    cout << "Insert the net Balance: ";
    cin >> netBalance;
    
    cout << "Insert your payment: ";
    cin >> payment;

    cout << "Insert the number of days in the billing cycle: ";
    cin >> d1;

    cout << "Insert the number of days the payment is made before the billing cycle: ";
    cin >> d2;
    
    interest = calc(netBalance, payment, d1, d2);
    
    cout << "The interest is: ";
    output(interest);

}

double calc(double netBalance, double payment, int d1, int d2) {
    double interestRate = 0.0152;
    double averageDailyBalance;
    double interest;

    averageDailyBalance = (netBalance * d1 - payment * d2) / d1;
    interest = averageDailyBalance * interestRate;

    return interest;
}

void output(double interest){
    cout << fixed << setprecision(2);

    cout << interest << endl;
}
