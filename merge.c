#include<stdio.h>
int main()
{
int size1, size2;
//input size and elements of the first array
printf("Enter the size of the first array:");
scanf("%d",&size1);
int arr1[size1];
printf("Enter %d elements for the first array-\n",size1);
for(int i=0;i<size1;i++)
{
scanf("%d",&arr1[i]);
}
//input size and elements of the second array
printf("Enter the size of the second array:");
scanf("%d",&size2);
int arr2[size2];
printf("Enter %d elements for the second array-\n",size2);
for (int i=0;i<size2;i++)
{scanf("%d",&arr2[i]);
}
//Declare the third array with size equal to the sum of the first and second arrays
int size3=size1+size2;
int arr3[size3];
//Copy elements of the first array to the third array
for (int i=0;i<size2;i++)
{
arr3[size1+i]=arr2[i];
}
//print the merged array
printf("Meraged array:");
for (int i=0;i<size3;i++)
{
printf("%d",arr3[i]);
}
return 0;
}
