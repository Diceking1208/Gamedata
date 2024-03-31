#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define MAX_PROBABILITY 100.0f              // ����Ȯ�� �ִ�ġ
#define WAIT_TIME 2                         // ��ȭ ���ð�

int main(void)
{
    int isTry = 0;                          // ��ȭ�� �� ������ ����
    int level = 0;                          // ���� ������ ����
    float probability = MAX_PROBABILITY;    // ���� ��ȭ ����Ȯ��
    time_t retTime = 0;                     // ���ð� �ӽ����� ����
    int randNum = 0;                        // �������� ������ ����

    srand((int)time(NULL));                 // ���� �õ尪 ����

    while (1)
    {
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
        scanf_s("%d", &isTry);

        switch (isTry)
        {
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
            }
            else
            {
                // ����ȭ�� ���
                printf("�� ���߳�..\n");
                printf("�� %d �ܰ�.. ���� �Ҿ����ϴ�.\n", level);

                // ���� ��ġ �ʱ�ȭ
                level = 0;
                probability = MAX_PROBABILITY;
            }
            break;

        case 2:
            // ���⸦ �� ��� ���α׷� ����
            printf("�� ����~\n");
            return -1;
        }

        // �����Ȳ Ȯ���� ���� �ϵ��� ���
        printf("\n����Ϸ��� �ƹ� Ű�� �����ʽÿ�.\n");
        _getch();
    }

    return 0;
}
