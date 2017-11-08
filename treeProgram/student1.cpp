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
    if(pTree == nullptr)
        return;
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

    if (pTree == nullptr)
        return;

    std::deque<Node*> que;
    int nodesInCurr = 1;
    int nodesInNext = 0;

    que.push_back( pTree );

    while (!que.empty()) {
        Node *p = que.front();
        que.pop_front();
        nodesInCurr--;
        if( p ){
            p->flash();
            que.push_back(p->_pLeft);
            que.push_back(p->_pRight);
            nodesInNext += 2;
        }
        if(nodesInCurr == 0){
            nodesInCurr = nodesInNext;
            nodesInNext = 0;
        }
    }
}

int numberOfNodes(Node *pTree){
    return (pTree == nullptr ? 0: 1 + numberOfNodes(pTree->_pLeft) + numberOfNodes(pTree->_pRight));
}

//.............//.............//.............//.............//..............GÖR DENNA SKITEN.............//.............//.............//.............//.............//.............//
int height(Node *pTree){
    return 0;
}











