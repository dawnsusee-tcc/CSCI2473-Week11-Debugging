#include <stdio.h>

int linear_search(const int values[], int count, int target)
{
    for (int i = 0; i < count; i++)
    {
        if (values[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int values[] = {12, 8, 15, 10, 5};
    int targets[] = {12, 15, 5, 99};
    for (int t = 0; t < 4; t++)
    {
        int index = linear_search(values, 5, targets[t]);
        if (index == -1)
        {
            printf("%d: not found\n", targets[t]);
        }
        else
        {
            printf("%d: index %d\n", targets[t], index);
        }
    }
    return 0;
}
