#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define MAX_PROBABILITY 100.0f              // ����Ȯ�� �ִ�ġ


int main(void)
{
    int isTry = 0;                          // ��ȭ�� �� ������ ����
    int level = 0;                          // ���� ������ ����
    float probability = MAX_PROBABILITY;    // ���� ��ȭ ����Ȯ��
    time_t retTime = 0;                     // ���ð� �ӽ����� ����
    int randNum = 0;                        // �������� ������ ����
    int Num = 100;                          // Ȯ�� ����

    char* house[] = { "���￪ ���","�����Ͽ���","���� ������ ����", "���� ����","������ ����","���� ����","���� ���� ������ ����","�������� ������ ����","���� �� ������ ����","������ ����","¼�� ����","�� ����Ʈ","�׳� ���� ����Ʈ","���ִ� ����Ʈ","ȣȭ�ο� ����Ʈ","�����ִ� �ܵ�����","�ñ״Ͽ�" };
    srand((int)time(NULL));                 // ���� �õ尪 ����

    while (1)
    {
        switch (level)
        {
        case 0: Num = 100; break;
        case 1: Num = 95; break;
        case 2: Num = 90; break;
        case 3: Num = 87; break;
        case 4: Num = 85; break;
        case 5: Num = 83; break;
        case 6: Num = 80; break;
        case 7: Num = 77; break;
        case 8: Num = 75; break;
        case 9: Num = 73; break;
        case 10: Num = 70; break;
        case 11: Num = 68; break;
        case 12: Num = 65; break;
        case 13: Num = 63; break;
        case 14: Num = 60; break;
        case 15: Num = 58; break;
        case 16: Num = 55; break;
        default:
            break;
        }

        // ȭ�� ����
        system("@cls||clear");

        printf("  ���� �� : %s\n", house[level]);
        printf("     ����Ȯ�� : %d %%\n", Num);
        printf(" ���� ��ȭ �Ͻðڽ��ϱ� ? \n");
        printf("1.�� ����   2.������ ���\n");
        printf("---------------------------\n");
        printf("        �Է� : ");
        scanf_s("%d", &isTry);

        switch (isTry)
        {
        case 1:

            // ���� �� ����
            randNum = rand() % 100 + 1;
            // ������ ���� ���� ����Ȯ�� ���� ������ ����
            if (randNum < Num) {
                // ����ȭ�� ���
                printf("\n\n************* SUCCESS *************\n\n");
                printf("  %s  ->  %s    \n\n", house[level], house[level + 1]);
                printf("************* SUCCESS *************\n");

                level++;
            }
            else
            {
                // ����ȭ�� ���
                printf("\n\n�� ���߳�..\n");
                printf("%s ...  ���� �Ҿ����ϴ�.\n", house[0]);

                // ���� ��ġ �ʱ�ȭ
                level = 0;
            }
            break;

        case 2:
            // ���⸦ �� ��� ���α׷� ����
            printf("\n         �� ����~\n");
            return -1;
        }

        // �����Ȳ Ȯ���� ���� �ϵ��� ���
        printf("\n����Ϸ��� �ƹ� Ű�� �����ʽÿ�.\n");
        _getch();
    }

    return 0;
}
