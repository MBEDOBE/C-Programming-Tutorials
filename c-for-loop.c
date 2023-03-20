#include <stdio.h>

int main() {
    //syntax of a for loop
    /*for(initialization; condition; updateStatement)
    {
        //code to be executed
    }*/
//Example 1
    /*int i;

    for (i = 1; i <= 10; i++)
    {
        printf("%d \n", i);
    }*/

    //Example 2
   /* int arr[] = {1,2,3,4,5};

    int size = sizeof(arr[0]);

    for(int i = 0; i < size; i++)
    {
        printf("%d \n", arr[i]);
    }*/
// Infinite loop example
   for(int i = 0; ; i++)
   {
       printf("%d \n", i);
   }

    return 0;
}
