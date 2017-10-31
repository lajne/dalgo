#ifndef STUDENTSLISTSTACK_H
#define STUDENTSLISTSTACK_H


class LStack
{
    // Till studenten: Man får ändra på denna privata del av klassen om man vill

    struct Link{
        float  _value;
        Link  *_pLinkNext;
        Link(float value, Link* next) : _value(value), _pLinkNext(next) {}
    };

    Link *_pBack;
    int  _size;


public:
    // Till studenten: implementera dessa metoder i cpp-filen
    // Med undantag av destruktorn skall alla metoder ha
    // komplexitet O(1)

    LStack();
    ~LStack();


    void pushBack(float value);
    float &back();
    void  popBack();
    int   size();
};

#endif // STUDENTSLISTSTACK_H
