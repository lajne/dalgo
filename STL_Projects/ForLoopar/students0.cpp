#include "students0.h"

#include <string>
#include <iostream>
#include "students1floatarray.h"
#include "students2array.h"
#include "students3floatlist.h"
#include "students4list.h"

#include "ragnarstest.h"



using std::string;
using std::iostream;
using std::cout;
using std::endl;



void testMyFloatArr(){

    MyFloatArr container;
    float maximum = 10;
    for (float d=1.0f ; d<maximum ; d*=1.5f)
        container.push_back( d );

    cout << "testMyFloatArr skriver ut:"<< endl;
    for (auto ite : container)
        cout << ite << " " ;
    cout << endl;
}



void testMyFloatList(){
    MyFloatList container;
   float maximum = 10;
   for (float d=1.0f ; d<maximum ; d*=1.5f)
        container.push_back( d );

    cout << "testMyFloatList skriver ut:"<< endl;
    for (auto ite : container)
           cout << ite << " ";
    cout << endl;
}




void testMyTemplateArr(){

    MyArr<string> container;
    container.push_back("En");
    container.push_back("sekvens");
    container.push_back("av");
    container.push_back("strängar");

    cout << "testMyTemplateArr skriver ut:"<< endl;

    for (auto ite : container)
        cout <<  ite << " ";
    cout << endl;

}


void testMyTemplateList(){

    MyList<string> container;
    container.push_back("En");
    container.push_back("sekvens");
    container.push_back("av");
    container.push_back("strängar");

    cout << "testMyTemplateList skriver ut:"<< endl;

    for (auto ite : container)
        cout << ite << " ";
    cout << endl;

}




int main(){

    cout << endl << endl << endl;

    cout << "\n---------------------------------\n";

    testMyFloatArr();

    cout << "\n---------------------------------\n";
    testMyFloatList();
    cout << "\n---------------------------------\n";

    testMyTemplateArr();
    cout << "\n---------------------------------\n";

    testMyTemplateList();
    cout << "\n---------------------------------\n";



    ragnarsTest("Lisa1212");

}

