#ifndef MYFLOATARRAY_H
#define MYFLOATARRAY_H

#include <assert.h>



class MyFloatArr
{
    int    _capacity;
    int    _size;
    float* _theArray;

public:

    using iterator = float*;

    MyFloatArr(int capacity=100) : _capacity(capacity), _size(0)     { _theArray = new float[_capacity]; }
    ~MyFloatArr()             { delete[] _theArray; _theArray = nullptr; }

    void push_back(float data)   { assert(_size<_capacity); _theArray[_size++] = data; }

    iterator begin()  { return nullptr; } // TODO
    iterator end()    { return nullptr; } // TODO


};


#endif // MYFLOATARRAY_H
