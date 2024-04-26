#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

vector<Task> tasks;

void addTask() {
    string description;
    cout << "Enter your task's description: ";
    cin.ignore();
    getline(cin, description);
    tasks.push_back({description, false});
    cout << "Your task has been added successfully!\n";
}

void viewTasks() {
    if(tasks.empty()) {
        cout << "No tasks in the list.\n";
        return;
    }
    for(int i = 0; i < tasks.size(); i++) {
        cout << i+1 << ". " << tasks[i].description;
        if(tasks[i].completed)
        {
            cout << " (Completed!)";
        }
        else{
            cout<< " (Pending...)";
        }
        cout << "\n";
    }
}

void markTaskCompleted() {
    int taskNumber;
    cout << "Enter the task number you want to mark as completed: ";
    cin >> taskNumber;
    if(taskNumber > 0 && taskNumber <= tasks.size()) {
        tasks[taskNumber-1].completed = true;
        cout << "Task marked as completed.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

void removeTask() {
    int taskNumber;
    cout << "Enter task number to remove: ";
    cin >> taskNumber;
    if(taskNumber > 0 && taskNumber <= tasks.size()) {
        tasks.erase(tasks.begin() + taskNumber - 1);
        cout << "Task removed.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

int main() {
    int choice;
    while(true) {
        cout << "\n1. Add Task\n2. View Tasks\n3. Mark Task as Completed\n4. Remove Task\n5. Exit\nEnter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                markTaskCompleted();
                break;
            case 4:
                removeTask();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}
