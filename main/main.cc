#include <stdlib.h>

#include <iostream>
#include <string>

#include "gflags/gflags.h"
#include "glog/logging.h"

#include "ptr/ptr.h"
#include "sort/sort.h"

int sumNum(const std::string& number)
{
    int sum = 0;
    char szData[2] = {0};
    const char *pData = number.c_str();

    for (int i = 0; i < number.size(); ++i) {
        szData[0] = pData[i];
        sum += atoi(szData);
    }
    
    return sum;
}

int findMissingChild(const std::string& number){
    std::string strOrigin = "135791113151719";
    int iOriginSum = sumNum(strOrigin);
    int iRandomSum = sumNum(number);

    int iDiffNum = iOriginSum - iRandomSum;

    if (0 != iDiffNum % 2) {
        return iDiffNum;
    } else {
        return iDiffNum + 9;
    }
}

int main(int argc, char** argv)
{
    gflags::ParseCommandLineFlags(&argc, &argv, true); 
    google::InitGoogleLogging(argv[0]);

    LOG(INFO) << "initialize";

    CPtr oPtr;
    oPtr.testSharedPtrMap(1024);

    int array[10] = {1 ,3, 5, 7, 9, 2, 4, 6, 8, 0};

    CSort oSort;
    //oSort.insertSort(array, sizeof(array) / sizeof(array[0]));
    oSort.quickSort(array, 0, 10);

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        std::cout << "array[" << i << "]:" << array[i] << std::endl;
    }

    LOG(INFO) << "finalize";

    const std::string strNumber = "1311171535791";
    LOG(INFO) << "findMissingChild:" << findMissingChild(strNumber);

    return 0;
}
