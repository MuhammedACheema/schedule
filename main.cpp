#include "main.h"

int main() {
    Schedule schedule;

    // Add some tasks
    schedule.addTask(Task("Task1", "12:30"));
    schedule.addTask(Task("Task2", "09:15"));
    schedule.addTask(Task("Task3", "14:45"));
    schedule.addTask(Task("Task4", "08:00"));

    // Display tasks in sorted order
    std::cout << "Scheduled Tasks:\n";
    schedule.display();

    return 0;
}
