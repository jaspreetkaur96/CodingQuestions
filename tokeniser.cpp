#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char str[] = "Get me done with this fast";

    char *ptr;
    ptr = strtok(str, " ");
    while(ptr!=NULL){
        cout<<ptr<<endl;
        ptr=strtok(NULL, " ");
    }
}