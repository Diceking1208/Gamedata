#define _CRT_SECURE_NO_WARNINGS  // sprintf_s �Լ��� ����ϱ� ���� ��� ����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

int userid = 0;
int Isgame = 1;
int isTry = 0;
int level = 0;
int randNum = 0;
int Num = 100;
int furnitureNum = 0;
int furnitureBuy = 0;
int buyMoney = 0;
int CashBuy = 0;
int buy = 0;
int sell = 0;
int wallet = 50000;
char* house[] = { "���￪ ���", "�����Ͽ���", "���� ������ ����", "���� ����", "������ ����", "���� ����", "���� ���� ������ ����", "�������� ������ ����", "���� �� ������ ����", "������ ����", "¼�� ����", "�� ����Ʈ", "�׳� ���� ����Ʈ", "���ִ� ����Ʈ", "ȣȭ�ο� ����Ʈ", "�����ִ� �ܵ�����", "�ñ״Ͽ�" };
bool tnf = true; //��������
bool sellHome = false;
int nowlevel = 0;
int futurelevel = 0;
char datatime[200];
char datadate[200];
struct tm* t;
int choice = 0; //������ ����


//������ �α׿� ���� ����
/*
userid           ���� �й�
local_time ����  ��¥,�ð�
wallet           ������
nowlevel         ���� �ܰ�
futurelevel      ���� �ܰ�
tnf              ��ȭ ��������
furnitureNum     ������ ����
sell + buyMoney  ���� ����
sellHome         �� �Ǹ� ����
*/

void PostUser()
{
    char command[2048];
    time_t now = time(NULL);
    struct tm* local_time = localtime(&now);

    sprintf_s(command, sizeof(command), "curl -d \"{\\\"�÷��̾�ID\\\":\\\"%d\\\",\\\"�����Ͻ�\\\":\\\"%d�� %d��\\\",\\\"������\\\":%d,\\\"����ܰ�\\\":%d,\\\"�����ܰ�\\\":%d,\\\"����\\\":\\\"%d\\\",\\\"��������\\\":%s,\\\"���Ű���\\\":\\\"%d\\\",\\\"����\\\":%d,\\\"���Ǹ�\\\":%s,\\\"�ð�\\\":\\\"%d:%d:%d\\\"}\" https://script.google.com/macros/s/AKfycby-ZPjp6MIQKeZ6Ao46uFZKZAOU9NqnvuWkw6yrnvbp2mQqy_42skd0nwDC2Mm0MDOBgg/exec",
        userid, local_time->tm_mon + 1, local_time->tm_mday + 1, wallet, nowlevel , futurelevel, choice, tnf ? "true" : "false", furnitureNum, sell + buyMoney, sellHome ? "true" : "false", local_time->tm_hour, local_time->tm_min, local_time->tm_sec);

    system(command);
}

int main(void)
{
    time_t timer = time(NULL);
    t = localtime(&timer);
    srand((unsigned int)time(NULL));

    login();
    while (Isgame==1)
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
            default: Num = 100; buy = 2000; sell = 0;     break;
        }
        
         maingame();
         printf("\n����Ϸ��� �ƹ� Ű�� �����ʽÿ�.\n");
         _getch();
    }
    return 0;
}



void Store()
{
   system("@cls||clear");
    printf("     ���� �� : %d ��\n", wallet);
    printf("     ���� �� : %s\n\n", house[level]);
    printf("        ���׸��� ����\n");
    printf("       < ������ ������  >\n");
    printf("-------------------------------\n");
    printf("     1.�ɹ��� ����     (- 5200 ��) \n");
    printf("     2.����� �ٴ�     (- 9700 ��)\n");
    printf("     3.Ȳ�ݺ���     (- 128,000 ��)\n");
    printf("     4.�˷ϴ޷Ͽ���  (- 34,000 ��)\n");
    printf("     5.�������� ���ư��� \n ");
    printf("-------------------------------\n");
    printf("        �Է� : ");
    scanf_s("%d", &furnitureBuy);


    switch (furnitureBuy)
    {
        case 1:
            wallet -= 5200;
            printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
            printf("     ���� �� : %d ��\n", wallet);
            break;
        case 2:
            wallet -= 9700;
            printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
            printf("     ���� �� : %d ��\n", wallet);
            break;
        case 3:
            wallet -= 128000;
            printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
            printf("     ���� �� : %d ��\n", wallet);
            break;
        case 4:
            wallet -= 34000;
            printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
            printf("     ���� �� : %d ��\n", wallet);
            break;
        case 5:
            break;
        default:
            maingame();
            break;
    }
    return 0;
}

void Cash()
{
    system("@cls||clear");
    printf("     ���� �� : %d ��\n", wallet);
    printf("     ���� �� : %s\n\n", house[level]);
    printf("          �����ϼ�\n");
    printf("       < ���� ������  >\n");
    printf("-------------------------------\n");
    printf("       �����ݾ�      ���ӸӴ� \n");
    printf("     1. 4,900��    (+ 5,000 ��) \n");
    printf("     2. 9,900��    (+ 10,000 ��)\n");
    printf("     3. 14,000��   (+ 12,800 ��)\n");
    printf("     4. 35,000��   (+ 32,500 ��)\n");
    printf("     5. 65,000��   (+ 65,000 ��)\n ");
    printf("    6. 99,000��   (+ 100,000��)\n ");
    printf("    7.�������� ���ư��� \n ");
    printf("-------------------------------\n");
    printf("        �Է� : ");
    scanf_s("%d", &CashBuy);

    switch (CashBuy)
    {
        case 1:
            wallet += 5000;
            printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
            printf("     ���� �� : %d ��\n", wallet);
            break;
        case 2:
            wallet += 10000;
            printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
            printf("     ���� �� : %d ��\n", wallet);
            break;
        case 3:
            wallet += 12800;
            printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
            printf("     ���� �� : %d ��\n", wallet);
            break;
        case 4:
            wallet += 32500;
            printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
            printf("     ���� �� : %d ��\n", wallet);
            break;
        case 5:
            wallet += 65000;
            printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
            printf("     ���� �� : %d ��\n", wallet);
            break;
        case 6:
            wallet += 100000;
            printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
            printf("     ���� �� : %d ��\n", wallet);
            break;
        case 7:
            break;
        default:
            maingame();
            break;
    }
    return 0;
}

int maingame()
{       
        system("@cls||clear");
        printf("     ���� �� : %d ��\n", wallet);
        printf("     ���� �� : %s\n", house[level]);
        printf(" ���� ��ȭ �Ͻðڽ��ϱ� ? \n\n");
        printf("   < ����Ȯ�� : %d %% >\n", Num);
        printf("-------------------------------\n");
        printf("     1.�� ����      (- %d ��)\n", buy);
        printf("     2.���� �ϱ�  \n");
        printf("     3.�� �Ǹ�      (+ %d ��)\n", sell);
        printf("     4.���� ����     \n");
        printf("     5.�����ϱ�     (ó�����ʹٽ�)\n");
        printf("-------------------------------\n");
        printf("        �Է� : ");
        scanf_s("%d", &isTry);

        switch (isTry)
        {
            case 1:        // ��ȭ�� ���� �� ���
                randNum = rand() % 100 + 1;
                choice = 1;

            // ������ ���� ���� ����Ȯ�� ���� ������ ����
            if (randNum < Num) {
                sellHome = false;
                tnf = true;
                // ����ȭ�� ���
                wallet -= buy;
                printf("\n\n���� : %d ��\n\n", wallet);
                printf("************* SUCCESS *************\n");
                printf("  %s  ->  %s    \n", house[level], house[level + 1]);
                printf("************* SUCCESS *************\n");
                nowlevel = level+1;
                futurelevel = level + 2;
                level++;
            }
            else
            {
                sellHome = false;
                tnf = false;
                // ����ȭ�� ���
                wallet -= buy;
                printf("\n\n���� : %d ��\n", wallet);
                printf("         �� ���߳�...\n");
                printf("�� '%s' �� �Ҿ����ϴ�.\n", house[level]);
                nowlevel = level + 1;
                futurelevel = level + 2;
                level = 0;
                
            }
            break;

            case 2:
                Cash();
                break;

            case 3:
                choice = 3;
                sellHome = true;
                nowlevel = level + 1;      //�ش� �ܰ� ���� ����
                futurelevel = level + 2;
                tnf = false;               //�� �ǸŽ� ��ȭ������ false�� ��.
                wallet += sell;
                printf("\n\n���� : %d ��\n", wallet);
                printf("  %s  ->  %s    \n\n", house[level], house[0]);
                level = 0;
                break;

            case 4:
                choice = 4;
                Store();
                break;
        }
        PostUser();
}


int login()
{
    system("@cls||clear");
    printf("            �� �� ��\n", wallet);
    printf("---------------------------------------\n\n");
    printf("       id�� �й��� �Է��ϼ���. \n");
    printf("         �����ڸ�� : 1234  \n");
    printf("            ID : ");
    scanf_s("%d", &userid);
    printf("\n\n-----------------------------------\n");

    switch (userid)
    {
        int input=0;
        case 1234:
            wallet = 999999999;
            printf(" �ݾ��� 999,999,999������ ���۵˴ϴ�. \n");
            printf(" ������ ������ �Է��ϼ��� :  ");
            scanf_s("%d", &input);
            level = input;
            break;
        default: level = 0;
         break;
    }
    return 0;

}
