#include "node.h"
#include <stdio.h>
#include <algorithm>
#include <deque>

#include "students.h"


/**************************************************************************
 * Trädklättring.
 *
 *
 **************************************************************************/

void flashPreOrder(Node *pTree){
    if(pTree == nullptr)
        return;
    pTree->flash();
    flashPreOrder(pTree->_pLeft);
    flashPreOrder(pTree->_pRight);
}

void flashInOrder(Node *pTree){

    flashInOrder(pTree->_pLeft);
    pTree->flash();
    flashInOrder(pTree->_pRight);
}

void flashPostOrder(Node *pTree){
    if(pTree == nullptr)
        return;
    flashPostOrder(pTree->_pLeft);
    flashPostOrder(pTree->_pRight);
    pTree->flash();
}



void flashNodesAtIncreasingDepth(Node *pTree){
    // Denna funktion skall INTE vara rekursiv.
    // implementera den med hjälp av en FIFO-kö.
    // Så här kan du deklarera fifo-kön:
    // std::deque<Node*> que;
    // så här stoppar du in ett värde i kön
    // que.push_back( nodepekare );
    // så här läser du det värde som ligger främst
    // Node *p = que.front();
    // så här avlägsnar du det främsta värdet från kön
    // que.pop_front();


}

int numberOfNodes(Node *pTree){
    return 0;
}

int height(Node *pTree){
    return 0;
}


