#include <stdio.h>

void adder(int a[], int b[], int sum[], int control, int *carry_out) {
    int carry = 0;
    for (int i = 3; i >= 0; i--) {
        int bitSum;
        if (control == 0) {
            bitSum = a[i] + b[i] + carry;
        } else {
            bitSum = a[i] + (1 - b[i]) + carry;
        }
        sum[i] = bitSum % 2;
        carry = bitSum / 2;
    }
    *carry_out = carry;
}

void displayBinary(int num[]) {
    for (int i = 0; i < 4; i++) {
        printf("%d", num[i]);
    }
}

int main() {
    int a[4], b[4], sum[4], control, carry_out;
    
    printf("Enter the first 4-bit binary number: ");
    for (int i = 0; i < 4; i++) {
        scanf("%1d", &a[i]);
    }
    
    printf("Enter the second 4-bit binary number: ");
    for (int i = 0; i < 4; i++) {
        scanf("%1d", &b[i]);
    }

    printf("Enter the control signal (0 for addition, 1 for subtraction): ");
    scanf("%d", &control);
    
    adder(a, b, sum, control, &carry_out);
    
    if (control == 0) {
        printf("The sum of the two binary numbers is: ");
    } else {
        printf("The difference of the two binary numbers is: ");
    }
    displayBinary(sum);
    printf("\n");
    
    if (control == 0) {
        printf("Carry: %d\n", carry_out);
    } else {
        printf("Borrow: %d\n", carry_out);
    }
    
    return 0;
}

