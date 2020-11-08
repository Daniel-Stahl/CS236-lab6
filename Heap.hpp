#define MAX 100
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

class Heap {
public:
    Heap();
    void Add(int newNum);
    void HeapUp(int x);
    void HeapDown(int x);
    int DeleteMax();
    void Swap(int indexA, int indexB);
    void PrintHeap();
    void DeleteHeap(Heap* myHeap);
    
private:
    int heapSize;
    vector<int> vect = {0};
    int ParentPos(int index);
    int LeftChildPos(int index);
    int RightChildPos(int index);
};
