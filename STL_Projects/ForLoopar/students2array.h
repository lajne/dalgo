#ifndef STUDENTS2ARRAY_H
#define STUDENTS2ARRAY_H

#include <assert.h>

template <typename T> class MyArr
{
    // TODO
    int    _capacity;
    int    _size;
    T*     _theArray;

public:

    using iterator = T*;
    MyArr(int capacity = 100) : _capacity(capacity), _size(0)    { _theArray = new T[_capacity]; }  // TODO
    ~MyArr()             { delete [] _theArray; _theArray = nullptr; }   // TODO

    void push_back(T data)   {  assert(_size<_capacity);  _theArray[_size++] = data; }  // TODO

    iterator begin(){ return _theArray; }  // TODO, fel, byt ut
    iterator end()  { return &_theArray[_size]; }  // TODO, fel, byt ut

};


#endif // STUDENTS2ARRAY_H
