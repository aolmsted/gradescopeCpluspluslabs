#include <iostream>
using namespace std;

int main() {
    int quarters,dimes,nickels,pennies,dollars,cents,total;
    cout << "Please enter the amount of money to convert:\n";
    cout << "# of dollars: ";
    cin >> dollars;
    cout << "# of cents: ";
    cin >> cents; 
    total = dollars * 100 + cents;
    quarters = total / 25;
    total = total % 25;
    dimes = total / 10;
    total = total % 10;
    nickels = total / 5;
    pennies = total % 5;
    printf("The coins are %i quarters, %i dimes, %i nickels and %i pennies",quarters,dimes,nickels,pennies);
    return 0;
}