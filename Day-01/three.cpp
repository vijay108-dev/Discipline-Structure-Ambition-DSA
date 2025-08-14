#include <iostream>
using namespace std;

//Factorial of a given number

int main() {
    int n;
    cout<<"Enter the numuber: "<<endl;
    cin >> n; 
   
    int fact=1; 
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }

    cout << fact;
    return 0;
}
