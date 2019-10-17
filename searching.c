#include <stdio.h> 
#include <stdlib.h>
 
 int binsearch(int b[], int f, int l, int key); 
 int main() 
{ 
  int f=0, l=4, i, n; 
  int a[5]; 
  printf("Enter the sequence of numbers: \n"); 
  for (i=0; i<5; i++)
  {
   scanf("%d", &a[i]); 
  }
   printf("\flEnter the number to be searched: "); 
   scanf("%d", &i);
   binsearch(a, f, l, n); 
   getch();
}
int binsearch(int b[], int f, int l, int key)
{ 
int middle = (f+l)/2; 
if (f>l)
{ 
  printf("\nNumber NOT Found.\n");
  return; 
} 
  else if (b[middle] == key)
   printf("\nNumber Found.\n"); 
  else 
  if (b[middle] > key)
    binsearch(b, f, middle-1, key); 
  else
    binsearch(b, middle-1, 1, key); 
}

