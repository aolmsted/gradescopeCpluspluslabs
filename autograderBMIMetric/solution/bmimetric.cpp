#include <iostream>
#include <math.h> 
using namespace std;

int main() {
    float weight,height,bmi;
    cout << "Please enter weight in kilograms: ";
    cin >> weight;
    cout << "Please enter height in meters: ";
    cin >> height;
    bmi = weight / pow(height,2);
    printf("BMI is: %3.2f",bmi);
    return 0;
}    