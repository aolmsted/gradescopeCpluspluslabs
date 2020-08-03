#include <iostream>
#include <math.h> 
#include <string>

using namespace std;

int main() {
    float weight,height,bmi;
    string status;
    cout << "Please enter weight in kilograms: ";
    cin >> weight;
    cout << "Please enter height in meters: ";
    cin >> height;
    bmi = weight / pow(height,2);
    if(bmi < 18.5)
        status = "Underweight";
    else if(bmi < 25)
        status = "Normal";
    else if(bmi < 30)
        status = "Overweight";
    else
        status = "Obese";
    printf("BMI is: %3.2f, Status is ",bmi);
    cout << status;
    return 0;
}        
