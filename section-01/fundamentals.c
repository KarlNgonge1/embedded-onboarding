#include <stdio.h>
#include <stdlib.h>

void printHello() {
   printf("Hello, World!\n");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void FizzBuzz(int n) {

    if (n % 3 == 0 && n % 5 == 0) {
        printf("FizzBuzz");
    }
    else if (n % 3 == 0)
    {
        printf("Fizz");
    }
    else if (n % 5 == 0)
    {
        printf("Buzz");
    }
}

int compareDescending(const void *a, const void *b)
{
    int num1 = *(const int *)a;
    int num2 = *(const int *)b;

    if (num1 < num2)
    {
        return 1;
    }
    else if (num1 > num2)
    {
        return -1;
    }

    return 0;
}

int main()
{

    printHello();

    int x = 5;
    int y = 10;

    printf("\nBefore I swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After I swap: x = %d, y = %d\n", x, y);

    

    int *numbers = malloc(20 * sizeof(int));

    for (int i = 0; i < 20; i++) {
        *(numbers + i) = i + 1;
    }
    
    printf("Function using array\n");

    for (int i = 0; i < 20; i++) {
        printf("%d: ", *(numbers + i));
        
        FizzBuzz(*(numbers + i));
        printf("\n");
        
    }
    
    printf("\nFizzBuzz from 1 to 30\n");

    for (int i = 1; i <= 30; i++)
    {
        printf("%d: ", i);

        FizzBuzz(i);

        printf("\n");
    }

    qsort(numbers, 20, sizeof(int), compareDescending);
    printf("\nSorted desending:\n");

    for(int i = 0; i < 20; i++)
    {
        printf("%d ", *(numbers + i));
        
    }

    printf("\n");

    free(numbers);

    return 0;

}