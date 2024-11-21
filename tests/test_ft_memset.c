#include "../includes/libft.h" // Include the header file where ft_memset is declared
#include "test_runner.h"

// Test setting all bytes to 0
int test_memset_zero() {
    char buffer[10];
    ft_memset(buffer, 0, sizeof(buffer));
    for (int i = 0; i < (int)sizeof(buffer); i++) {
        if (buffer[i] != 0) {
            return 0; // Test failed
        }
    }
    return 1; // Test passed
}

// Test setting all bytes to a specific value
int test_memset_value() {
    char buffer[10];
    ft_memset(buffer, 'A', sizeof(buffer));
    for (int i = 0; i < (int)sizeof(buffer); i++) {
        if (buffer[i] != 'A') {
            return 0; // Test failed
        }
    }
    return 1; // Test passed
}

// Test setting zero bytes
int test_memset_zero_bytes() {
    char buffer[10] = {0};
    ft_memset(buffer, 'A', 0);
    for (int i = 0; i < (int)sizeof(buffer); i++) {
        if (buffer[i] != 0) {
            return 0; // Test failed
        }
    }
    return 1; // Test passed
}

// Test setting part of the buffer
int test_memset_partial() {
    char buffer[10] = {0};
    ft_memset(buffer, 'A', 5);
    for (int i = 0; i < 5; i++) {
        if (buffer[i] != 'A') {
            return 0; // Test failed
        }
    }
    for (int i = 5; i < (int)sizeof(buffer); i++) {
        if (buffer[i] != 0) {
            return 0; // Test failed
        }
    }
    return 1; // Test passed
}

// Test setting with negative value
int test_memset_negative_value() {
    char buffer[10];
    ft_memset(buffer, -1, sizeof(buffer));
    for (int i = 0; i < (int)sizeof(buffer); i++) {
        if ((unsigned char)buffer[i] != 255) {
            return 0; // Test failed
        }
    }
    return 1; // Test passed
}

// Test setting large buffer
int test_memset_large_buffer() {
    char buffer[1000];
    ft_memset(buffer, 'B', sizeof(buffer));
    for (int i = 0; i < (int)sizeof(buffer); i++) {
        if (buffer[i] != 'B') {
            return 0; // Test failed
        }
    }
    return 1; // Test passed
}

// Test return value
int test_memset_return_value() {
    char buffer[10];
    void *result = ft_memset(buffer, 'C', sizeof(buffer));
    return (result == buffer); // Test passed if result matches buffer
}