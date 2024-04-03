#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define MAX_PROBABILITY 100.0f              // ����Ȯ�� �ִ�ġ
#define MAX_FILE_PATH_LENGTH 20             // ���� ����� �ִ� ���� ����

// ���� ��� �迭 ����
char FILE_PATH[][MAX_FILE_PATH_LENGTH] = { "resultdata1.txt", "resultdata2.txt", "resultdata3.txt" };

void saveToFile(int level, const char* house, int wallet, int index);

int main(void)
{
    int isTry = 0;                          // ��ȭ�� �� ������ ����
    int level = 0;                          // ���� ������ ����
    time_t retTime = 0;                     // ���ð� �ӽ�����
    int randNum = 0;                        // �������� ����
    int Num = 100;                          // Ȯ�� ����
    int buy = 0;                            // �� ����
    int sell = 0;                           // �� �ȶ�
    int wallet = 50000;                     // ���� ������ �ִ� �ݾ�
    int selectedFile;                       // �����ϱ� ��� �߰�

    char* house[] = { "���￪ ���","�����Ͽ���","���� ������ ����", "���� ����","������ ����","���� ����","���� ���� ������ ����","�������� ������ ����","���� �� ������ ����","������ ����","¼�� ����","�� ����Ʈ","�׳� ���� ����Ʈ","���ִ� ����Ʈ","ȣȭ�ο� ����Ʈ","�����ִ� �ܵ�����","�ñ״Ͽ�" };
    srand((int)time(NULL));                 // ���� �õ尪 ����

    while (1)
    {
        // ȭ�� ����
        system("@cls||clear");
        switch (level)
        {
        case 0:  Num = 100; buy = 2000;  sell = 0;  break;
        case 1:  Num = 95; buy = 4000;  sell = 10000; break;
        case 2:  Num = 90; buy = 6000;  sell = 20000; break;
        case 3:  Num = 87; buy = 8000;  sell = 25000; break;
        case 4:  Num = 85; buy = 10000; sell = 30000; break;
        case 5:  Num = 83; buy = 12000; sell = 35000; break;
        case 6:  Num = 80; buy = 14000; sell = 40000; break;
        case 7:  Num = 77; buy = 16000; sell = 45000; break;
        case 8:  Num = 75; buy = 18000; sell = 50000; break;
        case 9:  Num = 73; buy = 20000; sell = 55000; break;
        case 10: Num = 70; buy = 22000; sell = 60000; break;
        case 11: Num = 68; buy = 24000; sell = 65000; break;
        case 12: Num = 65; buy = 26000; sell = 70000; break;
        case 13: Num = 63; buy = 28000; sell = 75000; break;
        case 14: Num = 60; buy = 30000; sell = 80000; break;
        case 15: Num = 58; buy = 33000; sell = 85000; break;
        case 16: Num = 55; buy = 36000; sell = 90000; break;
        default: Num = 100; buy = 2000; sell = 0;
            break;
        }
        // ȭ�� ����
        system("@cls||clear");
        printf(" ���� : %d ��\n\n", wallet);
        printf(" ���� �� : %s\n", house[level]);
        printf("   < ����Ȯ�� : %d %% >\n", Num);
        printf(" ���� ��ȭ �Ͻðڽ��ϱ� ? \n\n");
        printf("     1.�� ����      (- %d ��)\n", buy);
        printf("     2.������ ���  (��������)\n");
        printf("     3.�� �Ǹ�      (+ %d ��)\n", sell);
        printf("     4.�����ϱ�     (ó�����ʹٽ�)\n");
        printf("     5.�ҷ�����\n");
        printf("-------------------------------\n");
        printf("        �Է� : ");
        scanf_s("%d", &isTry);

        switch (isTry)
        {
        case 1:        // ��ȭ�� ���� �� ���
            randNum = rand() % 100 + 1;

            // ������ ���� ���� ����Ȯ�� ���� ������ ����
            if (randNum < Num) {
                // ����ȭ�� ���
                wallet -= buy;
                printf("\n\n���� : %d ��\n\n", wallet);
                printf("************* SUCCESS *************\n");
                printf("  %s  ->  %s    \n", house[level], house[level + 1]);
                printf("************* SUCCESS *************\n");
                level++;
            }
            else
            {
                // ����ȭ�� ���
                wallet -= buy;
                printf("\n\n���� : %d ��\n", wallet);
                printf("         �� ���߳�...\n");
                printf("�� '%s' �� �Ҿ����ϴ�.\n", house[level]);

                // ��ȭ ���� �� ������ �� �̸��� ���Ͽ� ����
                saveToFile(level, house[level], wallet, 0); // ���� ��Ȳ�� ���Ͽ� ����

                // ���� ��ġ �ʱ�ȭ
                level = 0;
            }
            break;
        case 2:
            // ���⸦ �� ��� ���α׷� ����
            printf("\n         �� ����~\n");
            return -1;
        case 3:
            wallet += sell;
            printf("\n\n���� : %d ��\n", wallet);
            printf("  %s  ->  %s    \n\n", house[level], house[0]);
            level = 0;
        case 4:
            // �����ϰ� ó������ �ٽ� �����ϴ� ��� �߰�
            while (1) 
            {
                printf("������ ������ �����ϼ��� (1~3): ");
                if (scanf_s("%d", &selectedFile) != 1 || selectedFile < 1 || selectedFile > 3)
                {
                    printf("�߸��� �Է��Դϴ�. 1���� 3 ������ ���ڸ� �Է����ּ���.\n");
                    while (getchar() != '\n'); // �Է� ���� ����
                }
                else 
                {
                    break;
                }
            }
            saveToFile(level, house[level], wallet, selectedFile - 1); // ���� ��Ȳ�� ������ ���Ͽ� ����
            printf("\n����Ǿ����ϴ�. ó������ �ٽ� �����մϴ�.\n");
            level = 0; // ���� �ʱ�ȭ
            wallet = 50000; // ���� �ʱ�ȭ
            break;
        }
        // �����Ȳ Ȯ���� ���� �ϵ��� ���
        printf("\n����Ϸ��� �ƹ� Ű�� �����ʽÿ�.\n");
        _getch();
    }
    return 0;
}

void saveToFile(int level, const char* house, int wallet, int index) 
{
    FILE* file = fopen(FILE_PATH[index], "w"); // ������ ���� ���� ���� (���� ���� ����)
    if (file != NULL) 
    {
        fprintf(file, "=======================\n��ȭ level:%d\n�� �̸�:%s\n����:%d\n=======================\n", level, house, wallet);
        fclose(file); 
    }
}



