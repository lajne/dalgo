#include "node.h"
#include <stdio.h>
#include <algorithm>
#include <deque>

#include "students.h"


/**************************************************************************
 * Fler uppgifter.
 **************************************************************************/

bool didIndicatePathToTarget(Node *pTree){
    pTree->flash();
    if(pTree == nullptr)
        return false;
    if(pTree->isTarget()){
        pTree->makeRed();
        return true;
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












