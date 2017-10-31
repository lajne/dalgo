#ifndef STUDENTSLISTQUE_H
#define STUDENTSLISTQUE_H


class LQue
{
    // Till studenten: Man får ändra på denna privata del av klassen om man vill

    struct Link{
        Link(float value=0, Link *pNext=nullptr) : _value(value), _pNext(pNext) {}
        float _value;
        Link *_pNext;
    };

    Link  *_pFront;
    Link  *_pBack;
    int   _size;

public:
    // Till studenten: implementera dessa metoder i cpp-filen
    // Med undantag av destruktorn skall alla metoder ha
    // komplexitet O(1)

    LQue();
    ~LQue();

    void pushBack(float value);
    float &back();
    void popFront();
    float &front();
    int  size();
};

#endif // STUDENTSLISTQUE_H
