#include "WorkStation.h"

void WorkStation::setBuilding(string building)
{
    m_building = building;
}

void WorkStation::setFloor(string floor)
{
    m_floor = floor;
}

void WorkStation::setDesc(string desc)
{
    m_desc = desc;
}

string WorkStation::getBuilding() const
{
    return m_building;
}

string WorkStation::getFloor() const
{
    return m_floor;
}

string WorkStation::getDesc() const
{
    return m_desc;
}

void WorkStation::print() const
{
    cout << "Building: " << getBuilding() << " "
        << "Floor: " << getFloor() << " "
        << "Desc: " << getDesc() << endl;
}
