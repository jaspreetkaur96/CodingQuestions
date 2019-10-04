#include<iostream>
using namespace std;

int power(int x, int n);
int spower(int x, int n);

int main(int argc, char** argv){


 cout<<spower(3, 6);

}

int power(int x,int n){

if(n==0){
    return 1;
}

 int ans = x * power( x, n-1);
 return ans;

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

