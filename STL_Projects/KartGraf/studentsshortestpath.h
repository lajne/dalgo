#ifndef STUDENTSSHORTESTPATH_H
#define STUDENTSSHORTESTPATH_H

#include "graph.h"


struct IVisualFeedback {
    virtual void knownDistanceToNode(Ixnode ixNode, float distane) = 0;
};

std::vector<Ixnode> shortestPathBetweenNodes(const std::vector<Node>& graph, Ixnode ixStart, Ixnode ixStop, IVisualFeedback* pFeedback);


#endif // STUDENTSSHORTESTPATH_
