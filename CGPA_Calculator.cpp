#include <iostream>
#include <string>

using namespace std;

int main() {
    int numCourses;

    cout << "=== CGPA CALCULATOR ===\n\n";
    cout << "Enter the total number of courses: ";
    cin >> numCourses;

    double totalPoints = 0.0;
    double totalCredits = 0.0;

    for (int i = 0; i < numCourses; i++) {
        string CourseName;
        string grade;
        double credits;
        double gradePoints = 0.0;

        cout << "\n--- Course " << (i + 1) << " ---\n";

        cin.ignore();
        cout << "Enter Course Name: ";
        getline(cin, CourseName);

        cout << "Enter Credit Hours: ";
        cin >> credits;

        cout << "Enter Grade (A+, A, A-, B+, B, B-, C+, C, C-, D+, D, F): ";
        cin >> grade;

        if (grade == "A+" || grade == "A")
            gradePoints = 4.0;
        else if (grade == "A-")
            gradePoints = 3.67;
        else if (grade == "B+")
            gradePoints = 3.33;
        else if (grade == "B")
            gradePoints = 3.0;
        else if (grade == "B-")
            gradePoints = 2.67;
        else if (grade == "C+")
            gradePoints = 2.33;
        else if (grade == "C")
            gradePoints = 2.0;
        else if (grade == "C-")
            gradePoints = 1.67;
        else if (grade == "D+")
            gradePoints = 1.33;
        else if (grade == "D")
            gradePoints = 1.0;
        else if (grade == "F")
            gradePoints = 0.0;
        else {
            cout << "Invalid Grade!\n";
            continue;
        }

        totalPoints += gradePoints * credits;
        totalCredits += credits;
    }

    if (totalCredits > 0) {
        double cgpa = totalPoints / totalCredits;

        cout << "\n====================";
        cout << "\nTotal Credit Hours: " << totalCredits;
        cout << "\nFinal CGPA: " << cgpa;
        cout << "\n====================\n";
    }
    else {
        cout << "\nNo credit hours entered. CGPA cannot be calculated.\n";
    }

    return 0;
}
