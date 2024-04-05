#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Structure to represent a student
struct Student {
    string name;
    vector<double> grades;
};

// Function to calculate the average grade for a student
double calculateAverage(const vector<double>& grades) {
    double sum = 0.0;
    for (double grade : grades) {
        sum += grade;
    }
    return (grades.empty()) ? 0.0 : (sum / grades.size());
}

// Function to display the student's information
void displayStudentInfo(const Student& student) {
    cout << "Student Name: " << student.name << endl;
    cout << "Grades: ";
    for (double grade : student.grades) {
        cout << grade << " ";
    }
    cout << endl;
    cout << "Average Grade: " << fixed << setprecision(2) << calculateAverage(student.grades) << endl;
}

int main() {
    vector<Student> students;
    int numStudents, numGrades;
    string name;
    double grade;

    // Get the number of students from the user
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Input grades for each student
    for (int i = 0; i < numStudents; ++i) {
        Student student;
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> student.name;
        cout << "Enter the number of grades for student " << student.name << ": ";
        cin >> numGrades;
        cout << "Enter the grades for student " << student.name << " separated by space: ";
        for (int j = 0; j < numGrades; ++j) {
            cin >> grade;
            student.grades.push_back(grade);
        }
        students.push_back(student);
    }

    // Display information for each student
    cout << "\nStudent Information:\n";
    for (const Student& student : students) {
        displayStudentInfo(student);
        cout << endl;
    }

    return 0;
}
