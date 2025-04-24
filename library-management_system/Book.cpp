#include "Book.hpp"
#include<iostream>
#include<iomanip>

Book :: Book(int id, const std::string& name , const std::string& about, bool isIssued) 
        : id(id), name(name), about(about) , isIssued(isIssued) {}

//getter
int Book :: getId() const {return id;}
std::string Book :: getName() const {return name;}
bool Book :: getStatus() const {return isIssued;}
std::string Book :: getAbout() const {return about;}

//setter
void Book :: setIssued(bool status) {isIssued = status;}

void Book :: display() const {
    std::cout << std::left 
                << std::setw(5) << id
                << std::setw(20)<< name
                << std::setw(35)<< about
                << std::setw(10)<< (isIssued ? "Issued" : "Available")
                << "\n";
}