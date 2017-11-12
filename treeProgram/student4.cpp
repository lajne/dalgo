
#include "node.h"
#include <stdio.h>
#include <algorithm>
#include <deque>

#include "students.h"


/**************************************************************************
 * Fler uppgifter.
 **************************************************************************/

bool didIndicatePathToTarget(Node *pTree){
    int targetKey = 0;
    if(pTree == nullptr)
        return false;
    pTree->flash();
    didIndicatePathToTarget(pTree->_pLeft);
    didIndicatePathToTarget(pTree->_pRight);
    if(pTree->isTarget()){
        pTree->makeRed();
        targetKey = pTree->_key;
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














