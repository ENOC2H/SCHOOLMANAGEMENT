#include <iostream>
#include <vector>

using namespace std;

class Student {
public:
    string name;
    int age;
    int grade;

    Student(string name, int age, int grade) {
        this->name = name;
        this->age = age;
        this->grade = grade;
    }
};

vector<Student> students;

void addStudent() {
    string name;
    int age, grade;

    cout << "Enter student's name: ";
    cin >> name;

    cout << "Enter student's age: ";
    cin >> age;

    cout << "Enter student's grade: ";
    cin >> grade;

    Student newStudent(name, age, grade);
    students.push_back(newStudent);

    cout << "Student added successfully!" << endl;
}

void displayStudents() {
    if (students.size() == 0) {
        cout << "No students in the system." << endl;
        return;
    }

    cout << "Students in the system:" << endl;

    for (int i = 0; i < students.size(); i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Grade: " << students[i].grade << endl;
        cout << endl;
    }
}

int main() {
    int choice;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Add a student" << endl;
        cout << "2. Display students" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
