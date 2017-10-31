#include "ragnarstest.h"


#include "studentslistque.h"
#include "studentsarrayque.h"
#include "studentsadeque.h"

#include <iostream>
#include <string>

#include <deque>

using namespace std;

//#pragma warning( disable : 4996 )


bool  ALLOK = true;

bool dequePushBack(ADeque &q1, std::deque<float>  &q2){
    float v = rand() / 2.5;

    q1.pushBack( v );
    q2.push_back( v );
    return q1.back() == q2.back() && q1.size() == (int)q2.size();
}

bool dequePushFront(ADeque &q1, std::deque<float>  &q2){
    float v = rand() / 2.5;

    q1.pushFront( v );
    q2.push_front( v );
    return q1.front() == q2.front() && q1.size() == (int)q2.size();
}

bool dequePopBack(ADeque &q1, std::deque<float>  &q2){

    if (q2.size()>0){
        q1.popBack(  );
        q2.pop_back( );
    }
    return q1.size() == (int)q2.size();
}


bool dequePopFront(ADeque &q1, std::deque<float>  &q2){
   if (q2.size()>0){
        q1.popFront( );
        q2.pop_front( );
   }
    return q1.size() == (int)q2.size();
}






bool ragnarsDequetest(int lev ){

    ADeque q1;
    deque<float>  q2;

    bool ok = true;
    int maxSize = 0;
    for (int i=0; i<10000 && ok; i+=1){
        int prcIncrease = 50;
        int prcDecrease = 50;

        if (i>1000 && i<2000)
            prcIncrease = 70;
        if (i>9000)
            prcDecrease = 90;

        if (ok && lev==0 && i == 108)
            ok = ragnarsDequetest(1);

        if (rand()%100 < prcIncrease)
            ok = ok && dequePushBack((q1), (q2));
        if (rand()%100 < prcIncrease)
            ok = ok && dequePushFront((q1), (q2));
        if (rand()%100 < prcDecrease)
            ok = ok & dequePopBack((q1), (q2));
        if (rand()%100 < prcDecrease)
            ok = ok && dequePopFront((q1), (q2));

        if (q1.size()>maxSize)
            maxSize = q1.size();
    }
    return ok;
}



void tst(bool err, string str)
{
  if (err)
    { cout << str << endl;
      ALLOK = false;
    }
}


// ändra ej på denna funktion
template<typename Que> bool ragnarsKoeTest(int lev=0)
{
  if (lev==0)
    ALLOK = true;

  float arr[100];
  for (int i=0 ; i<100; ++i)
    arr[i] = float(rand());

  Que que;

  tst(que.size()!=0, "storleken ej noll");

  for (int i=0; i< 8 ; ++i)
    que.pushBack( arr[i] );

  tst(que.size()!=8, "storleken ej 8");

  tst(que.front()!=arr[0], "första fel" );
  tst(que.back()!=arr[7],  "sista fel"  );

  if (lev==0) ragnarsKoeTest<Que>(1);

  int iRemove = 0;
  for (int i=8 ; i<20 ; ++i)
  {
    tst(que.front()!=arr[iRemove], "fel i första" );
    que.popFront();

    ++iRemove;
    tst(que.size()!=7, "storleken ej 7");
    que.pushBack(arr[i]);
    tst(que.back()!=arr[i], "fel i sista");
  }

  return ALLOK;
}



//***********************************************************************
// ANROP:   ragnarsTest( myIdentity );
// VERSION: 2010-01-15
// UPPFIFT: Testar en eller flera rutiner som studenten har skrivit.
//***********************************************************************
bool ragnarsTest(const string& myIdentity){
    setlocale(LC_ALL, "Swedish" );
    if (myIdentity.find("Homer")!=string::npos){
        std::cerr << "Felaktig identitet : " << myIdentity << "\7\7\n";
        std::cerr << "Använd DITT förnamn och de sista 4 siffrorna i DITT personnunmmer!!\n";
        system("pause");
        exit( 0 );
    }

    cout << endl << "ragnarsTest testar din AQue kö!" << endl;

    bool okA = ragnarsKoeTest<AQue>();

    if (okA)
       cout << "(AQue lyckades! Jag har dock inte testat minnesläckor!" << endl
               << " Verifiera själv att destruktor och pop inte läcker)" << endl;
    else cout << "AQue misslyckades\7" << endl << endl;


    cout << endl << "ragnarsTest testar din LQue kö!" << endl;

    bool okL = ragnarsKoeTest<LQue>();

    if (okL)
       cout << "(LQue lyckades! Jag har dock inte testat minnesläckor!" << endl
            << " Verifiera själv att destruktor och pop inte läcker)" << endl;
    else cout << "LQue misslyckades\7" << endl << endl;


    cout << endl << "ragnarsTest testar din ADeque kö!" << endl;

    bool okD = ragnarsDequetest(0);

    if (okD)
       cout << "(ADeque lyckades! Jag har dock inte testat minnesläckor!" << endl
            << " Verifiera själv att destruktor och pop inte läcker)" << endl;
    else cout << "ADeque misslyckades\7" << endl << endl;

    return okA && okL;


}// ragnarsTest
