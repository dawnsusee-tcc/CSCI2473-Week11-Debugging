#include <stdio.h>

void countdown(int number)
{
    if (number <= 0)
    {
        printf("Go!\n");
        return;
    }
    countdown(number - 1);
}

int main(void)
{
    countdown(3);
    return 0;
}
