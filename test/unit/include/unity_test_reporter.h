#ifndef UNITY_TEST_REPORTER_H
#define UNITY_TEST_REPORTER_H

#include <stdio.h>
#include <time.h>
#include "unity_fixture.h"

#define CONSOLE_TEXT_COLOR_GREEN "\033[0;32m"
#define CONSOLE_TEXT_COLOR_RED "\033[0;31m"

static clock_t testStartTime;

static inline void UnityTestReporter_start(void) {
    testStartTime = clock();
}

static inline void UnityTestReporter_stopAndReport(void) {
    clock_t testEndTime = clock();
    double timeSpent = ((double)(testEndTime - testStartTime)*1000) / CLOCKS_PER_SEC;

    printf("%c%s%s %s in %lf ms\n",
        Unity.CurrentTestFailed ? '\n' : '\0',
        Unity.CurrentTestFailed ? CONSOLE_TEXT_COLOR_RED : CONSOLE_TEXT_COLOR_GREEN,
        Unity.CurrentTestName,
        Unity.CurrentTestFailed ? "failed" : "succeeded",
        timeSpent
    );
}

#endif
