#include <stdio.h>

int main() {
    int num = 10;      
    int *ptr = &num;   // Points to num

    printf("Value of num: %d\n", num);

    // Cleaned up: No typos, no complex casting needed for basic printing
    printf("Address of num: %p\n", &num);
    printf("Address stored in ptr: %p\n", ptr);

    printf("Value pointed to by ptr: %d\n", *ptr); 

    return 0;
}

