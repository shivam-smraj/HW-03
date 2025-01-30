#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

void fractionalToBinary(float frac) {
    printf(".");
    while (frac > 0) {
        frac *= 2;
        int bit = (int)frac;
        printf("%d", bit);
        frac -= bit;
    }
}

int main() {
    float num;
    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    int integerPart = (int)num;
    float fractionalPart = num - integerPart;

    printf("Binary equivalent: ");
    decimalToBinary(integerPart);
    fractionalToBinary(fractionalPart);
    printf("\n");

    return 0;
}