/*accept the following from the user and calculate the percentage of class attended
total number of working days
total number of days for absent
after calculating percentage show that if the percentage is less than 75, than student will not be able to sit in exam*/

#include <iostream>
using namespace std;

int main() {
    int totalDays, absentDays;
    float attendancePercentage;

    cout << "Enter total number of working days: ";
    cin >> totalDays;

    cout << "Enter total number of days absent: ";
    cin >> absentDays;

    attendancePercentage = ((totalDays - absentDays) / (float)totalDays) * 100;

    cout << "Attendance Percentage: " << attendancePercentage << "%" << endl;

    if (attendancePercentage < 75) {
        cout << "You will not be able to sit in the exam." << endl;
    } else {
        cout << "You are eligible to sit in the exam." << endl;
    }

    return 0;
}