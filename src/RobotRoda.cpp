#include "RobotRoda.h"
#include <iostream>

RobotRoda::RobotRoda(std::string n) : Robot(n) {}

void RobotRoda::sapa() {
    std::cout << getNama() << " bergerak memakai roda!" << std::endl;
}
