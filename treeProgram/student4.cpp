#include "node.h"
#include <stdio.h>
#include <algorithm>
#include <deque>

#include "students.h"


/**************************************************************************
 * Fler uppgifter.
 **************************************************************************/

bool didIndicatePathToTarget(Node *pTree){
    if(pTree == nullptr)
        return false;
    pTree->flash();
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
    return false;
}












