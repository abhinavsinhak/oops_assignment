#include <bits/stdc++.h>
using namespace std;

class StudentGrade
{
    int id;

    char *student_name;
    int test_score;
    int possible_point;
    char grade;

public:
    StudentGrade(int id,const char* name, int test_score,
                 int possible_point = 100)
    {
        this->id = id;
        student_name = new char[strlen(name)+1];
        strcpy(this->student_name,name);
        this->test_score = test_score;
        if (possible_point == 0)
        {
            this->possible_point = 1;
        }
        else
        {
            this->possible_point = possible_point;
        }
    }
    void calculate()
    {
        float score;
        score = ((float)test_score / possible_point) * 100;
        if (score >= 90)
        {
            grade = 'A';
        }
        else if (score >= 80)
        {
            grade = 'B';
        }
        else if (score >= 70)
        {
            grade = 'C';
        }
        else if (score >= 60)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }
    }
    void display()
    {
        cout << "Student ID: " << id << endl;
        cout << "Student Name: " << student_name << endl;
        cout << "Grade: " << grade << endl;
        cout << "Test Score: " << test_score << endl;
    }
    ~StudentGrade()
    {
        delete[] student_name;
    }
};
int main()
{
    StudentGrade s1(1, "sushant", 90, 100);
    s1.calculate();
    s1.display();
    cout << endl;
    StudentGrade s2(2, "raj", 60, 0);
    s2.calculate();
    s2.display();
    cout << endl;
    StudentGrade s3(3, "gaurav", 50);
    s3.calculate();
    s3.display();

    return 0;
}