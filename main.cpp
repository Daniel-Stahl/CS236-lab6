#include <iostream>
#include "Heap.hpp"

using namespace std;

int main() {
    int userChoice;
    Heap myHeap;
    
    do {
    cout << "Enter the positive integers to put in heap, enter -9 to stop." << endl;
    cin >> userChoice;
    
    
    
    switch (userChoice) {
        case 1:
            //Display the Max-Heap
            break;
            
        case 2:
            //Add an item
            cout << "Add item: ";
            cin >> userChoice;
            
            myHeap.add(userChoice);
            break;
            
        case 3:
            //Remove the largest item
            break;
        case 4:
            //Exit
            break;
    }
    } while(userChoice != 4);
    
}
