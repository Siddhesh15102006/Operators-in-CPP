// Experiment Number - 3(2)
// Siddhesh Gajare
// ENTC (A3)
// 25070122511
#include <iostream>
using namespace std;

int main() 
{
    
    float M1, M2, M3, M4, M5, average; // M = Marks
    cout << "Enter marks for 1st subjects: ";
    cin >> M1;
    cout << "Enter marks for 2nd subjects: ";
    cin >> M2;
    cout << "Enter marks for 3rd subjects: ";
    cin >> M3;
    cout << "Enter marks for 4th subjects: ";
    cin >> M4;
    cout << "Enter marks for 5th subjects: ";
    cin >> M5;
    average = (M1 + M2 + M3 + M4 + M5) / 5;
    char grade;
    if (average >= 95) grade = 'A';
    else if (average >= 90) grade = 'B';
    else if (average >= 80) grade = 'C';
    else if (average > 75) grade = 'D';
     else if (average > 70) grade = 'E';
    else grade = 'F';

    cout << "Average: " << average << "%\nGrade: " << grade << endl;
    return 0;
}

Output :-
Enter marks for 1st subjects: 80
Enter marks for 2nd subjects: 70
Enter marks for 3rd subjects: 60
Enter marks for 4th subjects: 50
Enter marks for 5th subjects: 40
Average: 60%
Grade: F


=== Code Execution Successful ===
