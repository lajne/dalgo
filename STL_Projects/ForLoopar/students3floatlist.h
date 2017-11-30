#ifndef STUDENT3FLOATLIST_H
#define STUDENT3FLOATLIST_H



class MyFloatList {

    struct Link {
        Link(float data, Link* pNext) { _data = data; _pNext = pNext; }
        float _data;
        Link *_pNext;
    };
    Link *_pFirst;
    Link *_pLast;

public:
    struct iterator {
        iterator(Link* pLink) { _pLink = pLink; }
        bool operator != (iterator rhs)   { return true; }  // TODO
        Link *_pLink;
        iterator operator++() {return *this; } // TODO
        float& operator*()  { return _pLink->_data; }
    };

    MyFloatList() : _pFirst(nullptr), _pLast(nullptr)  {  }
    ~MyFloatList()  {
        while (_pFirst != nullptr) {
            Link *p = _pFirst;
            _pFirst = _pFirst->_pNext;
            delete p;
        }
    }

    void push_back(float data){
        if (_pFirst == nullptr)
            _pFirst = _pLast = new Link(data, nullptr);
        else {
            _pLast->_pNext = new Link(data, nullptr);
            _pLast = _pLast->_pNext;
        }
    }

    iterator begin() {  return iterator(nullptr); } // TODO fel kod, byt ut
    iterator end()   { return iterator(nullptr); }  // kanske TODO?

};

#endif // STUDENT3FLOATLIST_H
