#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define MAX_PROBABILITY 100.0f              // ����Ȯ�� �ִ�ġ
<<<<<<< HEAD
#define WAIT_TIME 2                         // ��ȭ ���ð�
=======

>>>>>>> 2db617296b57a4ac18d6eaad450aba138ad81e23

int main(void)
{
    int isTry = 0;                          // ��ȭ�� �� ������ ����
    int level = 0;                          // ���� ������ ����
    float probability = MAX_PROBABILITY;    // ���� ��ȭ ����Ȯ��
    time_t retTime = 0;                     // ���ð� �ӽ����� ����
    int randNum = 0;                        // �������� ������ ����
<<<<<<< HEAD

=======
    int Num = 100;                          // Ȯ�� ����

    char* house[] = { "���￪ ���","�����Ͽ���","���� ������ ����", "���� ����","������ ����","���� ����","���� ���� ������ ����","�������� ������ ����","���� �� ������ ����","������ ����","¼�� ����","�� ����Ʈ","�׳� ���� ����Ʈ","���ִ� ����Ʈ","ȣȭ�ο� ����Ʈ","�����ִ� �ܵ�����","�ñ״Ͽ�"};
>>>>>>> 2db617296b57a4ac18d6eaad450aba138ad81e23
    srand((int)time(NULL));                 // ���� �õ尪 ����

    while (1)
    {
<<<<<<< HEAD
        // ȭ�� ����
        system("@cls||clear");

        // Ÿ��Ʋ ȭ�� ���
        printf("*= Blacksmith With C =*\n");
        printf("  a game by devchanho\n\n");

        // ������ �ش��ϴ� �̸� ���
        switch (level) {
        case 1:
            printf("�̻��� �� : ���￪ �����\n");
            break;
        case 2:
            printf("�̻��� �� : ������ ������ ����\n");
            break;
        case 3:
            printf("�̻��� �� : ���� ������ ����\n");
            break;
        case 4:
            printf("�̻��� �� : ���� ����\n");
            break;
        case 5:
            printf("�̻��� �� : ������ ����\n");
            break;
        case 6:
            printf("�̻��� �� : ���� ����\n");
            break;
        case 7:
            printf("�̻��� �� : ���� ���� ������ ����\n");
            break;
        case 8:
            printf("�̻��� �� : �������� ������ ����\n");
            break;
        case 9:
            printf("�̻��� �� : ���� �� ������ ����\n");
            break;
        case 10:
            printf("�̻��� �� : ������ ����\n");
            break;
        case 11:
            printf("�̻��� �� : ¼�� ����\n");
            break;
        case 12:
            printf("�̻��� �� : �� ����Ʈ\n");
            break;
        case 13:
            printf("�̻��� �� : �׳� ���� ����Ʈ\n");
            break;
        case 14:
            printf("�̻��� �� : ���ִ� ����Ʈ\n");
            break;
        case 15:
            printf("�̻��� �� : ȣȭ�ο� ����Ʈ\n");
            break;
        case 16:
            printf("�̻��� �� : �����ִ� �ܵ�����\n");
            break;
        case 17:
            printf("�̻��� �� : �ñ״Ͽ�\n");
            break;
        default:
            printf("�̻��� �� : + %d\n", level);
        }

        printf("����Ȯ�� : %.2f%%\n", probability);
        printf("���� �����Ͻðڽ��ϱ�?\n");
        printf("1.�� ����   2.������ ���\n");
=======
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

        printf("  ���� �� : %s\n",house[level]);
        printf("     ����Ȯ�� : %d %%\n", Num);
        printf(" ���� ��ȭ �Ͻðڽ��ϱ� ? \n");
        printf("1.�� ����   2.������ ���\n");
        printf("---------------------------\n");
        printf("        �Է� : ");
>>>>>>> 2db617296b57a4ac18d6eaad450aba138ad81e23
        scanf_s("%d", &isTry);

        switch (isTry)
        {
<<<<<<< HEAD
        case 1:        // ��ȭ�� ���� �� ���
            printf("\n������..\n\n");

            // ������ �ð�(��) ��ŭ ���
            retTime = time(0) + WAIT_TIME;
            while (time(0) < retTime);

            // ���� �� ����
            randNum = rand() % 100;
            // ������ ���� ���� ����Ȯ�� ���� ������ ����
            if (randNum < probability) {
                // ����ȭ�� ���
                printf("***** SUCCESS *****\n");
                printf("*                 *\n");
                printf("*   + %d  ->  + %d  *\n", level, level + 1);
                printf("*                 *\n");
                printf("***** SUCCESS *****\n");

                // ��ȭ�� ���� ���� ��, ������ �ϳ� ���� ��Ű��, ����Ȯ���� ����
                // �� ��, ���� ����Ȯ���� 10%�� ���� ������ ����ġ�� �߰��� ����
                level++;
                probability -= (probability / 10.0f) * level;
=======
        case 1:   

            // ���� �� ����
            randNum = rand() % 100+1;
            // ������ ���� ���� ����Ȯ�� ���� ������ ����
            if (randNum < Num) {
                // ����ȭ�� ���
                printf("\n\n************* SUCCESS *************\n\n");
                printf("  %s  ->  %s    \n\n", house[level], house[level+1] );
                printf("************* SUCCESS *************\n");

                level++;
>>>>>>> 2db617296b57a4ac18d6eaad450aba138ad81e23
            }
            else
            {
                // ����ȭ�� ���
<<<<<<< HEAD
                printf("�� ���߳�..\n");
                printf("�� %d �ܰ�.. ���� �Ҿ����ϴ�.\n", level);

                // ���� ��ġ �ʱ�ȭ
                level = 0;
                probability = MAX_PROBABILITY;
=======
                printf("\n\n�� ���߳�..\n");
                printf("%s ...  ���� �Ҿ����ϴ�.\n", house[0]);

                // ���� ��ġ �ʱ�ȭ
                level = 0;
>>>>>>> 2db617296b57a4ac18d6eaad450aba138ad81e23
            }
            break;

        case 2:
            // ���⸦ �� ��� ���α׷� ����
<<<<<<< HEAD
            printf("�� ����~\n");
=======
            printf("\n         �� ����~\n");
>>>>>>> 2db617296b57a4ac18d6eaad450aba138ad81e23
            return -1;
        }

        // �����Ȳ Ȯ���� ���� �ϵ��� ���
        printf("\n����Ϸ��� �ƹ� Ű�� �����ʽÿ�.\n");
        _getch();
    }

    return 0;
}
