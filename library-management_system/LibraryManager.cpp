#include "LibraryManager.hpp"
//#include "Book.hpp"
#include<iostream>
#include<iomanip>

void LibraryManager:: addBook(const std::string& name , const std::string& about){
    Book newBook(nextId++ , name, about , false);
    Books.push_back(newBook);
    std::cout<< "Book added successfully!\n";
}
void LibraryManager:: listBooks() const{
    if(Books.empty()) {
        std::cout<<"No books available in the library.\n";
        return;
    }
    std::cout<< "\n--- Books List ---\n";
    std::cout<< std::left
            << std::setw(5) <<"ID"
            << std::setw(20)<<"Name"
            << std::setw(35)<<"About"
            << std::setw(10)<<"Status"
            <<"\n";
    std::cout<<std::string(70,'-')<<std::endl;
    for(int i=0 ; i<Books.size() ; i++) {
        Books[i].display();
    }
}

void LibraryManager:: issueBook(int id) {
    if(Books.empty()){
        std::cout<<"No Books to issue\n";
        return;
    }
    for(auto& book : Books){
        if(book.getId() == id){
            if(book.getStatus()) {
                std::cout<<"Book is already issued\n";
            }
            else {
                book.setIssued(true);
                std::cout<<"Book issued\n";
            }
            return;
        }

    }
    std::cout<< "Book with ID "<<id<< " not found.\n";
}

void LibraryManager::returnBook (int id) {
    for(auto& book : Books){
        if(book.getId() == id) {
            if(!book.getStatus()) {
                std::cout<<"Book is already available.\n";
            } else {
                book.setIssued(false);
                std::cout<<"Book returned successfully.\n";
            }
            return;
        }
    }
    std::cout<<"Book with ID "<< id << "not found.\n";
}