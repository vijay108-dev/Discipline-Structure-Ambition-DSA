#include <iostream>
using namespace std;
int main() {
// int sum=0;
// // Loop method
// for(int i =1; i<=100; i++){
//     sum+=i;
// }
// cout<<"Sum from 1 to 100: "<<sum<<endl;

// // Formula method 
// int n=100;
// int formulaSum =n*(n+1)/2;
// cout<<"Sum using formula:"<<formulaSum <<endl;



// if you want to take input from user so you will take n and sum as an inpu also how look 
int n;
int sum =0;
cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++) 
    {
        sum +=i;
    }
    cout<< "Sum from 1 to "<<n<<": "<<sum<<endl;
    
    return 0;
}
