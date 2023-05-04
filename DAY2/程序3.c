#include <stdio.h>
#include <math.h>
int main()
{
    /*
        思路：1. 三重循环，遍历这三个数，找到符合条件的数；同时缺点也十分明显！！ 时间复杂度上天了...
    */
    // long int x, y, i;

    // for (x = 1; x <= 2000; x++)
    // {
    //     for (y = 1; y <= 2000; y++)
    //     {
    //         for (i = 1; i <= 2000; i++)
    //         {
    //             if (x * x == i + 100 && y * y == i + 268)
    //                 printf("The num is %ld\n", i);
    //         }
    //     }
    // }

    /*
        思路：2. 等价替换，通过开方i可以在一次对i的遍历中得到x和y的值，然后通过开方i得到的x和y进行判断
                好处：只用到了一个循环，时间复杂度相对较低
    */
    long int x, y, i;
    for (i = 1; i <= 100000; i++)
    {
        x = sqrt(i + 100);
        y = sqrt(i + 268);

        if (x * x == i + 100 && y * y == i + 268)
            printf("The num is %ld\n", i);
    }

    return 0;
}
