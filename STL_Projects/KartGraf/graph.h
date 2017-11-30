#ifndef GRAPH_H
#define GRAPH_H

#include <QPoint>
#include <vector>

typedef int Ixnode;




struct Neighbour{
    Neighbour(Ixnode ixNode, bool isVisible, float costOfArc)
        : _ixNode(ixNode), _isVisible(isVisible), _costOfArc(costOfArc) {}

    Ixnode  _ixNode;
    bool    _isVisible;
    float   _costOfArc;
};


struct Node{
    QPoint           _point;
    std::vector<Neighbour> _neighbours;
};

typedef std::vector<Node> Graph;

#endif // GRAPH_H
