#include <stdio.h>

int main()
{
    //Counter variable
    int a;


    //For loop (pre-C99 standard)
    for (a = 10; a > 0 ; a--)
    {
        //Perform code tasks
        printf("a=%d\n", a);
    }

    // TASK A - count from 10 down to 0 in steps of -1

    // TASK B - count from 10 down to -10 in steps of -2
    int b;
    for (b = 10; b > -10; b = b - 2)
    {
        printf("b=%d\n", b);
    }

    // TASK C - count from 10 to 200 in steps of 10

    int c;
    for (c = 10; c < 200; c = c + 10)
    {
        printf("b=%d\n", b);
    }
    // TASK D - count from -10 down to 20 in steps of 5

    // TASK E - can you predict the largest value of i that is displayed?
    
    for (int i = 0; i < 12; i += 3)
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }
}