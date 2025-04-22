#include <iostream>
#include "TaskManager.hpp"

int main(){

    TaskManager manager;
    int choice;
    std::cout << "\t\t\n ----- Task Manager ----- \t\t\n";
    std::cout << "Pending tasks.....\n";
    manager.listTasks();
    std::cout<<"\n";
    while(true){
        std::cout << "1. Add Task\n";
        std::cout << "2. Delete a Task\n";
        std::cout << "3. Mark a Task complete\n";
        std::cout << "4. List All tasks\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if(choice == 0) break;

        switch(choice) {
            case 1: {
                std::string name, description, dueDate;
                std::cin.ignore();
                std::cout <<"Name : ";
                std::getline(std::cin , name);
                std::cout<<"Enter description :";
                std::getline(std::cin, description);
                std::cout<<"Enter due date (DD-MM-YYYY) :";
                std::getline(std::cin, dueDate);
                manager.addTask(name, description , dueDate);
                break;
                }
            case 2:
                std::cout<<"Funcitonality will be added..\n";
                break;
            case 3:{
                    std::cout<<"Enter id of a task to mark:";
                    std::cin>>id;
                    std::cin.ignore();
                    manager.markTaskComplete(id);
                    break;
                }
            case 4:
                manager.listTasks();
                break;
            default : break;
        }
    }

    return 0;
}