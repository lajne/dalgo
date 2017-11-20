#ifndef MINHEAP_H
#define MINHEAP_H


class MinHeap
{

public:
    MinHeap(int sizeOfArray);

    void insert(int data);

    void deleteMin();
    int  min();

    void percolateDown(int ix);

    int  size();
    bool isFull() { return _size >= (_sizeOfArray-1); }
    bool isEmpty() { return _size == 0; }

    void clear()   { _size = 0; }

    int  dataAtIndex(int index) { return _theArray[index]; }
    void fillArrayWithData(int* newData, int size);
private:

    int  _sizeOfArray;
    int  *_theArray;
    int  _size;




};

#endif // MINHEAP_H
