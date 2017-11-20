#include "studentsliststack.h"
#include "assert.h"


LStack::LStack() {
    _size = 0;
    _pBack = nullptr;
}

LStack::~LStack() {
    int size = _size;
    for(int i = 0; i < size; i++){
        popBack();
    }
}

void LStack::pushBack(float value) {
    Link *newLink = new Link(value,_pBack);
    _pBack = newLink;
    _size++;
}

float &LStack::back() {
    return _pBack->_value;
}

void LStack::popBack() {
    assert(_size > 0);
    Link *pTemp = _pBack;
    _pBack = _pBack->_pLinkNext;
    delete pTemp;
    _size--;
}

int LStack::size() {
    return _size;
}
