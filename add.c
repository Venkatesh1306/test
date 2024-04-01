#include <stdio.h>

// Function declaration
int add(int a, int b);
int sub(int a, int b);

int main() {
    int num1, num2, sum,diff;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the add function and store the result in sum
    sum = add(num1, num2);
    diff = sub(num1,num2);


    // Display the sum
   //printf("Sum: %d\n", sum);
    
    // Check if the sum is equal to the sum of the two numbers
    if (sum == (num1 + num2)) {
        printf("Test passed\n");
    } else {
        printf("Test failed\n");
    }
        if (diff == (num1 - num2)) {
        printf("Test1 passed\n");
    } else {
        printf("Test1 failed\n");
    }
    
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
