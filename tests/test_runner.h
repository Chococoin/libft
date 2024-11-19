#ifndef TEST_RUNNER_H 
#define TEST_RUNNER_H

typedef struct s_test {
    char *name;
    int (*function)(void);
} t_test;

void run_tests(t_test tests[], int test_count);

#endif