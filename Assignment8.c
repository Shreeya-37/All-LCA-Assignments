#include <stdio.h>

void swapSpeeds(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int motor1, motor2;
    int *ptr1, *ptr2;

    ptr1 = &motor1;
    ptr2 = &motor2;

    printf("Enter speed of Motor 1: ");
    scanf("%d", ptr1);
    printf("Enter speed of Motor 2: ");
    scanf("%d", ptr2);

    printf("\n--- Before Swap ---\n");
    printf("Motor 1 Speed: %d | Memory Address: %p\n", *ptr1, (void*)ptr1);
    printf("Motor 2 Speed: %d | Memory Address: %p\n", *ptr2, (void*)ptr2);

    swapSpeeds(ptr1, ptr2);

    printf("\n--- After Swap (Verified) ---\n");
    printf("Motor 1 Speed: %d | Memory Address: %p\n", *ptr1, (void*)ptr1);
    printf("Motor 2 Speed: %d | Memory Address: %p\n", *ptr2, (void*)ptr2);

    return 0;
}
