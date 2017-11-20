#include "studentsMinheap.h"
#include "assert.h"


MinHeap::MinHeap(int sizeOfArray)
    :_sizeOfArray(sizeOfArray)
{    
    _theArray = new int[_sizeOfArray];
    _size = 0;
}



void MinHeap::insert(int data){
    assert( !isFull() );   // krascha om full

    // TODO !!

}

void MinHeap::deleteMin()
{
    assert( !isEmpty() );

    // TODO !!

}

int MinHeap::min()
{
    assert( _size>0);

    // TODO !!

}

void MinHeap::percolateDown(int ix)
{
    // TODO !!

}

int MinHeap::size()
{
    return _size;
}


// Fyller heapens array med data utan att organisera det i en heap-struktur.
// (detta gör man istället interaktiv)
void MinHeap::fillArrayWithData(int *newData, int size)
{
    assert( size<_sizeOfArray);

    for (int i=1; i<=size ; i+=1)
        _theArray[i] = newData[i];
    _size = size;
}
