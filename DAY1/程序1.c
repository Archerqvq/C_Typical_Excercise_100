#include <stdio.h>

int main()
{
    int cnt = 0;
    // 一个循环遍历一个数字位的数，三个嵌套循环遍历三个数字位的数（个位，十位，百位）
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            for (int k = 1; k <= 4; k++)
            {
                // 在最里面的循环中判断三个数位的数字是否相等
                if ((i != j) && (i != k) && (k != j))
                {
                    printf("%d%d%d\n", i, j, k);
                    // 符合条件则cnt++
                    cnt++;
                }
            }
        }
    }

    printf("totally Having %d numbers correspond to the situation\n", cnt);
    return 0;
}