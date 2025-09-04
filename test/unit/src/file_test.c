#include "unity_fixture.h"
#include "unity_test_reporter.h"

TEST_GROUP(ModuleName);

TEST_SETUP(ModuleName) {
    UnityTestReporter_start();
}

TEST_TEAR_DOWN(ModuleName) {
    UnityTestReporter_stopAndReport();
}

TEST(ModuleName, FirstTest) {
    TEST_FAIL_MESSAGE("Implement me!");
}

TEST_GROUP_RUNNER(ModuleName) {
    RUN_TEST_CASE(ModuleName, FirstTest);
}