#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << setw(10) << left << "Spring" << setw(10) << "Nice" << endl; // using setw() to add more ten characters space to Spring make column
    cout << setw(10) << left << "Summer" << setw(10) << "Hot" << endl;

    cout << fixed << setprecision(0) << 12.567832 << endl;

    cout << setw(10) << left << "Course" << setw(10) << "Students" << endl
         << setw(10) << left << "C++"    << setw(10) << right << 100 << left << endl
         << setw(10) << left << "Javascript" << setw(10) << right << 50 << left << endl;
    return 0;
}
