#pragma once
#include <string>

struct Task{
    int id;
    std::string name;
    std::string description;
    std::string dueDate;
    bool status = false;
};