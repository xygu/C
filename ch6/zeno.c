/* zeno.c -- 序列的和 p135 */
#include <stdio.h>

int main(void)
{
    int t_ct;       // 项计数
    double time, x;
    int limit;

    printf("Enter the number of terms you want: ");
    scanf("%d", &limit);
    for (time = 0, x = 1, t_ct = 1; t_ct <= limit; t_ct++, x *= 2.0)
    {
        time += 1.0/x;
        printf("time = %f when terms = %d.\n", time, t_ct);
    }
    return 0;
}
