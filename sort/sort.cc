#include "gflags/gflags.h"
#include "glog/logging.h"
#include "sort.h"

void CSort::bubbleSort1(int array[], int size)
{
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 1; j < size - i; ++j) {
            if (array[j - 1] > array[j]) {
                array[j - 1] = array[j - 1] ^ array[j];
                array[j] = array[j] ^ array[j - 1];
                array[j - 1] = array[j - 1] ^ array[j];
            }

            LOG(INFO) << "i = " << i << ", j = " << j;
        }

        LOG(INFO) << "i = " << i << ", size = " << size;
    }

    return;
}

void CSort::bubbleSort2(int array[], int size)
{
    while (size > 1) {
        for (int j = 1; j < size; ++j) {
            if (array[j - 1] > array[j]) {
                array[j - 1] = array[j - 1] ^ array[j];
                array[j] = array[j] ^ array[j - 1];
                array[j - 1] = array[j - 1] ^ array[j];
            }

            LOG(INFO) << "j = " << j << ", size = " << size;
        }

        --size;
    }

    return;
}

void CSort::insertSort(int array[], int size)
{
    for (int i = 1; i < size; ++i) {
        for (int j = i - 1; j >= 0 && array[j] > array[j + 1]; --j) {
            array[j] = array[j] ^ array[j + 1];
            array[j + 1] = array[j + 1] ^ array[j];
            array[j] = array[j] ^ array[j + 1]; 

            LOG(INFO) << "j = " << j << ", i =" << i;
        }
    }

    return;
}

int CSort::quickPartition(int array[], int start, int end)
{
    int i = start;
    int j = end - 1;
    int pivot = array[i];

    while(i < j) {
        while(i < j && array[j] >= pivot) j--;
        array[i] = array[j];

        while(i < j && array[i] <= pivot) i++;
        array[j] = array[i];
    }

    array[i] = pivot;

    LOG(INFO) << "i = " << i << ", pivot = " << pivot;

    return i;
}

void CSort::quickSort(int array[], int start, int end)
{
    if (start < end - 1) {
        int pivot_pos = quickPartition(array, start, end);
        quickSort(array, start, pivot_pos);
        quickSort(array, pivot_pos + 1, end);
    }
}

