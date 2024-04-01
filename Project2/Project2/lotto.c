#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int* arr, int len)
{
    int temp;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

        }
    }
}

void main()
{
    int i, n, l;
    int b = 5000;
    int lotto[6], j;
    srand(time(NULL));
    printf("복권 첫 매 수는 1~5장을 구매하시겠습까?\n ");
    printf("총 금액 :%d\n", b);
    scanf_s("%d", &l);
    while (l--)
    {
        if (l <= 5) {
            for (i = 0; i < 6; i++)
                lotto[i] = 0;

            for (i = 0; i < 6; i++)
            {
                n = rand() % 45 + 1;
                for (j = 0; j < i; j++) // 중복 검사
                {
                    if (n == lotto[j])
                    {
                        n = rand() % 45 + 1;
                        j = 0;
                    }
                }
                lotto[i] = n;
            }
            sort(lotto, 6);
            for (i = 0; i < 6; i++) {
                printf("%2d ", lotto[i]);
            }
            printf("\n");

        }
        else {
            break;
        }
    }
        
 }

