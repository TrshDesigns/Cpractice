#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototype for demonstration
void printArray(int arr[], int size);
int factorial(int n);
void swap(int *a, int *b);

// Structure definition
struct Person {
    char name[50];
    int age;
};

// Union definition
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    // 1. Variables and Data Types
    printf("=== 1. Variables and Data Types ===\n");
    int integer = 42;
    float floating = 3.14159;
    double double_num = 2.718281828;
    char character = 'A';
    char string[] = "Hello, C!";
    
    printf("Integer: %d\n", integer);
    printf("Float: %.2f\n", floating);
    printf("Double: %.6f\n", double_num);
    printf("Character: %c\n", character);
    printf("String: %s\n\n", string);

    // 2. Arithmetic and Logical Operations
    printf("=== 2. Arithmetic and Logical Operations ===\n");
    int a = 10, b = 3;
    printf("a = %d, b = %d\n", a, b);
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);
    printf("Logical: (a > b) && (b != 0) = %d\n\n", (a > b) && (b != 0));

    // 3. Control Structures
    printf("=== 3. Control Structures ===\n");
    // If-else
    printf("If-else: ");
    if (a > b) {
        printf("%d is greater than %d\n", a, b);
    } else {
        printf("%d is not greater than %d\n", a, b);
    }

    // For loop
    printf("For loop (count 1 to 5): ");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // While loop
    printf("While loop (count down from 5): ");
    int count = 5;
    while (count > 0) {
        printf("%d ", count);
        count--;
    }
    printf("\n");

    // Switch
    printf("Switch case (day 3): ");
    int day = 3;
    switch (day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        default: printf("Other day\n");
    }
    printf("\n");

    // 4. Functions
    printf("=== 4. Functions ===\n");
    int n = 5;
    printf("Factorial of %d = %d\n", n, factorial(n));
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n\n", x, y);

    // 5. Arrays
    printf("=== 5. Arrays ===\n");
    int arr[] = {1, 2, 3, 4, 5};
    printf("Array elements: ");
    printArray(arr, 5);
    printf("\n\n");

    // 6. Pointers
    printf("=== 6. Pointers ===\n");
    int var = 100;
    int *ptr = &var;
    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", (void*)&var);
    printf("Value via pointer: %d\n", *ptr);
    printf("Address stored in pointer: %p\n\n", (void*)ptr);

    // 7. Structures
    printf("=== 7. Structures ===\n");
    struct Person person;
    strcpy(person.name, "Alice");
    person.age = 25;
    printf("Person: Name = %s, Age = %d\n\n", person.name, person.age);

    // 8. Unions
    printf("=== 8. Unions ===\n");
    union Data data;
    data.i = 10;
    printf("Union int: %d\n", data.i);
    data.f = 3.14;
    printf("Union float: %.2f\n", data.f);
    strcpy(data.str, "Union Demo");
    printf("Union string: %s\n\n", data.str);

    // 9. Dynamic Memory Allocation
    printf("=== 9. Dynamic Memory Allocation ===\n");
    int *dyn_array = (int*)malloc(3 * sizeof(int));
    if (dyn_array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    dyn_array[0] = 10; dyn_array[1] = 20; dyn_array[2] = 30;
    printf("Dynamically allocated array: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", dyn_array[i]);
    }
    printf("\n");
    free(dyn_array);
    printf("\n");

    // 10. File I/O
    printf("=== 10. File I/O ===\n");
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Failed to open file!\n");
        return 1;
    }
    fprintf(file, "This is a test file created by the C program!\n");
    fclose(file);
    printf("Wrote to 'output.txt'. Check the file!\n");

    file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Failed to open file for reading!\n");
        return 1;
    }
    printf("Reading from 'output.txt': ");
    char buffer[100];
    if (fgets(buffer, 100, file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);

    return 0;
}

// Function to print array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
