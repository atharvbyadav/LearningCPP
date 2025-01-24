// 3.18 - To Compute Total Marks

#include <iostream>

using namespace std;

int main(){

    int num_students, num_subjects, roll_no, marks, total_marks;

    // Input the number of students and subjects
    cout << "Enter the number of students and subjects: ";
    cin >> num_students >> num_subjects;

    // Process each student
    for (int i = 1; i <= num_students; ++i) {
        cout << "\nEnter Roll Number for Student " << i << ": ";
        cin >> roll_no;

        total_marks = 0;
        cout << "Enter marks for " << num_subjects << " subjects:\n";

        // Process marks for each subject
        for (int j = 1; j <= num_subjects; ++j) {
            cin >> marks;
            total_marks += marks;
        }

        // Output the total marks for the current student
        cout << "Total Marks for Roll Number " << roll_no << ": " << total_marks << endl;
    }
    
    return 0;
}