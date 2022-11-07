// Class to implement a state's name, energy usage, size and percentage of land needed.
// Name: Daniel Bartolomei
// Date: 10/26/2022
// Programming Assignment 3

#ifndef STATE_H
#define STATE_H
#include <string>

using namespace std;

class State
{
    public:
        State();
        State(string, double, long long int);


        string getName();
        void setName(string);
        double getEnergy();
        void setEnergy(double);
        long long int getSize();
        void setSize(long long int);
        double getPercentage();
        void setPercentage();

        void findPercentage();



    private:
        string m_name;
        double m_energy;
        long long int m_size;
        double m_percentage;
};

#endif // STATE_H
