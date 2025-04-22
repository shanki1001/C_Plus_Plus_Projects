#pragma once
#include "Task.hpp"
#include<vector>
#include<iostream>
#include<iomanip>

class TaskManager{
    private:
        std:: vector<Task> tasks;
        int nextId = 1;
    public:
        void addTask(const std::string name, 
                    const std::string description, 
                    const std::string dueDate){
            Task task;
            task.name= name;
            task.description = description;
            task.id = nextId++;
            task.dueDate = dueDate;
            task.status = false;
            tasks.push_back(task);
            std::cout  << "Task added successfully!\n";
        }
        void listTasks() const {

            if (tasks.empty()) {
                std::cout<< "\nNo tasks available.\n";
                return;
            }
            std::cout<<std::left    
                    << std::setw(5) <<"ID"
                    << std::setw(20)<<"Name"
                    << std::setw(25)<<"Description"  // Check it's printing capability on output screen.
                    << std::setw(15)<<"Due Date"
                    << std::setw(10)<<"Status"
                    << "\n";
            std::cout << std::string(75,'-')<<"\n";
        
            // Printing each task
            for(const auto& task:tasks) {
                std::cout<< std::left
                        << std::setw(5)  << task.id
                        << std::setw(20) << task.name
                        << std::setw(25) << task.description
                        << std::setw(15) << task.dueDate
                        << std::setw(10) << (task.status ? "Done" : "Pending")
                        << "\n";
                std::cout << std::string(75,'-')<<"\n";
            }
        }

        void markTaskCompleted(int id){
            for(auto& task : tasks){
                if(task.id==id){
                    if(task.status){
                        std::cout<<"The task is already completed!.\n";
                    }
                    else {
                        task.status = true;
                        std::cout<<"The task is now marked completed!.\n";
                    }
                    return ;
                }
                
            }
            std::cout<<"Task with ID "<< id << " not found.\n";
        }

};