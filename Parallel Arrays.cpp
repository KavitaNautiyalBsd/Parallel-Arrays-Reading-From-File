#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>

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
