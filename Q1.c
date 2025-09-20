//Write a program to input n integers into an array and perform the following using loops:
//(a) Find the largest and smallest number.
//(b)  Calculate the average of all numbers.
//(c)count how many numbers are even and how many are odd.
#include<stdio.h>
int main(){
    int n , i , max , min ,even = 0 , odd = 0 , sum = 0;

    printf("Enter the elements of array:");
    scanf("%d" , &n);

    int arr[n];

    printf("Enter %d integers:\n" , n);
    for ( i = 0; i < n ; i++)
    {
    scanf("%d" , &arr[i]);
    }

    max = arr[0];
    min = arr[0];
   

    for ( i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
        sum = sum + arr[i];
        
        if (arr[i] % 2 == 0)
        {
            even++;
        }else{
            odd ++;
        }
        
    }
    
    float average = (float)sum / n;
    
   

    printf("Largest number is : %d\n" , max);
    printf("smallest number is : %d\n" , min);
    printf("Average of elements of array is %f\n" ,average);
    printf("Number of even elements in array is : %d\n" , even);
    printf("Number of evenodd elements in array is : %d\n" , odd);

    return 0;
    
        
    }
    