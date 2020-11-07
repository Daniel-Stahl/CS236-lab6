#define MAX 100
#include <sstream>
#include <string>
using namespace std;

class Heap {
public:
    Heap();
    //Heap(istringstream& ss);
    void HeapSort();
    void Add(int newNum);
    bool ParentExists(int index);
    int ParentPos(int index);
    void Swap(int indexA, int indexB);
    
private:
    int heapSize;
    int* heapArray = new int[100];
};
