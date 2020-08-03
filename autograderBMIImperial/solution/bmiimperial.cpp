#include <iostream>
#include <math.h> 
using namespace std;

int main() {
    float weight,height,kilo,meters,bmi;
    cout << "Please enter weight in pounds: ";
    cin >> weight;
    cout << "Please enter height in inches: ";    
    cin >> height;
    kilo = weight * 0.453592;
    meters = height * .0254;
    bmi = kilo / pow(meters,2);
    printf("BMI is: %3.2f",bmi);
    return 0;
}    