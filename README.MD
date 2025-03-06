# C++ Program: Letter Grade Calculator with Arrays, Reading from a File

### Objective

Create a C++ program that reads numerical scores from a file, calculates the letter grades, sorts the scores, and computes the median.

### Instructions

1. Read from file named **scores.txt** containing numerical scores (between 0 and 4), one score per line.
2. The program will read these scores into a double array.
3. Calculate the corresponding letter grades and fill a parallel array with these grades.
    scores array
    grades array
4. Sort the numerical scores array and the letter grades array based on the scores.
5. Calculate and output the median of the scores.
6. Print both the sorted arrays and the median.
7. Functions to Implement
8. void readScores(double scores[], int &size)
9. void calculateGrades(const double scores[], char grades[], int size)
10. void sortScores(double scores[], char grades[], int size)
11. double calculateMedian(const double scores[], int size)
12. void printArrays(const double scores[], const char grades[], int size)

### Functions to Implement

void readScores(double scores[], int &size)
void calculateGrades(const double scores[], char grades[], int size)
void sortScores(double scores[], char grades[], int size)
double calculateMedian(const double scores[], int size)
void printArrays(const double scores[], const char grades[], int size)

### Explanation of the Code
**readScoresFromFile**: This function has been created to handle the reading of scores from the specified file. 
It takes the filename, the scores array, and a reference to the size variable as parameters. This enhances modularity and clarity in the code.

**readScores**: This function reads scores from a file, validates them, and stores them in an array. It also updates the size of the array.

**calculateGrades**: This function calculates the letter grade based on the score and fills a parallel array with the grades.

**sortScores**: This function sorts both the scores and their corresponding grades using a simple bubble sort algorithm.

**calculateMedian**: This function calculates the median of the scores, handling both even and odd sizes of the array.

**printArrays**: This function prints the sorted scores and their corresponding letter grades.


### Code Starter Stub
```
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>

using namespace std;

// Function prototypes
void readScoresFromFile(const string &filename, double scores[], int &size);
void calculateGrades(const double scores[], char grades[], int size);
void sortScores(double scores[], char grades[], int size);
double calculateMedian(const double scores[], int size);
void printArrays(const double scores[], const char grades[], int size);

int main() {
    const int MAX_SIZE = 100;
    double scores[MAX_SIZE];
    char grades[MAX_SIZE];
    int size = 0;

    // Read scores from the file
    readScoresFromFile("scores.txt", scores, size);
    // Calculate grades based on the scores
    calculateGrades(scores, grades, size);
    // Sort the scores and grades
    sortScores(scores, grades, size);
    // Calculate the median of the scores
    double median = calculateMedian(scores, size);
    // Print the sorted arrays and the median
    printArrays(scores, grades, size);
    
    cout << "Median score: " << median << endl;

    return 0;
}

```