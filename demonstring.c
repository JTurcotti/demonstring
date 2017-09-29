#include <stdio.h>
#include <string.h>
#define num 8


void swap(char **one, char **two) {
  char *temp = *one;
  *one = *two;
  *two = temp;
}
  

int main() {
  char *fruits[num] = {
    "green apple", "blueberry",
    "banana", "apricot", "blackberry",
    "apple", "grapefruit", "grape"};

  char *fruits2[num] = {
    "green apple", "blueberry",
    "banana", "apricot", "blackberry",
    "apple", "grapefruit", "grape"};
  
   int i, j;
   printf("sorted totally:\t\tsorted by first letter:\n");
   for (i = 0; i < num; i++)
     printf("fruits[%d]: %s\tfruits2[%d]: %s\n", i, fruits[i], i, fruits2[i]);
   printf("\n");
  
   for (i = 0; i < num-1; i++)
     for (j = 0; j < num-1; j++)
       if (strcmp(fruits[j], fruits[j+1]) > 0)
	 swap(&fruits[j], &fruits[j+1]);

   for (i = 0; i < num-1; i++)
     for (j = 0; j < num-1; j++)
       if (strncmp(fruits2[j], fruits2[j+1], 1) > 0)
	 swap(&fruits2[j], &fruits2[j+1]);
   
   for (i = 0; i < num; i++)
     printf("fruits[%d]: %s\tfruits2[%d]: %s\n", i, fruits[i], i, fruits2[i]);
}
  
