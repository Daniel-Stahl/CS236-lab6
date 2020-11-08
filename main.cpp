#include "Heap.hpp"

int main() {
    Heap myHeap;
    int userChoice;
    int num = 0;
    
    string input;
    cout << "Enter the positive integers to put in heap, enter -9 to stop.\n";

    getline(cin, input);
    istringstream userInput(input);

    while (userInput >> num) {
        if (num != -9) {
            myHeap.Add(num);
        }
    }
    
    myHeap.PrintHeap();
    
    do {
        cout << "1. Display the Max-heap\n" << "2. Add an Item\n" << "3. Remove the Largest Item\n" << "4. Exit\n" << "\nEnter choice: ";
        cin >> userChoice;
    
        switch (userChoice) {
            case 1:
                //Display the Max-Heap
                myHeap.PrintHeap();
                break;
                
            case 2:
                //Add an item
                cout << "Add item: ";
                cin >> userChoice;
                
                myHeap.Add(userChoice);
                break;
                
            case 3:
                //Remove the largest item
                cout << "Remove Item: " << myHeap.DeleteMax() << "\n";
                break;
                
        }
    } while(userChoice != 4);
    
}
