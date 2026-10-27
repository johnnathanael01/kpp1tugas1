#include "Robot.h"
#include <iostream>

Robot::Robot(std::string n) : nama(n) {}

void Robot::sapa() {
    std::cout << "Halo, saya " << nama << std::endl;
}

std::string Robot::getNama() {
    return nama;
}
