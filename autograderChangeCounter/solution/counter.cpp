#include <iostream>
using namespace std;

int main() {
    int quarters,dimes,nickels,pennies,dollars,cents,total;
    cout << "Please enter the number of coins:\n";
    cout << "# of quarters: ";
    cin >> quarters;
    cout << "# of dimes: ";
    cin >> dimes; 
    cout << "# of nickels: ";
    cin >> nickels;
    cout << "# of pennies: ";
    cin >> pennies;
    total = quarters * 25 + dimes * 10 + nickels * 5 + pennies;
    dollars = total / 100;
    cents = total % 100;
    printf("The total is %i dollars and %i cents",dollars,cents);
    return 0;
}