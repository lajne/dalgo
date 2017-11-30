#ifndef MAPWIDGET_H
#define MAPWIDGET_H

#include <QWidget>
#include "graph.h"
#include "studentsshortestpath.h"


class MapWidget : public QWidget, IVisualFeedback
{

    Q_OBJECT


    Ixnode _indexOfStartNode;
    Ixnode _indexOfEndNode;
    std::vector<Ixnode> _traceback;
    QPixmap _pixmap;
    struct Knowndistance{
        Ixnode _ixNode;
        float  _distance;
        Knowndistance(Ixnode ixNode, float distance) : _ixNode(ixNode), _distance(distance) {}
    };


    std::vector<Knowndistance> _knownDistances;


    Ixnode indexOfNearestNode(const QPoint &pt);

    void drawPath(QPainter &painter);
    
    void makePixmap();
    float scaleThatMakesGraphFitWindow();
    void drawKnowndistances(QPainter &painter);
public:
    void knownDistanceToNode(Ixnode ixNode, float distance) override;

    std::vector<Node> _theGraph;
    std::vector<Node> _paintedScaledGraph;

    explicit MapWidget(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

    void resizeEvent(QResizeEvent *event) override;

    void graphChanged();
signals:

public slots:
};

#endif // MAPWIDGET_H
