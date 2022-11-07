#include <iostream>
#include "State.h"
#include <string>
#include <list>

using namespace std;



int main()
{
    list<string> States;
    double myPercentage;
    double area;
    double panelsNeeded;

    State tex("Texas", 13480.8, 7487580672000);
    tex.findPercentage();
    State cal("California", 6922.8, 4563554688000);
    cal.findPercentage();
    State nola("Louisiana", 4200.4, 1445216256000);
    nola.findPercentage();
    State flo("Florida", 4003.1, 1805265792000);
    flo.findPercentage();
    State ill("Illinois", 3612.9, 1614549657600);
    ill.findPercentage();
    State penn("Pennsylvania", 3413.0, 1283967590400);
    penn.findPercentage();
    State oh("Ohio", 3404.5, 1249649280000);
    oh.findPercentage();
    State york("New York", 3354.2, 1520933990400);
    york.findPercentage();
    State atl("Georgia", 2727.6, 1656673920000);
    atl.findPercentage();
    State mich("Michigan", 2610.6, 2696287334400);
    mich.findPercentage();

    std::list<string>States.insert(State);

    for (auto it=States.begin(); it !=States.end(); ++it)
                   {
                       cout << *it << " ";
                   }
                   cout << endl;
   
    return 0;
}
