#include <iostream>
using namespace std;
//Edited directly on GitHub

void pass_fail_check(int grade)
{
    //Feature by Landon: Pass-Fail-Check - Checks if grade is above 70

    if (grade >= 70)
    {
        cout << "Passed";
    }
    else
    {
        cout << "Failed";
    }
}

int main()
{
    cout << "Hello from Landon! This is my first Git commit." << endl;
    cout << "Git makes collaboration easy!" << endl;
    cout << "Changes made by Kaitlyn Thornton!" << endl;
    cout << "Feature by Landon: Branching is awesome!" << endl;

    int studentScore = 0;
    cout << "Enter score: ";
    cin >> studentScore;

    pass_fail_check(studentScore);
}
