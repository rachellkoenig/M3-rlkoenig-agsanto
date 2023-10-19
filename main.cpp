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

int main() {
    // Create a vector to store NHLDraft objects
    vector<NHLDraft> draftPicks;
    // Populate the vector with NHLDraft objects
    getDataFromFile("../nhldraft.csv", draftPicks);

    // Create two file handler objects
    ofstream readsFile, writesFile;
    // Open the files to write to
    readsFile.open("../data/reads data.csv");
    writesFile.open("../data/writes data.csv");

    // Integers to hold the number of reads and writes
    int reads = 0, writes = 0;

    // Perform all sorting algorithms on draftPicks and record reads and writes
    // Loop while resizing draftPicks to test the sorting algorithms on different sized vectors
    for(int i = 1000; i > 0; i -= 100) {
        // Resize the vector and write size to files
        draftPicks.resize(i);
        readsFile << i << ",";
        writesFile << i << ",";

        // Bubble Sort
        bubbleSort(draftPicks, reads, writes);
        readsFile << reads << ",";
        writesFile << writes << ",";
        // Reset read and write counts for next sort
        reads = 0;
        writes = 0;

        // Selection Sort
        selectionSort(draftPicks, reads, writes);
        readsFile << reads << ",";
        writesFile << writes << ",";
        reads = 0;
        writes = 0;

        // Insertion Sort
        insertionSort(draftPicks, reads, writes);
        readsFile << reads << ",";
        writesFile << writes << ",";
        reads = 0;
        writes = 0;

        // Merge Sort
        mergeSort(draftPicks, reads, writes);
        readsFile << reads << ",";
        writesFile << writes << ",";
        reads = 0;
        writes = 0;

        // Quick Sort - Stable
        quickSortStable(draftPicks, reads, writes);
        readsFile << reads << ",";
        writesFile << writes << ",";
        reads = 0;
        writes = 0;

        // Quick Sort - Unstable
        quickSortUnstable(draftPicks, reads, writes);
        readsFile << reads << ",";
        writesFile << writes << ",";
        reads = 0;
        writes = 0;

        // Heap Sort
        heapSort(draftPicks, reads, writes);
        readsFile << reads << endl;
        writesFile << writes << endl;
        reads = 0;
        writes = 0;
    }

    readsFile.close();
    writesFile.close();

    // Two-Sort
    vector<NHLDraft> draftPicks2Sort;
    getDataFromFile("../nhldraft.csv", draftPicks2Sort);
    twoSort(draftPicks2Sort, reads, writes);
    cout << "Two-Sort\nReads: " << reads << "\nWrites: " << writes << endl;

    return 0;
}