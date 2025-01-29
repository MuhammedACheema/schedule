#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <vector>
#include <algorithm>

class Task{
    public:
        std::string ID;
        std::string time; //must be in hh:mm format

        Task(std::string ID, std::string time){
            this -> ID = ID;
            this -> time = time;
        }
};

class Schedule{
    public:
        std::vector <Task> priority;
        
        void addTask(Task task){
            priority.push_back(task);
        }

        void sortTasks() {
            std::sort(priority.begin(), priority.end(), [](const Task &a, const Task &b) {
                return a.time < b.time; // Sort based on the time attribute
            });
        }

        // Display the tasks in sorted order
        void display() {
            sortTasks(); // Sort tasks by time
            for (const auto &task : priority) { // Access each Task object
                std::cout << "Task ID: " << task.ID << " at " << task.time << std::endl;
            }
        }

    };

#endif