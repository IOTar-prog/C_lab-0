#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int a;
    printf("введите a: ");
    scanf("%d", &a);

    int b;
    printf("введите b: ");
    scanf("%d", &b);

    int c;
    printf("введите c: ");
    scanf("%d", &c);

    int dis = ((b * b) - 4 * a * c) / (2 * a);

    if ( dis > 0 )
    {
        int x1 = (-b + sqrt(dis)) / (2 * a);
	int x2 = (-b - sqrt(dis)) / (2 * a);

	printf("x1=%d ", x1);
	printf("x2=%d", x2);
    }

    if ( dis == 0 )
    {
	int x = -b / 2 * a;
	printf("x= %d", x);
    }
    
    if ( dis < 0 )
    {
	printf("решений нет");
    }

  return 0;
}

