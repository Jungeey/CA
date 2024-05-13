#include <stdio.h>
int AND(int a, int b) {
    return a & b;
}

int OR(int a, int b) {
    return a | b;
}

int XOR(int a, int b) {
    return a ^ b;
}

int NOT(int a) {
    return !a;
}

int main() {
    int a,b;
    printf("Enter value of two inputs (0 or 1) :");
    scanf("%d%d",&a,&b);

	printf("AND(%d, %d) = %d\n", a, b, AND(a, b));
    printf("OR(%d, %d) = %d\n", a, b, OR(a, b));
    printf("XOR(%d, %d) = %d\n", a, b, XOR(a, b));
    printf("NOT(%d) = %d\n", a, NOT(a));
    printf("NOT(%d) = %d\n", b, NOT(b));

    return 0;
}
