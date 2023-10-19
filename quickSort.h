#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "printVec.h"

template<typename Comparable>
void quickSortUnstableRec(vector<Comparable> &vec, int startIndex, int endIndex, int& reads, int& writes) {
    // Recursive base case
    if (startIndex >= endIndex) {
        return;
    }

    // Choose a partition element
    Comparable partition = vec[startIndex]; // 1 read, 1 write
    // Update read and write counts
    reads += 1;
    writes += 1;

    // Loop through vec from startIndex to endIndex
    // Keep track of where the > partition elements start
    int i;
    int largerElementIndex = startIndex+1;
    Comparable temp;
    for (i = startIndex+1; i <= endIndex; ++i) {
        // This if condition is 2 reads
        reads += 2;
        if (vec[i] <= partition) {
            // Swap the smaller/equal item to the left of the larger items
            temp = vec[i];                      // 1 read, 1 write
            vec[i] = vec[largerElementIndex];   // 1 read, 1 write
            vec[largerElementIndex] = temp;     // 1 read, 1 write
            // Update read and write counts
            reads += 3;
            writes += 3;
            // Update largerElementIndex
            ++largerElementIndex;
        }
    }
    // Swap the partition element into place
    temp = vec[startIndex];                         // 1 read, 1 write
    vec[startIndex] = vec[largerElementIndex-1];    // 1 read, 1 write
    vec[largerElementIndex-1] = temp;               // 1 read, 1 write
    // Update read and write counts
    reads += 3;
    writes += 3;

    // Recursive calls for two halves
    quickSortUnstableRec(vec, startIndex, largerElementIndex-2, reads, writes);
    quickSortUnstableRec(vec, largerElementIndex, endIndex, reads, writes);
}

template<typename Comparable>
void quickSortUnstable(vector<Comparable> vec, int& reads, int& writes) {
    quickSortUnstableRec(vec, 0, vec.size() - 1, reads, writes);
}

template<typename Comparable>
void quickSortStableRec(vector<Comparable> &vec, int& reads, int& writes) {
    // Recursive base case
    if (vec.size() <= 1) {
        return;
    }

    // Choose a partition element
    Comparable partition = vec[0];  // 1 read, 1 write
    // Update read and write counts
    reads += 1;
    writes += 1;

    vector<Comparable> smaller, equal, larger;
    // Loop through vec and populate smaller, equal, larger
    int i;
    for (i = 0; i < vec.size(); ++i) {
        if (vec[i] < partition) {       // 2 reads
            smaller.push_back(vec[i]);  // 1 read, 1 write
            // Update read and write counts
            reads += 3;
            writes += 1;
        }
        else if (vec[i] > partition) {  // 2 reads
            larger.push_back(vec[i]);   // 1 read, 1 write
            // Update read and write counts
            reads += 5; // counts if condition & if-else condition
            writes += 1;
        }
        else {
            equal.push_back(vec[i]);    // 1 read, 1 write
            // Update read and write counts
            reads += 5; // counts if condition & if-else condition
            writes += 1;
        }
    }

    // Recursive calls
    quickSortStableRec(smaller, reads, writes);
    quickSortStableRec(larger, reads, writes);

    // Copy elements from smaller, equal, and larger back into vec
    for (i = 0; i < vec.size(); ++i) {
        if (i < smaller.size()) {
            vec[i] = smaller[i];    // 1 read, 1 write
            // Update read and write counts
            reads += 1;
            writes += 1;
        } else if (i < smaller.size() + equal.size()) {
            vec[i] = equal[i - smaller.size()]; // 1 read, 1 write
            // Update read and write counts
            reads += 1;
            writes += 1;
        } else {
            vec[i] = larger[i - smaller.size() - equal.size()]; // 1 read, 1 write
            // Update read and write counts
            reads += 1;
            writes += 1;
        }
    }
}

template<typename Comparable>
void quickSortStable(vector<Comparable> vec, int& reads, int& writes) {
    quickSortStableRec(vec, reads, writes);
}

#endif
