

#include "CppUTest/TestHarness.h"
#include "CppUTest/CommandLineTestRunner.h"

extern "C"
{
#include "example-include/Example.h"
#include "example-include/Add.h"
}

/* declare TestGroup with name FirstTest */
TEST_GROUP(Test1)
{
	/* declare a setup method for the test group. Optional. */
    void setup ()
    {
    	/* Set method real_one to stub. Automatically restore in teardown */

    }

    /* declare a teardown method for the test group. Optional */
    void teardown()
    {
    }
}; /* do not forget semicolumn */

/* declare one test within the test group */
TEST(Test1, Test_Example)
{
    /* check two longs are equal */
    LONGS_EQUAL(1,example());
}


TEST(Test1, add_Test)
{
    LONGS_EQUAL(9, Add(4,5));
}

TEST(Test1, add_Test_2)
{
    LONGS_EQUAL(300, Add(100,200));
}


TEST(Test1, add_Test_3)
{
    LONGS_EQUAL(140, Add(70,70));
}

TEST(Test1, DIVISION_TEST)
{
    DOUBLES_EQUAL(division(100,40) , 2.6761654,0.2 );
}

int main(int ac, char **av)
{
    return CommandLineTestRunner::RunAllTests(ac, av); /* cover alternate method */
}
