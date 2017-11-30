#include "studentsshortestpath.h"

#include <queue>
#include <assert.h>
#include <QDebug>

using namespace std;


// skall returnera BAKLÄNGES path
vector<Ixnode> shortestPathBetweenNodes(const std::vector<Node>& graph,
                                        Ixnode ixStart, Ixnode ixStop, IVisualFeedback* pFeedback){

    struct Nodeinfo{
        Ixnode _indexToPrevious;
        float _accumulatedCost;
        Nodeinfo(Ixnode indexToPrevious=-1, float accumulatedCost = 1.0e40)
            : _indexToPrevious(indexToPrevious),_accumulatedCost(accumulatedCost) {}
    };

    struct Cell{
        Ixnode _index;
        float _accumulatedCost;
        Cell(Ixnode index=-1, float accumulatedCost=2e20) : _index(index), _accumulatedCost(accumulatedCost) {}

        bool operator()(const Cell& a, const Cell& b ) const {
                return a._accumulatedCost > b._accumulatedCost;
        }
    };

    qDebug() << "isStart = " << ixStart << ", ixStop " << ixStop;

    vector<Nodeinfo>  infoAboutNode(graph.size(), Nodeinfo());

    priority_queue<Cell, vector<Cell>, Cell> cellsToBeExamined;

   // TODO

    return vector<Ixnode>();

}
