#ifndef SORTING_INSERTIONSORT_H
#define SORTING_INSERTIONSORT_H

#include "printVec.h"

template<typename Comparable>
void insertionSort(vector<Comparable> vec, int& reads, int& writes) {
    int unsortedStartIndex, insertIndex;
    Comparable toBeInserted;
    for (unsortedStartIndex = 1; unsortedStartIndex < vec.size(); ++unsortedStartIndex) {
        toBeInserted = vec[unsortedStartIndex]; // 1 read, 1 write
        // Update read and write count
        reads += 1;
        writes +=1;
        // Loop to shift over the larger elements
        insertIndex = unsortedStartIndex - 1;
        while (insertIndex >= 0 && vec[insertIndex] > toBeInserted) {   // 2 reads
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

#endif
