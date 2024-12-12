//
//  main.cpp
//  secukit
//
//  Created by Markus Jarvis on 12/12/24.
//

#include <iostream>

using namespace std;

int displayMenu() {
    
    int option;
    
    cout << "------------------------------------" << endl;
    cout << "1. Password Generator" << endl;
    cout << "2. Port Scanner" << endl;
    cout << "3. Exit" << endl;
    cout << endl;
    cout << "Please pick a option: ";
    cin >> option;
    
    return option;
}

int main(int argc, const char * argv[]) {
    
    
    cout << displayMenu() << endl;
    
    
    return 0;
}
