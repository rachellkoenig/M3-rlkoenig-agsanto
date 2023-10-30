//
// Created by Alexis Santo on 4/3/23.
//

#ifndef PROJECT4_TWOSORT_H
#define PROJECT4_TWOSORT_H

#include "mergeSort.h"
#include "NHLDraft.h"
#include "printVec.h"

// First Sort - Merge Sort
template<typename Comparable>
vector<Comparable> firstSort(vector<Comparable>& vec, int& reads, int& writes) {
    mergeSortRec(vec, 0, vec.size() - 1, reads, writes);
    return vec;
}

// Second Sort - Insertion Sort
void secondSort(vector<NHLDraft> vec, int& reads, int& writes) {
    int unsortedStartIndex, insertIndex;
    NHLDraft toBeInserted;
    for (unsortedStartIndex = 1; unsortedStartIndex < vec.size(); ++unsortedStartIndex) {
        toBeInserted = vec[unsortedStartIndex]; // 1 read, 1 write
        // Update read and write count
        reads += 1;
        writes +=1;
        // Loop to shift over the larger elements
        insertIndex = unsortedStartIndex - 1;
        while (insertIndex >= 0 && vec[insertIndex].getYear() < toBeInserted.getYear()) {   // 2 reads
            // Update read count
            reads += 2;
            vec[insertIndex + 1] = vec[insertIndex];    // 1 read, 1 write
            // Update read and write count
            reads += 1;
            writes +=1;
            --insertIndex;
        }
        // Even if false, the second while loop condition counts as 2 reads
        reads += 2;
        // Put toBeInserted back into vec
        vec[insertIndex + 1] = toBeInserted;    // 1 read, 1 write
        // Update read and write count
        reads += 1;
        writes +=1;
    }
}

// Combine firstSort and secondSort to make twoSort
template<typename Comparable>
void twoSort(vector<Comparable> vec, int& reads, int& writes) {
    secondSort(firstSort(vec, reads, writes), reads, writes);
}

#endif //PROJECT4_TWOSORT_H
