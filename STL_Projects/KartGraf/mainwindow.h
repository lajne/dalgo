#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


#include "graph.h"

#include "studentsshortestpath.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow, IVisualFeedback
{
    Q_OBJECT

    float _distanceLastKnown =  0.0;

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    virtual void knownDistanceToNode(Ixnode ixNode, float dist) override;
private slots:
    void on_actionUSA_triggered();

    void on_actionRandom_A_triggered();

    void on_actionUSA_FLYG_triggered();

    void on_action5Noder_triggered();

    void on_actionRagnarsTest_triggered();

private:
    Ui::MainWindow *ui;
    Graph readGraph(QString xyFilename, QString linksFilename);
    void addPath(Graph &graph, Ixnode ix1, Ixnode ix2, float cost, bool visible=true);
    Graph graphWith5Nodes();
    Graph randomGraphWithGaps();
    float costOfPathInGraph(const std::vector<Ixnode> &backwardspath, const std::vector<Node> &graph);

    bool ragnarsTest(const Graph &graph, Ixnode ix1, Ixnode ix2, float trueCost);
};

#endif // MAINWINDOW_H
