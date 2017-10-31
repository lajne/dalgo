#include "studentsarrstack.h"
#include <assert.h>


AStack::AStack() {
    _capacity = 10;
    _size = 0;
    _theArr = new float[_capacity];
}

AStack::~AStack() {
    delete _theArr;
}

void AStack::pushBack(float value) {
    if(_size == _capacity){
        float tmpArr[_capacity];
        for(int i = 0; i < _size; i++){
            tmpArr[i] = _theArr[i];
        }
        _capacity = _capacity * 2;
        delete[] _theArr;
        _theArr = new float[_capacity];
        for(int i = 0; i < _size; i++){
            _theArr[i] = tmpArr[i];
        }
    }
    _theArr[_size] = value;
    _size++;
}


float &AStack::back() {
    return _theArr[_size-1];
}

void AStack::popBack() {
    _size--;
}

int AStack::size() {
    return _size;
}


