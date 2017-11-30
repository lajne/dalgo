#ifndef STUDENT4LIST_H
#define STUDENT4LIST_H










template <typename T>
class MyList
{

    struct Link {
        Link(T data, Link* pNext) { _data = data; _pNext = pNext; }
        T _data;
        Link *_pNext;
    };
    Link *_pFirst;
    Link *_pLast;



public:

    struct iterator {
        Link *_pLink;

        iterator(Link* pLink) { _pLink = pLink; }
        iterator operator++(){  return *this;   } // TODO
        bool operator!=(iterator rhs) { return true; } // TODO
         T& operator*()   { return _pLink->_data; }

    };

    MyList()   : _pFirst(nullptr), _pLast(nullptr)  {  } // {  }
    ~MyList()  { }
    void push_back(T data){
        if (_pFirst == nullptr)
            _pFirst = _pLast = new Link(data, nullptr);
        else {
            _pLast->_pNext = new Link(data, nullptr);
            _pLast = _pLast->_pNext;
        }
    }



    iterator begin() { return iterator(nullptr); } // TODO fel kod, byt ut
    iterator end()   { return iterator(nullptr); } // kanske TODO



};

#endif // STUDENT4LIST_H
