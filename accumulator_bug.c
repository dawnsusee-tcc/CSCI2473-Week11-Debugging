/* INTENTIONAL LOGIC BUG: use for guided debugging. */
#include <stdio.h>

int add_value(int total, int value)
{
    return total + value;
}

int calculate_total(const int values[], int count)
{
    int total = 0;
    for (int i = 0; i < count; i++)
    {
        total = 0;
        total = add_value(total, values[i]);
    }
    return total;
}

int main(void)
{
    int values[] = {12, 8, 15, 10, 5};
    int count = sizeof(values) / sizeof(values[0]);
    printf("Total: %d\n", calculate_total(values, count));
    return 0;
}
