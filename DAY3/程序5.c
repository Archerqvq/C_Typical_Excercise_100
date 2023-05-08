#include <stdio.h>
int main()
{
    int x, y, z, temp; // x放最小的值，z放最大的值
    scanf("%d %d %d", &x, &y, &z);

    // printf("%d\n", (y > z) ? (x > y ? x : y) : (x > z ? x : z)); // 条件运算符

    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }

    if (x > z)
    {
        temp = x;
        x = z;
        z = temp;
    }

    if (y > z)
    {
        temp = y;
        y = z;
        z = temp;
    }

    printf("%d<%d<%d\n", x, y, z);

    return 0;
}