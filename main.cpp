#include "Heap.hpp"

int main() {
    Heap* myHeap = new Heap();
    int userChoice;
    int num = 0;
    
    string input;
    cout << "Enter the positive integers to put in heap, enter -9 to stop.\n";

    getline(cin, input);
    istringstream userInput(input);

    while (userInput >> num) {
        if (num != -9) {
            myHeap->Add(num);
        }
    }
    
    do {
        cout << "1. Display the Max-heap\n" << "2. Add an Item\n" << "3. Remove the Largest Item\n" << "4. Exit\n" << "\nEnter choice: ";
        cin >> userChoice;
    
        switch (userChoice) {
            case 1:
                //Display the Max-Heap
                break;
                
            case 2:
                //Add an item
                cout << "Add item: ";
                cin >> userChoice;
                
                myHeap->Add(userChoice);
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

//void BuildHeap() {
//    Heap tempHeap;
//    string myString;
//    //istringstream input
//    cout << "Enter the positive integers to put in heap, enter -9 to stop.\n";
//    cin >> myString;
//
//    int stringSize = myString.length();
//    int x = 0;
//
//    for (int i = 0; i < stringSize; i++) {
//        if (myString[i] == ' ') {
//            x++;
//        } else if(myString[i] == '-' && myString[i+1] == '9') {
//            break;
//        } else {
//            tempHeap.
//            retArray[x] = retArray[x] * 10 + (myString[i] - 48);
//        }
//    }
//
//}

//int* ConvertStrToArray(string myString) {
//    int stringSize = myString.length();
//    int retArray[100] = { 0 };
//    int x = 0;
//
//    for (int i = 0; i < stringSize; i++) {
//        if (myString[i] == ' ') {
//            x++;
//        } else if(myString[i] == '-' && myString[i+1] == '9') {
//            break;
//        } else {
//            retArray[x] = retArray[x] * 10 + (myString[i] - 48);
//        }
//    }
//
//    return retArray;
//}
