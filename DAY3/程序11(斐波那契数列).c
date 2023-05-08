#include <stdio.h>

int main()
{
    int month, f1 = 1, f2 = 1;
    for (month = 1; month <= 12; month++)
    {
        printf("%12ld%12ld", f1, f2);

        // 每行输出4个
        if (month % 2 == 0)
        {
            printf("\n");
        }

        // 前两个月加起来给第三个月
        f1 = f1 + f2;
        // 前两个月加起来给第三个月
        f2 = f1 + f2;
    }
    return 0;
}