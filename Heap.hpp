#define MAX 100
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

class Heap {
public:
    Heap();
    void HeapSort();
    void Add(int newNum);
    void HeapUp(int x);
    void HeapDown(int x);
    int DeleteMax();
    void Swap(int indexA, int indexB);
    //void PrintHeap();
    bool isEmpty() const {return heapSize == 0;};
    int getMax() const { return vect[1];};
    
private:
    int heapSize;
    vector<int> vect = {0};
    int ParentPos(int index);
    int LeftChildPos(int index);
    int RightChildPos(int index);
};
