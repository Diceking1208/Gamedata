#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define MAX_PROBABILITY 100.0f              // ����Ȯ�� �ִ�ġ

int main(void)
{
    int isTry = 0;                          // ��ȭ�� �� ������ ����
    int level = 0;                          // ���� ������ ����
    time_t retTime = 0;                     // ���ð� �ӽ����� ����
    int randNum = 0;                        // �������� ������ ����
    int Num = 100;                          // Ȯ�� ����
    int k = 0;                              //�� ����
    int m = 0;                                //�� �ȶ�
    int a = 500000;                         //�� �ݾ�

    char* house[] = { "���￪ ���","�����Ͽ���","���� ������ ����", "���� ����","������ ����","���� ����","���� ���� ������ ����","�������� ������ ����","���� �� ������ ����","������ ����","¼�� ����","�� ����Ʈ","�׳� ���� ����Ʈ","���ִ� ����Ʈ","ȣȭ�ο� ����Ʈ","�����ִ� �ܵ�����","�ñ״Ͽ�" };
    srand((int)time(NULL));                 // ���� �õ尪 ����

    while (1)
    {

        // ȭ�� ����
        system("@cls||clear");

        printf("����Ȯ�� : %d %%\n", Num);
        printf("���� �����Ͻðڽ��ϱ�?\n");
        printf("1.�� ����   2.������ ��� \n");

        switch (level)
        {
        case 0: Num = 100; k = 2000; m = 0;  break;
        case 1: Num = 95; k = 4000; m = 10000; break;
        case 2: Num = 90; k = 6000; m = 20000; break;
        case 3: Num = 87; k = 8000; m = 25000; break;
        case 4: Num = 85;  k = 10000; m = 30000; break;
        case 5: Num = 83; k = 12000; m = 35000; break;
        case 6: Num = 80; k = 14000; m = 40000; break;
        case 7: Num = 77;  k = 16000; m = 45000; break;
        case 8: Num = 75; k = 18000; m = 50000; break;
        case 9: Num = 73; k = 20000; m = 55000; break;
        case 10: Num = 70; k = 22000; m = 60000;  break;
        case 11: Num = 68; k = 24000; m = 65000; break;
        case 12: Num = 65; k = 26000; m = 70000; break;
        case 13: Num = 63; k = 28000; m = 75000; break;
        case 14: Num = 60; k = 30000; m = 80000; break;
        case 15: Num = 58; k = 33000; m = 85000; break;
        case 16: Num = 55; k = 36000; m = 90000; break;
        default:
            break;
        }



        // ȭ�� ����
        system("@cls||clear");
        printf("�� �ݾ� : %d\n", a);
        printf("  ���� �� : %s\n", house[level]);
        printf("     ����Ȯ�� : %d %%\n", Num);
        printf(" ���� ��ȭ �Ͻðڽ��ϱ� ? \n");
        printf("1.�� ����   2.������ ��� 3.���ȱ�\n");
        printf("---------------------------\n");
        printf("        �Է� : ");
        scanf_s("%d", &isTry);

        switch (isTry)
        {
        case 1:        // ��ȭ�� ���� �� ���
            randNum = rand() % 100 + 1;

            // ������ ���� ���� ����Ȯ�� ���� ������ ����
            if (randNum < Num) {
                // ����ȭ�� ���
                a -= k;

                printf("\n\n************* SUCCESS *************\n\n");
                printf("  %s  ->  %s    \n\n", house[level], house[level + 1]);
                printf("************* SUCCESS *************\n");
                printf("����ݾ� : %d", a);
                level++;



            }
            else
            {
                // ����ȭ�� ���
                a -= k;
                printf("\n\n�� ���߳�..\n");
                printf("%s ...  ���� �Ҿ����ϴ�.\n", house[0]);

                // ���� ��ġ �ʱ�ȭ
                k = 50000;
                level = 0;
            }
            break;

        case 2:
            // ���⸦ �� ��� ���α׷� ����
            printf("�� ����~\n");
            printf("\n         �� ����~\n");
            return -1;

        case 3:
            a += +m;
            printf("  %s  ->  %s    \n\n", house[level], house[level - 1]);
            printf("����ݾ� : %d", a);
            level--;

        }
        // �����Ȳ Ȯ���� ���� �ϵ��� ���
        printf("\n����Ϸ��� �ƹ� Ű�� �����ʽÿ�.\n");
        _getch();
    }

    return 0;
}