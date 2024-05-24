#include <iostream>
#include <string>
using namespace std;

// Structure to hold student information
struct Student {
    string name;
    string en_no;
    string subjects[5];
    int cr_hrs[5];
    int q_marks[5];
    int a_marks[5];
    int m_marks[5];
    int f_marks[5];
    int total_marks[5];
    char grades[5];
    float GPA;
};

// Function to calculate total marks and assign grades
void calculateGrades(Student& st) {
    int totalCreditHours = 0;
    int totalGradePoints = 0;
    for (int i = 0; i < 5; ++i) {
        st.total_marks[i] = st.q_marks[i] + st.a_marks[i] + st.m_marks[i] + st.f_marks[i];
        if (st.total_marks[i] >= 90) st.grades[i] = 'A';
        else if (st.total_marks[i] >= 80) st.grades[i] = 'B';
        else if (st.total_marks[i] >= 70) st.grades[i] = 'C';
        else if (st.total_marks[i] >= 60) st.grades[i] = 'D';
        else st.grades[i] = 'F';

        totalCreditHours += st.cr_hrs[i];
        int gradePoints = (st.grades[i] == 'A') ? 4 : (st.grades[i] == 'B') ? 3 : (st.grades[i] == 'C') ? 2 : (st.grades[i] == 'D') ? 1 : 0;
        totalGradePoints += gradePoints * st.cr_hrs[i];
    }
    st.GPA = static_cast<float>(totalGradePoints) / totalCreditHours;
}

int main() {
    Student st_record;

    // Input student information
    cout << "Enter student name: ";
    getline(cin, st_record.name);
    cout << "Enter enrollment number: ";
    getline(cin, st_record.en_no);

    for (int i = 0; i < 5; ++i) {
        cout << "Enter subject name: ";
        getline(cin, st_record.subjects[i]);
        cout << "Enter credit hours for " << st_record.subjects[i] << ": ";
        cin >> st_record.cr_hrs[i];
        cout << "Enter quiz marks for " << st_record.subjects[i] << ": ";
        cin >> st_record.q_marks[i];
        cout << "Enter assignment marks for " << st_record.subjects[i] << ": ";
        cin >> st_record.a_marks[i];
        cout << "Enter midterm marks for " << st_record.subjects[i] << ": ";
        cin >> st_record.m_marks[i];
        cout << "Enter final marks for " << st_record.subjects[i] << ": ";
        cin >> st_record.f_marks[i];
        cin.ignore(); // To consume newline character left by cin
    }

    // Calculate grades and GPA
    calculateGrades(st_record);

    // Display result
    cout << "\nSubjects\tCredit Hours\tTotal Marks\tGrade\n";
    for (int i = 0; i < 5; ++i) {
        cout << st_record.subjects[i] << "\t\t" << st_record.cr_hrs[i] << "\t\t"
            << st_record.total_marks[i] << "\t\t" << st_record.grades[i] << endl;
    }
    cout << "\nGPA: " << st_record.GPA << endl;

    return 0;
}
