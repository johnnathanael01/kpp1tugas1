#ifndef ROBOT_H
#define ROBOT_H

#include <string>

class Robot {
private:
    std::string nama;
public:
    Robot(std::string n = "Abinara");
    virtual ~Robot() {}
    virtual void sapa();
    std::string getNama();
};

#endif
