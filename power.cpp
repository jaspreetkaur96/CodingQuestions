#include<iostream>
using namespace std;

int power(int x, int n);
int spower(int x, int n);

int main(){
    int x,n,choice;
    
    // Take input from user
    cout<<"Enter base and power (separated by space): ";
    cin>>x>>n;

    // Take choice from user
    cout<<"Press 1 for power(x,n) and 2 for spower(x,n): ";
    cin>>choice;
    
    switch(choice){
        case 1: cout<<power(x,n);
                break;
        case 2: cout<<spower(x,n);
                break;
        default: break;
    }
}

/*
    power
    -----
    calculating x^n using recursion
*/
int power(int x,int n){
    if(n==0){
        return 1;
    }
    return x * power(x,n-1);
}

int spower(int x,int n){
    if(n==0){
        return 1;
    }
    int sp = spower(x, n/2);
    int ans = sp * sp;

    if(n%2==1){
        ans = ans * x;
    }
    return ans;
}
