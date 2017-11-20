
#include "studentfill2.h"
#include <QDebug>
#include <deque>   // double-ended-que, har du tillåtelse att använda här!

using namespace std;

// Nedanstående struct kan användas för att lagra koordinater
struct RK {
    RK(int r, int k): _r(r),_k(k) {}
    int _r;
    int _k;
};


// Denna metod visar bara hur man använder en sk deque
void exempelkodDemonstrerarDeque(){

    deque<RK> minQueue;


    qDebug() <<"Demo: vi använder minQueue som en STACK";
    qDebug() <<"      med push_back back och pop_back";

    minQueue.push_back( RK(0,0) );
    minQueue.push_back( RK(1,10) );
    minQueue.push_back( RK(2,20) );

    while (!minQueue.empty()) {
       RK rk = minQueue.back();
       minQueue.pop_back();
       qDebug() << "vi poppar: (" << rk._r << ", " << rk._k << ")";
    }

    qDebug() <<"Demo: vi använder nu minQueue som en FIFO";
    qDebug() <<"      med push_back front och pop_front";

    minQueue.push_back( RK(0,0) );
    minQueue.push_back( RK(1,10) );
    minQueue.push_back( RK(2,20) );

    while (!minQueue.empty()) {
       RK rk = minQueue.front();
       minQueue.pop_front();
       qDebug() << "vi pop_frontar: (" << rk._r << ", " << rk._k << ")";
    }

}

void nonRecursiveFillStack(int r, int k, IDrawingParent *im, QColor colorOld, QColor colorNew){

    deque<RK> stack;
    stack.push_back(RK(r, k));
    if(colorNew == im->pixel(r, k)){
        return;
    }
    while (!stack.empty()) {
        RK rkCoord = stack.back();
        if(im->isInside(rkCoord._r, rkCoord._k) && im->pixel(rkCoord._r,rkCoord._k) == colorOld){
            im->setPixel(rkCoord._r, rkCoord._k, colorNew);
            stack.push_back(RK(rkCoord._r+1, rkCoord._k));
            stack.push_back(RK(rkCoord._r-1, rkCoord._k));
            stack.push_back(RK(rkCoord._r, rkCoord._k+1));
            stack.push_back(RK(rkCoord._r, rkCoord._k-1));
        }
        else {
            stack.pop_back();
        }
    }
}

void nonRecursiveFillFifo(int r, int k, IDrawingParent *im, QColor colorOld, QColor colorNew){

    deque<RK> queue;
    queue.push_back(RK(r, k));
    if(colorNew == im->pixel(r, k)){
        return;
    }
    while (!queue.empty()) {
        RK rkCoord = queue.front();
        if(im->isInside(rkCoord._r, rkCoord._k) && im->pixel(rkCoord._r,rkCoord._k) == colorOld){
            im->setPixel(rkCoord._r, rkCoord._k, colorNew);
            queue.push_back(RK(rkCoord._r+1, rkCoord._k));
            queue.push_back(RK(rkCoord._r-1, rkCoord._k));
            queue.push_back(RK(rkCoord._r, rkCoord._k+1));
            queue.push_back(RK(rkCoord._r, rkCoord._k-1));
        }
        else {
            queue.pop_front();
        }
    }
}
