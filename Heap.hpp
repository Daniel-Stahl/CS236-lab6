#define MAX 100

class Heap {
public:
    Heap();
    void HeapSort();
    void add(int newNum);
    bool ParentExists(int index);
    int ParentPos(int index);
    void Swap(int indexA, int indexB);
    
private:
    int heapSize;
    int* heapArray = new int[100];
};
