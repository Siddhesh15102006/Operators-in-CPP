# 🧪 Experiment 2: Operators C++

### (Q1: Student Grade Calculator & Q2: Positive or Negative Number Checker)

---

## ✅ Q1: Student Grade Calculator

---

### 🎯 Aim:

To write a C++ program that calculates the **grade of a student** based on the percentage of marks obtained.

---

### 📚 Theory:

Grading systems are commonly used in academics to evaluate student performance. A simple grading program checks the percentage and assigns a grade using `if-else` or `if-else if` statements.

**Example grading criteria:**

* 90 and above → Grade A
* 80 to 89     → Grade B
* 70 to 79     → Grade C
* 60 to 69     → Grade D
* Below 60     → Grade F

This program introduces conditional statements (`if-else`) in C++.

---

### 🧠 Logic:

1. Take marks for 5 subjects as input.
2. Calculate total and percentage.
3. Use `if-else if` to assign a grade based on the percentage.

---

### 💡 Syntax:

```cpp
if (percentage >= 90) {
    // Grade A
} else if (percentage >= 80) {
    // Grade B
}
// Continue for other ranges...
```

---

### 🧾 Code:

```cpp
// Q1: Student Grade Calculator in C++
#include <iostream>
using namespace std;

int main() {
    float marks[5], total = 0, percentage;
    char grade;

    cout << "Enter marks for 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    percentage = total / 5;

    // Grade calculation
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
```

---

### ✅ Sample Output:

```
Enter marks for 5 subjects:
85
78
90
88
92
Total Marks: 433
Percentage: 86.6%
Grade: B
```

---

### 📌 Conclusion:

The program successfully calculates the percentage and assigns a grade using conditional statements. This helps in understanding decision-making logic using `if-else if` in C++.

---

## ✅ Q2: Check if a Number is Positive or Negative

---

### 🎯 Aim:

To write a C++ program that checks whether a given number is **positive**, **negative**, or **zero**.

---

### 📚 Theory:

Numbers can be:

* **Positive** (> 0)
* **Negative** (< 0)
* **Zero** (== 0)

Using simple `if-else` statements, we can check the value of a number and classify it accordingly.

---

### 🧠 Logic:

1. Accept a number from the user.
2. Use conditions:

   * If number > 0 → Positive
   * If number < 0 → Negative
   * Else → Zero

---

### 💡 Syntax:

```cpp
if (num > 0)
    cout << "Positive";
else if (num < 0)
    cout << "Negative";
else
    cout << "Zero";
```

---

### 🧾 Code:

```cpp
// Q2: Check if Number is Positive or Negative in C++
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
        cout << "The number is Positive." << endl;
    else if (num < 0)
        cout << "The number is Negative." << endl;
    else
        cout << "The number is Zero." << endl;

    return 0;
}
```

---

### ✅ Sample Output:

```
Enter a number: -25
The number is Negative.
```

---

### 📌 Conclusion:

The program correctly checks whether a number is positive, negative, or zero using conditional statements. This reinforces the use of comparison and control flow in C++.

---
