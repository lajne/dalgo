#include "studentsdrawgraph.h"

void studentsDrawGraph(QPainter& painter,  const std::vector<Node>& graph){

    for(auto &node : graph){
        painter.fillRect(node._point.x(), node._point.y(), 1, 1, Qt::black);
        for(const auto &neighbourNode : node._neighbours){
            if(neighbourNode._isVisible){
                painter.drawLine(node._point, graph[neighbourNode._ixNode]._point);
            }
        }
    }
}



