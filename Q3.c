/* Write a program to input 10 integers (range 0–9). Store them in an array. 
Then, using a switch-case, print the frequency of each digit.*/

#include <stdio.h>

int main() {
   int numbers[10]; // numbers is an array of size 10.
   int frequency[10]={0}; // frequency is an array of size 10 stored how many times a number occur.
   for (int i=0 ; i<10 ; i++) {
      printf("Enter number (0-9): ");
      scanf("%d",&numbers[i]); //Input number (range 0-9) in an array numbers[10]
      switch (numbers[i]) {
         case 0: frequency[0]++; break;
         case 1: frequency[1]++; break;
         case 2: frequency[2]++; break;
         case 3: frequency[3]++; break;
         case 4: frequency[4]++; break;
         case 5: frequency[5]++; break;
         case 6: frequency[6]++; break;
         case 7: frequency[7]++; break;
         case 8: frequency[8]++; break;
         case 9: frequency[9]++; break;
         default: printf("Invalid input\n"); break;
      }
   }
   for (int i=0 ; i<10 ; i++) {
      printf("\nDigit %d occurs %d times",i,frequency[i]); //Prints how many times a number occur.
   }
   return 0;
}
//End of Program.