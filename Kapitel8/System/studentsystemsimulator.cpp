#include "studentsystemsimulator.h"

#include "stdio.h"
#include <string>
#include <iostream>
#include <queue>
#include <vector>


using namespace std;

struct Customer{
    string _name;
    int    _arrival;
    int    _timeSpent;

};

struct Event{
    string _name;
    int    _timeToLeave;
    Event(string name, int timeToLeave): _name(name), _timeToLeave(timeToLeave) {}
};


struct AWorseThanB {
    bool operator()(const Event& a, const Event& b){
        return a._timeToLeave >b._timeToLeave;
    }
};

bool didReadCustomer(FILE* fp, Customer *pCustomer){

    char name[100];
    int timeArrive;
    int timeSpent;

    int nbrRead = fscanf( fp, "%s %d %d" , name , &timeArrive, &timeSpent);
    if (nbrRead==3){
        pCustomer->_name = name;
        pCustomer->_arrival = timeArrive;
        pCustomer->_timeSpent = timeSpent;
        return true;
    }
    return false;
}


void simulate(int antalKassor){

    cout << "--- antal Kassor " << antalKassor << " -------------------\n";

    FILE *fp = fopen("../System/system.txt", "r");

    Customer customer;

    priority_queue<Event, vector<Event>, AWorseThanB> que;


    while (didReadCustomer(fp, (&customer)) ){


       // TODO

    }

    fclose(fp);

}


void studentSystemSimulator(){

    for (int kassor = 1; kassor <12 ; kassor +=1)
        simulate(kassor);

}
