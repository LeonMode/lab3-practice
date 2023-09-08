#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int number1;
    int number2;

    cout<< "IS x LARGER THAN y?\n" << endl;
    cout<< "Enter interger x: "<< endl;
    cin >> number1;

    cout<< "Enter interger y: "<< endl;
    cin>> number2;


    if(number1 > number2){
        cout<<"\nWhy yes it is.\n"<<endl;
    }
    else if(number2 > number1){
        cout<<"\nAbsolutely NOT. Why would you think that?\n"<<endl;
    }
    else{
        cout<<"\nIs this a trick? Write something else!\n";
    }


}
