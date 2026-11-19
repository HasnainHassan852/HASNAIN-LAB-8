
#include <iostream>
using namespace std;

struct Student
{
    string name;
    int roll;
    float gpa;
};

int main()
{
    Student s1, s2;

    cout << "Enter first student name, roll and GPA: ";
    cin >> s1.name >> s1.roll >> s1.gpa;

    cout << "Enter second student name, roll and GPA: ";
    cin >> s2.name >> s2.roll >> s2.gpa;

    if (s1.gpa > s2.gpa)
    {
        cout << s1.name << " has higher GPA.";
    }
    else if (s2.gpa > s1.gpa)
    {
        cout << s2.name << " has higher GPA.";
    }
    else
    {
        cout << "Both students have equal GPA";
    }

    return 0;
}

