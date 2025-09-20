//Write a program to input two 3 × 3 matrices. Perform and display:
//(a) Matrix addition [2 Marks]
//(b) Matrix subtraction [2 Marks]
//(c) Matrix multiplication [4 Marks]

#include<stdio.h>
int main() {
    int matrix1[3][3], matrix2[3][3];
    int sum[3][3], sub[3][3], product[3][3];
    int i, j, k;

    // Input for first matrix
    printf("Enter elements of first 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for second matrix
    printf("Enter elements of second 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Sum
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Subtraction
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sub[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Product
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            product[i][j] = 0;
            for(k = 0; k < 3; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display results
    printf("\nFirst Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix Addition:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix Subtraction:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix Multiplication:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}