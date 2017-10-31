#ifndef STUDENTSARRSTACK_H
#define STUDENTSARRSTACK_H




class AStack
{
    // Till studenten: Man får ändra på denna privata del av klassen om man vill

    float *_theArr;
    int    _size;
    int    _capacity;

public:
    // Till studenten: implementera dessa metoder i cpp-filen
    // Alla metoder skall ha komplexitet O(1)

    AStack();
    ~AStack();

    void pushBack(float value);
    float &back();
    void  popBack();
    int   size();

};

#endif // STUDENTSARRSTACK_H
