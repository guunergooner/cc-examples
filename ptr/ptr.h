#ifndef __PTR_H__
#define __PTR_H__

class CPtr{
public:
    CPtr() {}
    ~CPtr() {}

    typedef struct tagTestData{
        std::string strS1;
        std::string strS2;
    } TEST_DATA_S;

    void testSharedPtrMap(int size);
};

#endif
