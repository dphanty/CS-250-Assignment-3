#include "State.h"
#include <cmath>
#include <string>

using namespace std;

State::State()
{
    m_name = "";
}

State::State(string name, double energy, long long int size)
{
    m_name = name;
    m_energy = energy;
    m_size = size;
}

void State::findPercentage()
{
    double panelsNeeded = ceil (m_energy / 51);
    double area = m_size / 15;
    // Compute and set percentage based on size and panel area.
}
