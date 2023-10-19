#ifndef SORTING_BUBBLESORT_H
#define SORTING_BUBBLESORT_H

#include "printVec.h"

template<typename Comparable>
void bubbleSort(vector<Comparable> vec, int& reads, int& writes) {
    int numPasses = 0, i;
    Comparable temp;
    bool haveSwapped = true;
    while (haveSwapped) {
        haveSwapped = false;
        for (i = 0; i+1 < vec.size()-numPasses; ++i) {
            // Compare items at indices i and i+1 and swap if necessary
            // This if condition is 2 reads
            reads += 2;
            if (vec[i] > vec[i+1]) {
                temp = vec[i];          // 1 read, 1 write
                vec[i] = vec[i+1];      // 1 read, 1 write
                vec[i+1] = temp;        // 1 read, 1 write
                // Update read and write count
                reads += 3;
                writes += 3;
                // Update haveSwapped
                haveSwapped = true;
            }
        }
        // Update numPasses
        ++numPasses;
    }
}

#endif
