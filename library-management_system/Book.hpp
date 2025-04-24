#pragma once
#include<iostream>

class Book {
    private:
        int id;
        std::string name;
        std::string about;
        bool isIssued;
    public:
        Book ( int id , const std::string&name ,const std::string& about , bool isIssued= false);

    // Getters
    int getId() const;
    std::string getName () const;
    std::string getAbout () const;
    bool getStatus() const;

    // Setters
    void setIssued(bool status);

    // Display function
    void display() const;
    
    };