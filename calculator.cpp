#include<iostream>
using namespace std;

int main(){
    int num1, num2, input;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;

    cout<<"Options:";
    cout<<"1. Addition";
    cout<<"2. Subtract";
    cout<<"Input: ";
    cin>>input;

    switch(input){
        case 1: cout<<num1 +num2;
            break;
        case 2: cout<<num1 - num2;
            break;
        default: cout<<"Invalid input";
    }

    return 0;
}