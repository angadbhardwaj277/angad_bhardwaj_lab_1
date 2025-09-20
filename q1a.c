#include<stdio.h>

int a[0], lar, small, n;

printf("enter the num of elements in the aray:");
scanf("%d",&n); 
printf("enter the elements in the aray:");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
lar=a[0];
small=a[0];
for(int i=1;i<n;i++)
{
    if(a[i]>lar)
    {
        lar=a[i];
    }
    if(a[i]<small)
    {
        small=a[i];
    }
}
printf("largest element is %d\n",lar);
printf("smallest element is %d\n",small);
return 0;
