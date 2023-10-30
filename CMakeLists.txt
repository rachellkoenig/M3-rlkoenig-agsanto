cmake_minimum_required(VERSION 3.15)
project(M3-rlkoenig-agsanto)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(M3-rlkoenig-agsanto
        main.cpp
        NHLDraft.h
        NHLDraft.cpp
        bubbleSort.h
        heapSort.h
        insertionSort.h
        mergeSort.h
        printVec.h
        quickSort.h
        radixSort.h
        selectionSort.h
        twoSort.h)