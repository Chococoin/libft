#include "test_runner.h"
#include <stdio.h>

void run_tests (t_test tests[], int test_count)
{
    int passed = 0;

    printf("Running %d tests...\n", test_count);
    for (int i = 0; i < test_count; i++)
    {
        printf("test %s:", tests[i].name);
        if (tests[i].function())
        {
            printf("PASSED\n");
            passed++;
        }
        else 
        {
            printf("FAILED\n");
        }
    }
    printf("\n%d/%d test passed\n", passed, test_count);
}