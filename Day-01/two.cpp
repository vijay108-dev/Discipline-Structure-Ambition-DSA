#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=2;i<=n;i+=2){ // only even numbers
        sum +=i;
    }
    cout<<"Sum of even numbers from 1 to "<<n<< ": " <<sum<< endl;



    // Number of even numbers = n/2
    int x = n / 2;  
    int formulaSum = x * (x + 1); // formula sum = k*(k+1)
    cout<< "Sum using formula: " <<formulaSum<<endl;

    return 0;
}
