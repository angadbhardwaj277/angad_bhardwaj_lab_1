// Write a program to find the transpose of a given 3 × 3 matrix.

#include <stdio.h>

//Transpose of a matrix[i,j] = matrix[j][i]
int main() {
    int matrix[3][3];
    for (int i=0 ; i<3 ; i++) {
        for (int j=0 ; j<3 ; j++) {
            printf("Enter number in row %d and column %d of matrix: ",i+1,j+1);
            scanf("%d",&matrix[i][j]); //Input number in matrix in row i and ccolumn j.
        }
    }
    printf("\nThe Transpose of this matrix is \n");
    for (int i=0 ; i<3 ; i++ ) {
        for (int j=0 ; j<3 ; j++) {
            printf("%d\t",matrix[j][i]); //Prints transpose of above matrix
        }printf("\n");
    }
    return 0;
}
//End of Program.