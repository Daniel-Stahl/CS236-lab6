#include "Heap.hpp"

Heap::Heap() {
    heapSize = 0;
}

void Heap::Add(int newNum) {
    if (heapSize + 1 >= vect.size()) {
        vect.push_back(0);
    }
    
    vect[++heapSize] = newNum;
    HeapUp(heapSize);
}

void Heap::HeapUp(int x) {
    if (x > heapSize) return;
    if (x == 1) return;
    
    if (vect[x] > vect[ParentPos(x)]) {
        swap(vect[ParentPos(x)], vect[x]);
    }
    
    HeapUp(ParentPos(x));
}

void Heap::HeapDown(int x) {
    if (x > heapSize) return;
    
    int tempIndex = x;
    
    if (LeftChildPos(x) <= heapSize && vect[x] < vect[LeftChildPos(x)]) {
        tempIndex = LeftChildPos(x);
    }
    
    if (RightChildPos(x) <= heapSize && vect[tempIndex] < vect[RightChildPos(x)]) {
        tempIndex = RightChildPos(x);
    }
    
    if (tempIndex != x) {
        Swap(vect[x], vect[tempIndex]);
        HeapDown(tempIndex);
    }
    
    return;
}

int Heap::ParentPos(int index) {
    return index / 2;
}

int Heap::LeftChildPos(int index) {
    return index * 2;
}

int Heap::RightChildPos(int index) {
    return (index * 2) + 1;
}

void Heap::Swap(int indexA, int indexB) {
    int tempNum = vect[indexA];
    vect[indexA] = vect[indexB];
    vect[indexB] = tempNum;
}

int Heap::DeleteMax() {
    int maxNum = vect[1];
    Swap(vect[1], vect[heapSize--]);
    HeapDown(1);
    return maxNum;
}

//void Heap::PrintHeap() {
//    for (int i = 0; i < heapSize; i++) {
//        cout << heapArray[i] << " ";
//    }
//    cout << "\n";
//}
