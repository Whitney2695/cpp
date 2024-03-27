#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to represent a task
struct Task {
    string description;
    bool completed;
};

// Function to display the menu options
void displayMenu() {
    cout << "\nTodo List Application\n";
    cout << "1. Add Task\n";
    cout << "2. Edit Task\n";
    cout << "3. Delete Task\n";
    cout << "4. Mark Task as Completed\n";
    cout << "5. View Tasks\n";
    cout << "6. Exit\n";
}

// Function to add a new task
void addTask(vector<Task> &tasks) {
    Task newTask;
    cout << "Enter task description: ";
    cin.ignore();
    getline(cin, newTask.description);
    newTask.completed = false;
    tasks.push_back(newTask);
    cout << "Task added successfully!\n";
}

// Function to edit a task
void editTask(vector<Task> &tasks) {
    int index;
    cout << "Enter task number to edit (1-" << tasks.size() << "): ";
    cin >> index;
    if (index >= 1 && index <= tasks.size()) {
        cout << "Enter new task description: ";
        cin.ignore();
        getline(cin, tasks[index - 1].description);
        cout << "Task edited successfully!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}

// Function to delete a task
void deleteTask(vector<Task> &tasks) {
    int index;
    cout << "Enter task number to delete (1-" << tasks.size() << "): ";
    cin >> index;
    if (index >= 1 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task deleted successfully!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}

// Function to mark a task as completed
void markCompleted(vector<Task> &tasks) {
    int index;
    cout << "Enter task number to mark as completed (1-" << tasks.size() << "): ";
    cin >> index;
    if (index >= 1 && index <= tasks.size()) {
        tasks[index - 1].completed = true;
        cout << "Task marked as completed!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}

// Function to view all tasks
void viewTasks(const vector<Task> &tasks) {
    cout << "\nTasks:\n";
    for (int i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". ";
        if (tasks[i].completed)
            cout << "[Completed] ";
        cout << tasks[i].description << endl;
    }
}

int main() {
    vector<Task> tasks;
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                editTask(tasks);
                break;
            case 3:
                deleteTask(tasks);
                break;
            case 4:
                markCompleted(tasks);
                break;
            case 5:
                viewTasks(tasks);
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
