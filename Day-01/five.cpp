#include <iostream>
using namespace std;


 //Sum of all odd numbers from 1 to 100
int main() {
  int n;
  cout<<"Enter the number:"<<" ";
  cin>>n;
    int sum =0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){ // Odd check
            sum += i;
        }
    }
    cout<<sum<<" ";
    return 0;
}