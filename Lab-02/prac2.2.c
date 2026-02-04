#include <stdio.h>

int main() {
    int ch;
    float a, b;

    while (1) {
        printf("\n1.Add 2.Table 3.Exit: ");
        scanf("%d", &ch);

        if (ch == 3) break;

        switch (ch) {
            case 1:
                printf("Enter 2 nos: ");
                scanf("%f %f", &a, &b);
                printf("Sum: %.2f\n", a + b);
                break;
            case 2:
                printf("Enter no for table: ");
                scanf("%f", &a);
                for (int i = 1; i <= 10; i++) 
                    printf("%.0f x %d = %.0f\n", a, i, a * i);
                break;
            default: printf("Invalid!\n");
        }
    }
    return 0;
}
