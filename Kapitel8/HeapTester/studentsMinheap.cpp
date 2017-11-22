#include "studentsMinheap.h"
#include "assert.h"


MinHeap::MinHeap(int sizeOfArray)
    :_sizeOfArray(sizeOfArray)
{    
    _theArray = new int[_sizeOfArray];
    _size = 0;
}



void MinHeap::insert(int data){
    assert( !isFull() );

    _size += 1;
    int ixHole = _size;

    while (ixHole > 1 && _theArray[ixHole/2] > data) {
        _theArray[ixHole] = _theArray[ixHole/2];
        ixHole /= 2;
    }
    _theArray[ixHole] = data;
}

void MinHeap::deleteMin()
{
    assert( !isEmpty() );

    _theArray[1] = _theArray[_size];
    --_size;
    percolateDown(1);

}

int MinHeap::min()
{
    assert( _size>0);

    return _theArray[1];

}

void MinHeap::percolateDown(int ix)
{
    int value = _theArray[ix];

    while( ix*2 <= _size ){
        int ixKid = ix*2;
        if (ixKid != _size && _theArray[ixKid+1] < _theArray[ixKid])
            ++ixKid;
        if (_theArray[ixKid] >= value)
            break;
        _theArray[ix] = _theArray[ixKid];
        ix = ixKid;
    }
    _theArray[ix] = value;

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
