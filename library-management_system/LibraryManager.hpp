#pragma once
#include "Book.hpp"
#include<vector>

class LibraryManager {
    private:
        std::vector<Book> Books;
        int nextId = 1;
    
    public:
        void addBook(const std::string& name, const std::string& about);
        void listBooks() const;
        void issueBook(int id);
        void returnBook(int id);
};