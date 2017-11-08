#include "node.h"
#include <stdio.h>
#include <algorithm>
#include <deque>

#include "students.h"




/**************************************************************************
 * Sökträd.
 *
 *
 **************************************************************************/

void insertKeyToSearchtree(Node*& pTree, int key){
    pTree->flash();
    if(pTree == nullptr)
        pTree = new Node(key, nullptr, nullptr);
    else if (key < pTree->_key) {
        insertKeyToSearchtree((pTree->_pLeft), key);
    }
    else if (key > pTree->_key) {
        insertKeyToSearchtree((pTree->_pRight), key);
    }
}

bool contains(Node *pTree, int key){
    if (pTree==nullptr)
        return false;
    if (key < pTree->_key){
        return contains(pTree->_pLeft, key);
    }
    if (key > pTree->_key){
        return contains(pTree->_pRight, key);
    }
    return true;
}


Node* nodeWithMinimumKey(Node *pTree){
    if (pTree == nullptr)
        return nullptr;
    if (pTree->_pLeft == nullptr)
        return pTree;
    return nodeWithMinimumKey(pTree->_pLeft);
}

void removeKeyFromSearchtree(Node* &pTree, int key){
    pTree->flash();
    if(pTree == nullptr)
        return;
    else if (key < pTree->_key) {
        removeKeyFromSearchtree((pTree->_pLeft), key);
    }
    else if (key > pTree->_key) {
        removeKeyFromSearchtree((pTree->_pRight), key);
    }
    else if(pTree->_pLeft == nullptr || pTree->_pRight == nullptr){
        Node *pOldNode = pTree;
        pTree = (pTree->_pLeft != nullptr? pTree->_pLeft : pTree->_pRight);
        delete pOldNode;
    }
    else{
        pTree->_key = nodeWithMinimumKey(pTree->_pRight)->_key;
        removeKeyFromSearchtree((pTree->_pRight), pTree->_key);
    }
}


