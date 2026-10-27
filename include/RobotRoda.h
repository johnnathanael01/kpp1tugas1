#ifndef ROBOT_RODA_H
#define ROBOT_RODA_H

#include "Robot.h"
#include <string>

class RobotRoda : public Robot {
public:
    RobotRoda(std::string n);
    void sapa() override;
};

#endif
