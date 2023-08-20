#include <stdio.h>

int main()
 {
    int n1, n2, n3;

    printf("Enter the n1 nbr: ");
    scanf("%d", &n1);

    printf("Enter the n2 nbr: ");
    scanf("%d", &n2);

    printf("Enter the n3 nbr: ");
    scanf("%d", &n3);

    
    if (n1 >= n2 && n1 >= n3) 
    {
        printf("%d is the largest nbr.\n", n1);
    }
    else if (n2 >= n1 && n2 >= n3) 
    {
        printf("%d is the largest nbr.\n", n2);
    }
    else {
        printf("%d is the largest nbr\n", n3);
    }
    return 0;
}
