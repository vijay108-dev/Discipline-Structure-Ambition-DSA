#include <iostream>
using namespace std;


//First n terms of the Fibonacci series

int main(){
    int n;
    cout<<"Enter the number:"<<" ";
    cin>>n;

    int a=0, b=1;  
    for (int i =0;i<n;i++){
        cout <<a<< " ";  // print current term
        int next = a + b;  
        a = b;             
        b = next;          
    }


    return 0;
}