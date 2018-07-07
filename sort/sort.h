#ifndef __SORT_H__
#define __SORT_H__

class CSort{
public:
    CSort() {}

    ~CSort() {}

    void bubbleSort1(int array[], int size);
    void bubbleSort2(int array[], int size);
    void insertSort(int array[], int size);
    void quickSort(int array[], int start, int end);

private:
    int quickPartition(int array[], int start, int end);
};

#endif
