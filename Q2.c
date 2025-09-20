/* Write a program to input n integers in an array. Ask the user for a number and check if
it exists in the array using the ternary operator. Print "Found" or "Not Found".*/

#include <stdio.h>

int main() {
    int n; // n = total number of integers
    printf("How many numbers you want to enter: ");
    scanf("%d",&n);

    int numbers[n]; // numbers is an array of n size.
    for (int i=0 ; i<n ; i++) {
      printf("Enter number: ");
      scanf("%d",&numbers[i]); // Input number in i positon of array numbers[n].
    }
    int search,found=0; // search is a variable used to find number.
    printf("\nEnter the number you want to found: "); 
    scanf("%d",&search);

    //Ternary:- Condition ? do something if True : do something if False
    int j;
    for (int i=0 ; i<n ; i++) { //If found remains 0 at the end of program then the number doesn't exist.
        numbers[i] == search ? (found = 1,j=i) : (found = found); 
    } found == 1 ? printf("Found at index %d",j) : printf("Not found"); //If a number is exist it prints Found otherwise Not Found.
    return 0;
}
//End of Program.