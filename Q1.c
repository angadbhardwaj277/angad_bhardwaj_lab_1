// Write a program to input n integers into an array and find largest and smallest integers in the array.

#include <stdio.h>

int main() {
   int n;
   printf("Ener the size of array: "); // n = total number of integers
   scanf("%d",&n);

   int a[n]; // numbers is an array of n size.
   for (int i=0 ; i<n ; i++) {
      printf("Enter number: ");
      scanf("%d",&a[i]); 
   }
// PART A
   //largest = largest integer of an array
   int larg = a[0]; 
   //smallest = smallest integer of an array
   int small = a[0]; 

   for (int i=0 ; i<n ; i++) {
      if (a[i] > larg) { //If a number is larger than the largest, then set largest equal to that number.
         larg = a[i];
      } if (a[i] < small) { //If a number is smaller than the smallest, then set smallest equal to that number.
         small = a[i];
      }
   }
   printf("\nThe largest number is %d\n",larg); //Prints the largest number in the array
   printf("The smallest number is %d\n",small); //Prints the smallest number in the array
    printf("\n");
   
// PART B
   int sum=0;
   for (int i=0 ; i<n ; i++) {
      scanf("%d",&a[i]); // Input number in i positon of array numbers[n].
      sum = sum + a[i]; // Gives the sum of all numbers in array.
    }
    float avg = sum/n; // Average = sum of all numbers / Total numbers
    printf("\nAverage of all numbers is %f",avg); // Prints the average of all numbers.
   return 0;
}
//End of Program.