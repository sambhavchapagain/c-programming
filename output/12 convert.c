#include <stdio.h>

int main() {
    double feet, inches;

    printf("Enter length in feet: ");
    scanf("%lf", &feet);
      inches = feet * 12;
    printf("%.2lf feet is equal to %.2lf inches\n", feet, inches);

    return 0;
}
