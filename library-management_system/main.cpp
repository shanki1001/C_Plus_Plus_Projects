#include <iostream>
#include<string>
#include "LibraryManager.hpp"

int main(){

    LibraryManager manager;

    int choice;
    std::cout<<"\n--------- Library Management System ----------\n";
    while(true){
        std::cout << "1. Add a Book\n";
        std::cout << "2. View all Books\n";
        std::cout << "3. Issue a Book\n";
        std::cout << "3. Return a Book\n";
        std::cout << "0. Exit\n";
        int choice;
        std::cin>>choice;
        std::cin.ignore();
        if(choice == 0) break;
        switch(choice){
            case 1: {
                std::string name , about;
                std::cout<<"Enter name of the Book:";
                std::getline(std::cin, name);
                std::cout<<"Enter about of the Book:";
                std::getline(std::cin , about);
                manager.addBook(name,about);
                break;
            } break;
            case 2:
                manager.listBooks();
                break;
            case 3:
                {   
                    int id;
                    std::cout<<"Enter Id of a Book to issue:";
                    std::cin>>id;
                    std::cin.ignore();
                    manager.issueBook(id);
                }break;
            default:
                std::cout<<"Invalid choice\n";
                break;
        }
    }

    return 0;
}