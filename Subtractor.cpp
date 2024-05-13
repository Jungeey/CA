#include <stdio.h>

int i, d = 1;

void input1(int x[]) {
    for (i = 0; i < 8; i++) {
        scanf("%1d", &x[i]);
    }
}

void cmpl2(int x[]) {
    int carry = 1; 
    for (int i = 7; i >= 0; i--) {
        x[i] = 1 - x[i]; 
        x[i] += carry;   
        carry = x[i] / 2; 
        x[i] %= 2; 
    }
}

int main() {
    int a[8], b[8], c[8];
    
    printf("Enter the first 8-bit binary number:");
    input1(a);
    
    printf("Enter the second 8-bit binary number:");
    input1(b);
    
    cmpl2(b);
    
    for (i = 7; i >= 0; i--) {
        c[i] = a[i] + b[i] + d;
        d = c[i] / 2;
        c[i] = c[i] % 2;
    }
    
    printf("\nThe difference of the given two binary numbers is:\n");
    if (d == 0) {
        d = 1;
        cmpl2(c);
        printf("sign = %d\n", 1);
    } else {
        printf("sign = %d\n", 0);
    }

    printf("Result: ");
    for (i = 0; i < 8; i++) {
        printf("%d", c[i]);
    }
    
    return 0;
}

