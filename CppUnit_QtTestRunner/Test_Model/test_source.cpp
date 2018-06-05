#include <cppunit/extensions/HelperMacros.h>
#include <Model.h>

class TestModel : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestModel);

    CPPUNIT_TEST(test1);

    CPPUNIT_TEST_SUITE_END();

public:

    void test1()
    {
        CPPUNIT_ASSERT(model::add(4,4) == 9);

    }


};

CPPUNIT_TEST_SUITE_REGISTRATION(TestModel);