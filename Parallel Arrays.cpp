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

// Function to read scores from a file
/* Resource 
Read from a File
https://www.w3schools.com/cpp/showcpp.asp?filename=demo_files_read
*/
void readScoresFromFile(const string &filename, double scores[], int &size) {
    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        exit(1);
    }

    double score;
    while (inputFile >> score) {
       /*TODO*/
        /* accept input only if between 0 and 4 */
        /* and add to score array */
        /* else skip after giving user an appropriate message */
        
    }
    inputFile.close();
}

// Function to calculate letter grades based on scores
void calculateGrades(const double scores[], char grades[], int size) {
    for (int i = 0; i < size; i++) {
        if (scores[i] >= 3.5) {
            grades[i] = 'A';
        } else if (scores[i] >= 2.5) {
            grades[i] = 'B';
        }
         /*TODO*/
         /* add conditions for C, D, F */
    }
}

// Function to sort the scores and grades
void sortScores(double scores[], char grades[], int size) {
    /* TODO */
    /* use sort function to sort the scores */
    /* and rearrange the grades accordingly */
}

// Function to calculate the median of the scores
double calculateMedian(const double scores[], int size) {
    double median = 0;
     /* TODO */
    /* calculate median of the scores */
    /* if size is even, median is average of two middle elements */
    /* if size is odd, median is the middle element */
    return median;
}

// Function to print the sorted scores and corresponding grades
void printArrays(const double scores[], const char grades[], int size) {
    cout << fixed << setprecision(2);
    cout << "Sorted Scores and Corresponding Grades:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Score: " << scores[i] << ", Grade: " << grades[i] << endl;
    }
}