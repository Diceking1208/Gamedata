#define _CRT_SECURE_NO_WARNINGS  // sprintf_s �Լ��� ����ϱ� ���� ��� ����
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
#include <stdbool.h>
#define MAX_FURNITURE 4

int userid = 0;
int Isgame = 1;
int isTry = 0;
int level = 0;
int randNum = 0;
int Num = 100;
int furnitureNum = 0;
int furnitureBuy = 0;
<<<<<<< HEAD
int buyMoney = 0;                       //���� ����
=======
#include <conio.h>
<<<<<<< HEAD
#include <stdbool.h>

int userid=0;
int Isgame = 1;
int isTry = 0;                          // ��ȭ�� �� ������ ����
int level = 0;                          // ���� ������ ����
int randNum = 0;                        // �������� ����
int Num = 100;                          // Ȯ�� ����
int furnitureNum = 0;                   // ���� ��ȣ
int furnitureBuy = 0;
int buyMoney = 0;                       //���� ����
int CashBuy = 0;
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
int buy = 0;                            // �� ����
int sell = 0;                           // �� �ȶ�
int wallet = 50000;                     // ���� ������ �ִ� �ݾ�
char* house[] = { "���￪ ���","�����Ͽ���","���� ������ ����", "���� ����","������ ����","���� ����","���� ���� ������ ����","�������� ������ ����","���� �� ������ ����","������ ����","¼�� ����","�� ����Ʈ","�׳� ���� ����Ʈ","���ִ� ����Ʈ","ȣȭ�ο� ����Ʈ","�����ִ� �ܵ�����","�ñ״Ͽ�" };
<<<<<<< HEAD
int housePrice[] = { 0, 2000, 4000, 6000, 8000, 10000, 12000, 14000, 16000, 18000, 20000, 22000, 24000, 26000, 28000, 30000, 33000, 36000 };// ���� �Ǹ��Ҷ��� ���� �����ϰ� �Ϸ��� �̷��� ��
bool tnf = true;
bool furnitureAvailable[MAX_FURNITURE] = { true, true, true, true };// ���� �Ǹ� ���� �Ǵ� ����



=======
int buyMoney = 0;
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
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52

int main(void)
{
    time_t timer = time(NULL);
    t = localtime(&timer);
    srand((unsigned int)time(NULL));

<<<<<<< HEAD
    //login();
    while (Isgame == 1)
=======
    login();
    while (Isgame==1)
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52
=======
int logintime = 20240425;
int nowtime = 2009;
bool tnf = true;




=======
>>>>>>> parent of 0db0fee (현질 추가)

    int isTry = 0;                          // ��ȭ�� �� ������ ����
    int level = 0;                          // ���� ������ ����
    int randNum = 0;                        // �������� ����
    int Num = 100;                          // Ȯ�� ����
    int furnitureNum = 0;                   // ���� ��ȣ
    int furnitureBuy = 0;
    int buyMoney = 0;                       //���� ����
    int buy = 0;                            // �� ����
    int sell = 0;                           // �� �ȶ�
    int wallet = 50000;                     // ���� ������ �ִ� �ݾ�
    char* house[] = { "���￪ ���","�����Ͽ���","���� ������ ����", "���� ����","������ ����","���� ����","���� ���� ������ ����","�������� ������ ����","���� �� ������ ����","������ ����","¼�� ����","�� ����Ʈ","�׳� ���� ����Ʈ","���ִ� ����Ʈ","ȣȭ�ο� ����Ʈ","�����ִ� �ܵ�����","�ñ״Ͽ�" };
    char* furniture[] = { "�ɹ��� ����", "����� �ٴ�", "Ȳ�ݺ���", "���ϴ�����","�ַι��", "�˷ϴ޷Ͽ���" };
    
int main(void)
{
     maingame();
}

<<<<<<< HEAD
    //login();
    while (Isgame==1)
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
    {
        // ȭ�� ����
        system("@cls||clear");
        switch (level)
        {
<<<<<<< HEAD
        case 0:  Num = 100; buy = 2000;  sell = 0;  break;
        case 1:  Num = 95; buy = 4000;
            if (furnitureBuy) {
                switch (furnitureBuy)
                {
                case 1:
                    sell += (5200 * 2) + housePrice[level] * 2; // �ɹ��� ������ ������ 5200 ��
                    break;
                case 2:
                    sell += (9700 * 2) + housePrice[level] * 2; // ����� �ٴ��� ������ 9700 ��
                    break;
                case 3:
                    sell += (128000 * 2) + housePrice[level] * 2; // Ȳ�ݺ����� ������ 128000 ��
                    break;
                case 4:
                    sell += (34000 * 2) + housePrice[level] * 2; // �˷ϴ޷Ͽ����� ������ 34000 ��
                    break;
                default:
                    break;}
            }else sell += 10000; break;// �̰� swtich �Լ� ���� ���� �־��µ� ��� �������� ������ ���� �̤�
        case 2:  Num = 90; buy = 6000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell += (5200 * 2) + housePrice[level] * 2; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell += (9700 * 2) + housePrice[level] * 2; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell += (128000 * 2) + housePrice[level] * 2; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell += (34000 * 2) + housePrice[level] * 2; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        } else  sell += 20000; break;
        case 3:  Num = 87; buy = 8000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell += (5200 * 2) + housePrice[level] * 2; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell += (9700 * 2) + housePrice[level] * 2; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell += (128000 * 2) + housePrice[level] * 2; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell += (34000 * 2) + housePrice[level] * 2; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }else  sell += 25000; break;
        case 4:  Num = 85; buy = 10000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        } else sell += 30000; break;
        case 5:  Num = 83; buy = 12000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        } else sell += 35000; break;
        case 6:  Num = 80; buy = 14000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }
            else sell += 40000; break;
        case 7:  Num = 77; buy = 16000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }else sell += 45000; break;
        case 8:  Num = 75; buy = 18000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        } else sell += 50000; break;
        case 9:  Num = 73; buy = 20000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        } else sell += 55000; break;
        case 10: Num = 70; buy = 22000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        } else sell += 60000; break;
        case 11: Num = 68; buy = 24000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        } else sell += 65000; break;
        case 12: Num = 65; buy = 26000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }else sell += 70000; break;
        case 13: Num = 63; buy = 28000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        } else sell += 75000; break;
        case 14: Num = 60; buy = 30000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        } else sell += 80000; break;
        case 15: Num = 58; buy = 33000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        } else sell += 85000; break;
        case 16: Num = 55; buy = 36000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level] * 2; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level] * 2; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level] * 2; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level] * 2; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        } else sell += 90000; break;
        default: Num = 100; buy = 2000; sell += 0;     break;
        }
           
        maingame();
        printf("\n����Ϸ��� �ƹ� Ű�� �����ʽÿ�.\n");
        _getch();
=======
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
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
    }
=======
int BuyMoney()
{
    furnitureNum = rand() % 6;
    if (furniture[furnitureNum] = 0)
    {buyMoney = 5500;}
    else if (furniture[furnitureNum] = 0)
    {buyMoney = 25500;}
    else if (furniture[furnitureNum] = 0)
    { buyMoney = 32500;}
    else if (furniture[furnitureNum] = 0)
    { buyMoney = 4500;}
    else if (furniture[furnitureNum] = 0)
    { buyMoney = 9300;}
    else if (furniture[furnitureNum] = 0)
    {buyMoney = 7000;}
>>>>>>> parent of 0db0fee (현질 추가)
    return 0;
}
void SellFurniture(int furnitureNum)
{
    furnitureAvailable[furnitureNum] = false;
    printf("'%d'�� ������ �ǸŵǾ����ϴ�.\n", furnitureNum + 1);
}

<<<<<<< HEAD
<<<<<<< HEAD


=======
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
void Store()
=======
int Store()
>>>>>>> parent of 0db0fee (현질 추가)
{
    system("@cls||clear");
    printf("     ���� �� : %d ��\n", wallet);
    printf("     ���� �� : %s\n\n", house[level]);
    printf("        ���׸��� ����\n");
    printf("       < ������ ������  >\n");
    printf("-------------------------------\n");
<<<<<<< HEAD
<<<<<<< HEAD

   
    for (int i = 0; i < MAX_FURNITURE; ++i) {
        if (furnitureAvailable[i]) {
            switch (i) {
            case 0:
                printf("     1.�ɹ��� ����     (- 5200 ��) \n");
                break;
            case 1:
                printf("     2.����� �ٴ�     (- 9700 ��)\n");
                break;
            case 2:
                printf("     3.Ȳ�ݺ���     (- 128,000 ��)\n");
                break;
            case 3:
                printf("     4.�˷ϴ޷Ͽ���  (- 34,000 ��)\n");
                break;
            }
        }
        else {
            switch (i) {
            case 0:
                printf("     1.�ɹ��� ����     (�ǸſϷ�)\n");
                break;
            case 1:
                printf("     2.����� �ٴ�     (�ǸſϷ�)\n");
                break;
            case 2:
                printf("     3.Ȳ�ݺ���     (�ǸſϷ�)\n");
                break;
            case 3:
                printf("     4.�˷ϴ޷Ͽ���  (�ǸſϷ�)\n");
                break;
            }
        }
    }

    printf("     6.�������� ���ư��� \n ");
=======
    printf("     1.�ɹ��� ����     (- 5200 ��) \n");
    printf("     2.����� �ٴ�     (- 9700 ��)\n");
    printf("     3.Ȳ�ݺ���     (- 128,000 ��)\n");
    printf("     4.�˷ϴ޷Ͽ���  (- 34,000 ��)\n");
=======
    BuyMoney();
    printf("     1.%s    (- %d ��)\n", furniture[furnitureNum], buyMoney);
    BuyMoney();
    printf("     2.%s    (- %d ��)\n", furniture[furnitureNum], buyMoney);
    BuyMoney();
    printf("     3.%s    (- %d ��)\n", furniture[furnitureNum], buyMoney);
    BuyMoney();
    printf("     4.%s    (- %d ��)\n", furniture[furnitureNum], buyMoney);
>>>>>>> parent of 0db0fee (현질 추가)
    printf("     5.�������� ���ư��� \n ");
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
    printf("-------------------------------\n");
    printf("        �Է� : ");
    scanf_s("%d", &furnitureBuy);

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======

>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52
    switch (furnitureBuy)
    {
    case 1:
        if (furnitureAvailable[0]) {
            wallet -= 5200;
            printf("�ɹ��� ������ �����Ͽ����ϴ�.\n");
            SellFurniture(0); // ù ��° ���� �Ǹ� �Ϸ�
           
        }
        else {
            printf("�̹� �Ǹŵ� �����Դϴ�.\n");
        }
        break;
    case 2:
        if (furnitureAvailable[1]) {
            wallet -= 9700;
            printf("����� �ٴ��� �����Ͽ����ϴ�.\n");
            SellFurniture(1); // �� ��° ���� �Ǹ� �Ϸ�
        }
        else {
            printf("�̹� �Ǹŵ� �����Դϴ�.\n");
        }
        break;
    case 3:
        if (furnitureAvailable[2]) { //3��° ���� �Ǹ�
            wallet -= 128000;
            printf("Ȳ�ݺ��⸦ �����Ͽ����ϴ�.\n");
            SellFurniture(2); // �� ��° ���� �Ǹ� �Ϸ�
        }
        else {
            printf("�̹� �Ǹŵ� �����Դϴ�.\n");
        }
        break;
    case 4:
        if (furnitureAvailable[3]) {
            wallet -= 34000;
            printf("�˷ϴ޷Ͽ����� �����Ͽ����ϴ�.\n");
            SellFurniture(3); // �� ��° ���� �Ǹ� �Ϸ�
        }
        else {
            printf("�̹� �Ǹŵ� �����Դϴ�.\n");
        }
        break;
    case 5:
        break;
    default:
        maingame();
        break;
    }
}
int maingame()
{       
<<<<<<< HEAD
        
=======
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52
=======
    
    switch (furnitureBuy)
=======
    if(furnitureBuy == 5)
>>>>>>> parent of 0db0fee (현질 추가)
    {
        maingame();
    }
    else if (furnitureBuy == 1 || furnitureBuy == 2 || furnitureBuy == 3 || furnitureBuy == 4)
    {
        wallet -= buyMoney;
        printf("%s ���Ű� �Ϸ� �Ǿ����ϴ�.", furniture[furnitureBuy]);
        printf("     ���� �� : %d ��\n", wallet);
    }
    return 0;
}


int maingame()
<<<<<<< HEAD
{       
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
=======
{
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
        default: Num = 100; buy = 2000; sell = 0;     break;
        }
        // ȭ�� ����
>>>>>>> parent of 0db0fee (현질 추가)
        system("@cls||clear");
        printf("     ���� �� : %d ��\n", wallet);
        printf("     ���� �� : %s\n", house[level]);
        printf(" ���� ��ȭ �Ͻðڽ��ϱ� ? \n\n");
        printf("   < ����Ȯ�� : %d %% >\n", Num);
        printf("-------------------------------\n");
<<<<<<< HEAD
        printf("     1.�� ����      (- %d ��)\n",buy);
        printf("     2.������ ���  (��������)\n");
        printf("     3.�� �Ǹ�      (+ %d ��)\n",sell);
=======
        printf("     1.�� ����      (- %d ��)\n", buy);
        printf("     2.������ ���  (��������)\n");
        printf("     3.�� �Ǹ�      (+ %d ��)\n", sell);
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
        printf("     4.���� ����     \n");
        printf("     5.�����ϱ�     (ó�����ʹٽ�)\n");
        printf("-------------------------------\n");
        printf("        �Է� : ");
        scanf_s("%d", &isTry);

        switch (isTry)
        {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        case 1:        // ��ȭ�� ���� �� ���
            randNum = rand() % 100 + 1;
=======
            case 1:        // ��ȭ�� ���� �� ���
                randNum = rand() % 100 + 1;
                choice = 1;
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52
=======
            case 1:        // ��ȭ�� ���� �� ���
                randNum = rand() % 100 + 1;
>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
=======
        case 1:        // ��ȭ�� ���� �� ���
            randNum = rand() % 100 + 1;
>>>>>>> parent of 0db0fee (현질 추가)

            // ������ ���� ���� ����Ȯ�� ���� ������ ����
            if (randNum < Num) {
                sellHome = false;
                tnf = true;
                // ����ȭ�� ���
                wallet -= buy;
                printf("\n\n���� : %d ��\n\n", wallet);
                printf("\033[0;32m************* SUCCESS *************\n\033[0m");
                printf("  %s  ->  %s    \n", house[level], house[level + 1]);
<<<<<<< HEAD
                printf("************* SUCCESS *************\n");
                nowlevel = level+1;
                futurelevel = level + 2;
=======
                printf("\033[0;32m************* SUCCESS *************\n\033[0m");
>>>>>>> parent of 0db0fee (현질 추가)
                level++;
            }
            else
            {
<<<<<<< HEAD
=======
                sellHome = false;
                tnf = false;
                // ����ȭ�� ���
                wallet -= buy;
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52
                printf("\n\n���� : %d ��\n", wallet);
<<<<<<< HEAD
                printf("         �� ���߳�...\n");
                printf("�� '%s' �� �Ҿ����ϴ�.\n", house[level]);
                nowlevel = level + 1;
                futurelevel = level + 2;
=======
                printf("         \033[0;31m�� ���߳�...\n\033[0m");
                printf("�� \033[0;31m'%s' \033[0m�� �Ҿ����ϴ�.\n", house[level]);
>>>>>>> parent of 0db0fee (현질 추가)
                level = 0;
                
<<<<<<< HEAD
                for (int i = 0; i < MAX_FURNITURE; ++i) {
                    furnitureAvailable[i] = true;
                }
            }
            break;
<<<<<<< HEAD
<<<<<<< HEAD

        case 2:
            // ���⸦ �� ��� ���α׷� ����
            printf("\n         �� ����~\n");
            Isgame = 0;
            return -1;
            break;

        case 3:
                //wallet += sell;
=======
            }
            break;

            case 2:
                choice = 2;
                // ���⸦ �� ��� ���α׷� ����
                printf("\n         �� ����~\n");
                Isgame = 0;
                return -1;
                break;

            case 3:
                choice = 3;
                sellHome = true;
                nowlevel = level + 1;      //�ش� �ܰ� ���� ����
                futurelevel = level + 2;
                tnf = false;               //�� �ǸŽ� ��ȭ������ false�� ��.
>>>>>>> 6bf16cd0668bbe198f530a83108d998dae739f52
                wallet += sell;
                printf("\n\n���� : %d ��\n", wallet);
                printf("  %s  ->  %s    \n\n", house[level], house[level - 1]);
                level = 0;
                for (int i = 0; i < MAX_FURNITURE; ++i) {
                    furnitureAvailable[i] = true;// ���ȸ� �ٽ� ���� �ǸŰ����ϰ�
                }
                sell = 0;
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
=======
=======
        case 2:
            // ���⸦ �� ��� ���α׷� ����
            printf("\n         �� ����~\n");
            return -1;
        case 3:
            wallet += sell;
            printf("\n\n���� : %d ��\n", wallet);
            printf("  %s  ->  %s    \n\n", house[level], house[0]);
            level = 0;
            break;
>>>>>>> parent of 0db0fee (현질 추가)

        case 4:
            Store();
        }
<<<<<<< HEAD
}

>>>>>>> adc86954b01e2ed0855894b15c5235879ff05a1a
=======
        // �����Ȳ Ȯ���� ���� �ϵ��� ���
        printf("\n����Ϸ��� �ƹ� Ű�� �����ʽÿ�.\n");
        _getch();
    }
    return 0;
}
>>>>>>> parent of 0db0fee (현질 추가)
