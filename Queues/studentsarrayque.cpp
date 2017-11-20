#include "studentsarrayque.h"
#include "assert.h"


AQue::AQue() {
    _theArr = new float[_capacity];
    _size = 0;
    _capacity = 10;
    _indexOfFront = 0;
}

AQue::~AQue() {
    delete [] _theArr;
}

void AQue::pushBack(float value) {
    _theArr[(_size + _indexOfFront) % _capacity] = value;
    _size++;
}

float &AQue::back() {
    return _theArr[(_indexOfFront + _size - 1) % _capacity];
}

void AQue::popFront() {
    _indexOfFront = (_indexOfFront + 1) % _capacity;
    _size--;
}

float &AQue::front() {
    return _theArr[_indexOfFront];
}

int AQue::size() {
    return _size;
}
