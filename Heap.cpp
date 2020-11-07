#include "Heap.hpp"

Heap::Heap() {
    heapSize = 0;
}

//Heap::Heap(istringstream& ss) {
//
//
//
//    for (int i = 0; i < arrSize; i++) {
//            if (numbers[i] == ' ') {
//                x++;
//            } else if(numbers[i] == '-' && numbers[i+1] == '9') {
//                break;
//            } else {
//                int num = 0;
//                num = num * 10 + (numbers[i] - 48);
//                Add(num);
//            }
//        }
//}

void Heap::Add(int newNum) {
    heapArray[heapSize] = newNum;
    heapSize++;
    HeapSort();
}

void Heap::HeapSort() {
    int index = heapSize - 1;
    
    while (ParentExists(index) && heapArray[index + 1] > heapArray[index] ) {
        Swap(ParentPos(index), index);
        index = ParentPos(index);
    }
    
}

bool Heap::ParentExists(int index) {
    return ParentPos(index) >= 0;
}

int Heap::ParentPos(int index) {
    return (index - 1) / 2;
}

void Heap::Swap(int indexA, int indexB) {
    int tempNum = heapArray[indexA];
    heapArray[indexA] = heapArray[indexB];
    heapArray[indexB] = tempNum;
}
