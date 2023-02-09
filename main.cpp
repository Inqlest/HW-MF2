#include "counter.h"
#include <iostream>

using namespace std;


int main(){
    bool correct_input = 1;
    char choice;
    int start;
    do {
    cout << "Do you want to specify the initial value of the counter? Enter y / n: " << endl;
    cin >> choice;
    if(choice == 'n'){
       start = 1;
       correct_input = 0;
    }
    else if (choice == 'y'){
        cout << "Enter the initial counter value: " <<endl;
        cin >> start;
        correct_input = 0;
    }
    else {
        cout << "Wrong choice" << endl;
    }
    } while(correct_input == 1);
    Counter ct(start);

    while(true){
        cout << "\nEnter command ('+', '-', '=' or 'x'): ";
        cin >> choice;
        switch(choice){
            case '+': 
            ct.add();
            break;
            case '-':
            ct.reduce();
            break;
            case '=':
            cout << ct.out() << endl;;
            break;
            case 'x':
            return 0;
            break;
            default:
            cout << "Wrong choice " << endl;
        }
    }
}