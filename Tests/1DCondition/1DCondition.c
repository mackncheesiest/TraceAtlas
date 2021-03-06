#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WIDTH 1024
int main()
{
    int *input = (int *)malloc(sizeof(int) * WIDTH);
    int *output = (int *)malloc(sizeof(int) * WIDTH);

    srand(time(NULL));
    //initialize the data
    for (int i = 0; i < WIDTH; i++)
    {
        if (i % 2 == 0)
        {
            input[i] = 0;
        }
        else
        {
            input[i] = 1;
        }
    }

    for (int i = 0; i < WIDTH; i++)
    {
        int addition = 2;
        if (i % 3 == 0)
        {
            addition += 1;
        }
        output[i] = input[i] + addition;
    }

    printf("Success\n");
    return 0;
}