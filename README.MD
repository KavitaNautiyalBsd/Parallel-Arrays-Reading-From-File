# C++ Program: Letter Grade Calculator with Arrays of Structures, Reading from a File

### Objective

Create a C++ program that reads numerical scores from a file, calculates the letter grades, sorts the scores, and computes the median.
Update the program to use arrays of structures to store the scores and grades, and implement functions to handle reading, calculating, sorting, and printing the data.

### Instructions

#### Define the Structure:

* Create a structure named ScoreData that contains the following fields:
  * double score: To hold the actual score received.
  * char grade: To store the letter grade corresponding to the score.
  
##### Function Prototypes:

  **Declare the following function prototypes:**

*   void loadScores(ScoreData scores[], int &size): This function reads scores from scores.txt into the scores array and updates the count of scores read.
*   void calculateGrades(ScoreData scores[], int size): This function calculates the letter grades based on the scores.
*   void sortScores(ScoreData scores[], int size): This function sorts the scores and their corresponding grades.
*   double calculateMedian(const ScoreData scores[], int size): This function calculates the median score.
*   void printScores(const ScoreData scores[], int size, double median): This function prints the sorted scores and letter grades along with the median.

#### Main Function:

  **In the main() function:**

*   Define an array of ScoreData with a maximum size (e.g., 50).
*   Define an integer variable to keep track of the number of scores read.
*   Call the loadScores() function to populate the array.
*   Call calculateGrades() to fill in the letter grades for each score.
*   Call sortScores() to sort the array.
*   Call calculateMedian() to compute the median.
*   Call printScores() to display the sorted scores, grades, and median.
*   Implement loadScores() Function:
*   Open the scores.txt file for reading.
*   Read each line of the file and store valid scores (between 0 and 4) in the ScoreData array.
*   Update the count of scores read.
*   Implement calculateGrades() Function:
*   Loop through the scores array and assign letter grades based on the following criteria:
1. A: 3.5 - 4.0
2.   B: 2.5 - 3.49
3.   C: 1.5 - 2.49
4.   D: 0.5 - 1.49
5.   F: 0.0 - 0.49**
  
* **Implement sortScores() Function:**
  * Sort the scores array using a sorting algorithm (e.g., bubble sort or selection sort), ensuring that the corresponding grades are also rearranged accordingly.
 * **Implement calculateMedian() Function:**
   * Calculate the median of the scores. If the number of scores is even, return the average of the two middle scores.
 * **Implement printScores() Function:**
    Print the sorted scores and their corresponding letter grades in a formatted manner, along with the median score.

### Code Starter Stub
```
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// Define the structure
struct ScoreData {
    double score;
    char grade;
};

// Function prototypes
void loadScores(ScoreData scores[], int &size);
void calculateGrades(ScoreData scores[], int size);
void sortScores(ScoreData scores[], int size);
double calculateMedian(const ScoreData scores[], int size);
void printScores(const ScoreData scores[], int size, double median);

int main() {
    ScoreData scores[50]; // Array to hold up to 50 scores
    int size = 0;         // Variable to track number of scores read

    // Load scores from the file
    loadScores(scores, size);
    // Calculate grades based on the scores
    calculateGrades(scores, size);
    // Sort the scores and grades
    sortScores(scores, size);
    // Calculate the median of the scores
    double median = calculateMedian(scores, size);
    // Print the sorted scores and grades along with the median
    printScores(scores, size, median);

    return 0;
}

```
