#include "bubbleSort.h"
#include "heapSort.h"
#include "insertionSort.h"
#include "mergeSort.h"
#include "NHLDraft.h"
#include "printVec.h"
#include "quickSort.h"
#include "selectionSort.h"
#include "twoSort.h"
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;
const string python = "python3";

int main() {
    // Create a vector to store NHLDraft objects
    vector<NHLDraft> draftPicks;
    // Populate the vector with NHLDraft objects
    if (!getDataFromFile("../nhldraft.csv", draftPicks)) {
        // If the file cannot be read from, print a message and end the program
        cout << "nhldraft.csv was in a bad state and could not be read from." << endl;
        return 0;
    }

    // Create two file handler objects
    ofstream readsFile, writesFile;
    // Open the files to write to
    readsFile.open("../data/reads_data.csv");
    writesFile.open("../data/writes_data.csv");

    // Integers to hold the number of reads and writes
    int reads = 0, writes = 0;
    // Create a vector to be populated with a subset of draftPicks' elements
    vector<NHLDraft> subVec;
    // Re-size draftPicks to 1000
    draftPicks.resize(1000);

    // Bubble Sort
    for (int i = 100; i <= 1000; i += 100) {
        // Add 100 elements from draftPicks to subVec
        for (int j = i-100; j < i; ++j) {
            subVec.push_back(draftPicks[j]);
        }
        // Sort subVec which contains the first 100, 200, 300, etc. elements from draftPicks
        bubbleSort(subVec, reads, writes);
        // Write the read and write counts to their respective files
        readsFile << reads << ',';
        writesFile << writes << ',';
        // Reset read and write counts for next sort
        reads = 0;
        writes = 0;
    }

    // Selection Sort
    subVec.clear();
    readsFile << '\n';
    writesFile << '\n';
    for (int i = 100; i <= 1000; i += 100) {
        // Add 100 elements from draftPicks to subVec
        for (int j = i-100; j < i; ++j) {
            subVec.push_back(draftPicks[j]);
        }
        // Sort subVec which contains the first 100, 200, 300, etc. elements from draftPicks
        selectionSort(subVec, reads, writes);
        // Write the read and write counts to their respective files
        readsFile << reads << ',';
        writesFile << writes << ',';
        // Reset read and write counts for next sort
        reads = 0;
        writes = 0;
    }

    // Insertion Sort
    subVec.clear();
    readsFile << '\n';
    writesFile << '\n';
    for (int i = 100; i <= 1000; i += 100) {
        // Add 100 elements from draftPicks to subVec
        for (int j = i-100; j < i; ++j) {
            subVec.push_back(draftPicks[j]);
        }
        // Sort subVec which contains the first 100, 200, 300, etc. elements from draftPicks
        insertionSort(subVec, reads, writes);
        // Write the read and write counts to their respective files
        readsFile << reads << ',';
        writesFile << writes << ',';
        // Reset read and write counts for next sort
        reads = 0;
        writes = 0;
    }

    // Merge Sort
    subVec.clear();
    readsFile << '\n';
    writesFile << '\n';
    for (int i = 100; i <= 1000; i += 100) {
        // Add 100 elements from draftPicks to subVec
        for (int j = i-100; j < i; ++j) {
            subVec.push_back(draftPicks[j]);
        }
        // Sort subVec which contains the first 100, 200, 300, etc. elements from draftPicks
        mergeSort(subVec, reads, writes);
        // Write the read and write counts to their respective files
        readsFile << reads << ',';
        writesFile << writes << ',';
        // Reset read and write counts for next sort
        reads = 0;
        writes = 0;
    }

    // Quick Sort - Stable
    subVec.clear();
    readsFile << '\n';
    writesFile << '\n';
    for (int i = 100; i <= 1000; i += 100) {
        // Add 100 elements from draftPicks to subVec
        for (int j = i-100; j < i; ++j) {
            subVec.push_back(draftPicks[j]);
        }
        // Sort subVec which contains the first 100, 200, 300, etc. elements from draftPicks
        quickSortStable(subVec, reads, writes);
        // Write the read and write counts to their respective files
        readsFile << reads << ',';
        writesFile << writes << ',';
        // Reset read and write counts for next sort
        reads = 0;
        writes = 0;
    }

    // Quick Sort - Unstable
    subVec.clear();
    readsFile << '\n';
    writesFile << '\n';
    for (int i = 100; i <= 1000; i += 100) {
        // Add 100 elements from draftPicks to subVec
        for (int j = i-100; j < i; ++j) {
            subVec.push_back(draftPicks[j]);
        }
        // Sort subVec which contains the first 100, 200, 300, etc. elements from draftPicks
        quickSortUnstable(subVec, reads, writes);
        // Write the read and write counts to their respective files
        readsFile << reads << ',';
        writesFile << writes << ',';
        // Reset read and write counts for next sort
        reads = 0;
        writes = 0;
    }

    // Heap Sort
    subVec.clear();
    readsFile << '\n';
    writesFile << '\n';
    for (int i = 100; i <= 1000; i += 100) {
        // Add 100 elements from draftPicks to subVec
        for (int j = i-100; j < i; ++j) {
            subVec.push_back(draftPicks[j]);
        }
        // Sort subVec which contains the first 100, 200, 300, etc. elements from draftPicks
        heapSort(subVec, reads, writes);
        // Write the read and write counts to their respective files
        readsFile << reads << ',';
        writesFile << writes << ',';
        // Reset read and write counts for next sort
        reads = 0;
        writes = 0;
    }

    // Two-Sort
    subVec.clear();
    readsFile << '\n';
    writesFile << '\n';
    for (int i = 100; i <= 1000; i += 100) {
        // Add 100 elements from draftPicks to subVec
        for (int j = i-100; j < i; ++j) {
            subVec.push_back(draftPicks[j]);
        }
        // Sort subVec which contains the first 100, 200, 300, etc. elements from draftPicks
        twoSort(subVec, reads, writes);
        // Write the read and write counts to their respective files
        readsFile << reads << ',';
        writesFile << writes << ',';
        // Reset read and write counts for next sort
        reads = 0;
        writes = 0;
    }

    // Close the read and write count files in C++
    readsFile.close();
    writesFile.close();

    // Read in data files in Python
    string command;
    command = python + " ../graph_generator.py " + "../data/reads_data.csv" + " ../data/writes_data.csv";
    system(command.c_str());

    return 0;
}