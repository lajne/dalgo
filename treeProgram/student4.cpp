
#include "node.h"
#include <stdio.h>
#include <algorithm>
#include <deque>

#include "students.h"


/**************************************************************************
 * Fler uppgifter.
 **************************************************************************/

bool didIndicatePathToTarget(Node *pTree){
    int targetKey = pTree->_key;
    if(pTree == nullptr)
        return false;
    pTree->flash();
    if(pTree->isTarget()){
        pTree->makeRed();
    }
    if(targetKey < pTree->_key){
        pTree->makeRed();
        didIndicatePathToTarget(pTree->_pLeft);
    }
    if(targetKey > pTree->_key){
        pTree->makeRed();
        didIndicatePathToTarget(pTree->_pRight);
    }
    return true;
}
//Hur fan ska jag få enbart vägen till noden att bli röd?

//Den noden jag högerklickar på är väl den noden som jag får in i funktionen?

//Hur ska jag veta vilka som skall vara röda?

//Hade jag haft en key så hade denna varit så jävla enkel....














