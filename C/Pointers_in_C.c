#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int sum = *a + *b; // Calculate the sum
    int diff = abs(*a - *b); // Calculate the absolute difference
    *a = sum; // Update the value pointed to by a with the sum
    *b = diff; // Update the value pointed to by b with the difference
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
