#include <map>
#include <string>
#include <iostream>
#include <memory>
#include "gflags/gflags.h"
#include "glog/logging.h"

#include "ptr.h"

void CPtr::testSharedPtrMap(int size)
{
    std::map<std::string, std::shared_ptr<TEST_DATA_S>> oTestDataMap;

    for (int i = 0; i < size; ++i) {
        std::shared_ptr<TEST_DATA_S> stTestData = std::make_shared<TEST_DATA_S>();

        stTestData->strS1 = std::string(1024, '#');
        stTestData->strS2 = std::string(1024, '#');

        oTestDataMap.insert(std::map<std::string, std::shared_ptr<TEST_DATA_S>>::value_type(std::to_string(i), stTestData));
    }

    return;
}
