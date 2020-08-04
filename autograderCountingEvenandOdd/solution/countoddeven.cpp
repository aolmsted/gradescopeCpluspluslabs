#include <iostream>
using namespace std;

int main() {
    int num;
    int countEvens, countOdds;
    
    cout<<"Please enter 4 positive integers, separated by a space:"<<endl;
    
    countEvens = 0;
    countOdds = 0;
    
    cin>>num;
    if((num % 2) == 1)
        countOdds += 1;
    else
        countEvens += 1;
    
    cin>>num;
    if((num % 2) == 1)
        countOdds += 1;
    else
        countEvens += 1;
    
    cin>>num;
    if((num % 2) == 1)
        countOdds += 1;
    else
        countEvens += 1;
    
    cin>>num;
    if((num % 2) == 1)
        countOdds += 1;
    else
        countEvens += 1;
    
    if(countEvens > countOdds)
        cout<<"more evens"<<endl;
    else if (countOdds > countEvens)
        cout<<"more odds"<<endl;
    else
        cout<<"same number of evens and odds"<<endl;
    
    
    return 0;
}
