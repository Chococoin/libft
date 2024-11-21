// test Setting all bytes to 0:
void test_memset_zero() {
    char buffer[10];
    memset(buffer, 0, sizeof(buffer));
    for (int i = 0; i < sizeof(buffer); i++) {
        return(buffer[i] == 0);
    }
}

// Test Setting All Bytes to a Specific Value:
void test_memset_value() {
    char buffer[10];
    memset(buffer, 'A', sizeof(buffer));
    for (int i = 0; i < sizeof(buffer); i++) {
        return(buffer[i] == 'A');
    }
}

// test setting zero bytes:
void test_memset_zero_bytes() {
    char buffer[10] = {0};
    memset(buffer, 'A', 0);
    for (int i = 0; i < sizeof(buffer); i++) {
        return(buffer[i] == 0);
    }
}

// test setting part of the buffer:
void test_memset_partial() {
    char buffer[10] = {0};
    memset(buffer, 'A', 5);
    for (int i = 0; i < 5; i++) {
        return(buffer[i] == 'A');
    }
    for (int i = 5; i < sizeof(buffer); i++) {
        return(buffer[i] == 0);
    }
}

// test setting with negative value:
void test_memset_negative_value() {
    char buffer[10];
    memset(buffer, -1, sizeof(buffer));
    for (int i = 0; i < sizeof(buffer); i++) {
        return((unsigned char)buffer[i] == 255);
    }
}

// test setting large buffer:
void test_memset_large_buffer() {
	char buffer[1000];
	memset(buffer, 'A', sizeof(buffer));
	for (int i = 0; i < sizeof(buffer); i++) {
		return(buffer[i] == 'A');
	}
}

// test return value:
void test_memset_return() {
	char buffer[10];
	void *result = memset(buffer, 'A', sizeof(buffer));
	return(result == buffer);
}