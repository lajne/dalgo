#include "node.h"
#include <stdio.h>
#include <algorithm>
#include <deque>

#include "students.h"


/**************************************************************************
 * Fler uppgifter.
 **************************************************************************/

bool didIndicatePathToTarget(Node *pTree){
<<<<<<< HEAD
    pTree->flash();
    if(pTree == nullptr)
        return false;
    if(pTree->isTarget()){
        pTree->makeRed();
        return true;
=======
    int targetKey = pTree->_key;
    if(pTree == nullptr)
        return false;
    pTree->flash();
    if(pTree->isTarget()){
        pTree->makeRed();
>>>>>>> 42277f60052175dca546da5facdafd74d3713cd4
    }
    if(didIndicatePathToTarget(pTree->_pLeft)){
        pTree->makeRed();
        return true;
    }
    if(didIndicatePathToTarget(pTree->_pRight)){
        pTree->makeRed();
        return true;
    }
    didIndicatePathToTarget(pTree->_pLeft);
    didIndicatePathToTarget(pTree->_pRight);
}












