#include "ragnarstest.h"

#include <string>
#include <iostream>
#include "students1floatarray.h"
#include "students2array.h"
#include "students3floatlist.h"
#include "students4list.h"

using namespace std;


struct DT{
    string _s;
    int    _i;
    DT(string s, int i) : _s(s), _i(i) {}
    DT() :  _i(0) {}

};



template<typename T> bool test(const string& str){

    cout << str << endl;

    T container;
    container.push_back( DT("zero",0) );
    container.push_back( DT("one", 1) );
    container.push_back( DT("two", 2) );

    typename T::iterator ite = container.begin();
    bool ok = (*ite)._i == 0;
    ++ite;
    ok = (*ite)._i == 1;
    ++ite;
    ok = (*ite)._i == 2;
    ++ite;
    ok = ! (ite != container.end());

    cout << "ok is " << (ok ? "true" : "false") << endl;
    return ok;
}

bool ragnarsTest(const string& myIdentity){

    setlocale(LC_ALL, "Swedish" );
    if (myIdentity.find("Homer")!=string::npos){
        std::cerr << "Felaktig identitet : " << myIdentity << "\7\7\n";
        std::cerr << "Använd DITT förnamn och de sista 4 siffrorna i DITT personnunmmer!!\n";
        system("pause");
        exit( 0 );
    }

    cout << "\n\nRagnars Test! \n";


    bool ok = test<MyArr<DT>>("testar MyArr<DT>")
           && test<MyList<DT>>("testar MyList<DT>");

    if (ok)
        cout << "Ragnars Test lyckades! " << endl;
    else cout << "Ragnars Test misslyckades! \7" << endl;

    cout << endl << endl;

    return ok;
}
