//
//  main.cpp
//  secukit
//
//  Created by Markus Jarvis on 12/12/24.
//

#include <iostream>
#include <string>

using namespace std;

void displayMenu() {
        
    cout << "------------------------------------" << endl;
    cout << "        SecuKit CLI Suite" << endl;
    cout << "------------------------------------" << endl;
    cout << "1. Password Generator" << endl;
    cout << "2. Port Scanner" << endl;
    cout << "0. Exit" << endl;
    cout << endl;
    cout << "Please pick a option: ";
}

void passwordGenerator(){
    cout << "Password Generator Selected." << endl;
}

void portScanner() {
    cout << "Password Scanner Selected." << endl;
}

int main(int argc, const char * argv[]) {
    
    int choice;

    do {
        displayMenu();
        cin >> choice;
        
        if (cin.fail() || choice < 0 || choice > 2) {
            cin.clear();    // clear error
            cout << "Invalid choice. Please enter a number between 0 and 3: \n";
            continue;
        }
        
        switch (choice) {
            case 1:
                passwordGenerator();
                break;
            case 2:
                portScanner();
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid Choice. Try again.\n";
                
        }
    } while (choice != 0);
    
    
    return 0;
}


