#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fx(int a)
{
    if (a < 0)
    {
        return 1;
    }
    else if (a == 0)
    {
        return 0;
    }
    else if (a > 0)
    {
        return -1;
    }
}

int main() {
    int x = 0;
    printf(" ‰»Î£∫");
    scanf("%d", &x);
    int y = fx(x);
    printf(" ‰≥ˆ£∫%d\n", y);
    return 0;
}