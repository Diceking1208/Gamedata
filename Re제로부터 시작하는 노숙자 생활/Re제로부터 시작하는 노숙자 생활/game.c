#define _CRT_SECURE_NO_WARNINGS  // sprintf_s �Լ��� ����ϱ� ���� ��� ����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
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
int buyMoney = 0;                       //���� ����
int buy = 0;                            // �� ����
int sell = 0;                           // �� �ȶ�
int wallet = 30000;                     // ���� ������ �ִ� �ݾ�
char* house[] = { "���￪ ���","�����Ͽ���","���� ������ ����", "���� ����","������ ����","���� ����","���� ���� ������ ����","�������� ������ ����","���� �� ������ ����","������ ����","¼�� ����","�� ����Ʈ","�׳� ���� ����Ʈ","���ִ� ����Ʈ","ȣȭ�ο� ����Ʈ","�����ִ� �ܵ�����","�ñ״Ͽ�" };
int housePrice[] = { 0, 2000, 4000, 6000, 8000, 10000, 12000, 14000, 16000, 18000, 20000, 22000, 24000, 26000, 28000, 30000, 33000, 36000 };// ���� �Ǹ��Ҷ��� ���� �����ϰ� �Ϸ��� �̷��� ��
int CashBuy = 0;
int nowlevel = 0;
int futurelevel = 0;
char datatime[200];
char datadate[200];
struct tm* t;
int choice = 0; //������ ����
int charge = 0; //�����ݾ�
bool tnf = true;
bool furnitureAvailable[MAX_FURNITURE] = { true, true, true, true };// ���� �Ǹ� ���� �Ǵ� 
bool sellHome = false;

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

int main(void)
{

    srand((unsigned int)time(NULL));
    login();
    while (Isgame == 1)
    {
        system("@cls||clear");
        switch (level)
        {
        case 0:  Num = 100; buy = 2000;  sell = 0;  break;
        case 1:  Num = 95; buy = 4000;
            if (furnitureBuy) {
                switch (furnitureBuy)
                {
                case 1:
                    sell = (5200 * 2) + housePrice[level]; // �ɹ��� ������ ������ 5200 ��
                    break;
                case 2:
                    sell = (9700 * 2) + housePrice[level]; // ����� �ٴ��� ������ 9700 ��
                    break;
                case 3:
                    sell = (128000 * 2) + housePrice[level]; // Ȳ�ݺ����� ������ 128000 ��
                    break;
                case 4:
                    sell = (34000 * 2) + housePrice[level]; // �˷ϴ޷Ͽ����� ������ 34000 ��
                    break;
                default:
                    break;
                }
            }
            else sell += 10000; break;// �̰� swtich �Լ� ���� ���� �־��µ� ��� �������� ������ ���� �̤�
        case 2:  Num = 90; buy = 6000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level]; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }
              else  sell += 20000; break;
        case 3:  Num = 85; buy = 8000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level]; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }
              else  sell = 25000; break;
        case 4:  Num = 80; buy = 10000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level]; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }
              else sell = 30000; break;
        case 5:  Num = 75; buy = 12000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level]; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }
              else sell += 35000; break;
        case 6:  Num = 70; buy = 14000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level]; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }
              else sell += 40000; break;
        case 7:  Num = 65; buy = 16000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level]; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }
              else sell += 45000; break;
        case 8:  Num = 60; buy = 18000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level]; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }
              else sell += 50000; break;
        case 9:  Num = 55; buy = 20000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level]; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }
              else sell += 55000; break;
        case 10: Num = 50; buy = 22000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level]; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }
               else sell += 60000; break;
        case 11: Num = 45; buy = 24000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level]; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }
               else sell += 65000; break;
        case 12: Num = 40; buy = 26000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level]; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }
               else sell += 70000; break;
        case 13: Num = 35; buy = 28000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level]; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }
               else sell += 75000; break;
        case 14: Num = 30; buy = 30000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level]; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }
               else sell += 80000; break;
        case 15: Num = 25; buy = 33000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level]; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }
               else sell += 85000; break;
        case 16: Num = 20; buy = 36000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level]; // �ɹ��� ������ ������ 5200 ��
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // ����� �ٴ��� ������ 9700 ��
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // Ȳ�ݺ����� ������ 128000 ��
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // �˷ϴ޷Ͽ����� ������ 34000 ��
                break;
            default:
                break;
            }
        }
               else sell += 90000; break;
        default: Num = 100; buy = 2000; sell += 0;     break;
        }

        maingame();
        printf("\n����Ϸ��� �ƹ� Ű�� �����ʽÿ�.\n");
        _getch();
    }
    return 0;
}
void SellFurniture(int furnitureNum)
{
    furnitureAvailable[furnitureNum] = false;
    printf("'%d'�� ������ �ǸŵǾ����ϴ�.\n", furnitureNum + 1);
}

void Store()
{
    system("@cls||clear");
    printf("     ���� �� : %d ��\n", wallet);
    printf("     ���� �� : %s\n\n", house[level]);
    printf("        ���׸��� ����\n");
    printf("       < ������ ������  >\n");
    printf("-------------------------------\n");

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

    printf("-------------------------------\n");
    printf("        �Է� : ");
    scanf_s("%d", &furnitureBuy);

    switch (furnitureBuy)
    {
    case 1:
        if (furnitureAvailable[0]) {
            if (wallet < 5200)
            {
                printf("\n\033[0;32m ���� �����ϴ� �����ϼ��� \n\033[0m\n");
                break;
            }
            else {
                wallet -= 5200;
                printf("�ɹ��� ������ �����Ͽ����ϴ�.\n");
                SellFurniture(0); // ù ��° ���� �Ǹ� �Ϸ�
            }

        }
        else {
            printf("�̹� �Ǹŵ� �����Դϴ�.\n");
        }
        break;
    case 2:
        if (furnitureAvailable[1]) {
            if (wallet < 9700)
            {
                printf("\n\033[0;32m ���� �����ϴ� �����ϼ��� \n\033[0m\n");
                break;
            }
            else {
                wallet -= 9700;
                printf("����� �ٴ��� �����Ͽ����ϴ�.\n");
                SellFurniture(1); // �� ��° ���� �Ǹ� �Ϸ�
            }
        }
        else {
            printf("�̹� �Ǹŵ� �����Դϴ�.\n");
        }
        break;
    case 3:
        if (furnitureAvailable[2]) { //3��° ���� �Ǹ�
            if (wallet < 128000)
            {
                printf("\n\033[0;32m ���� �����ϴ� �����ϼ��� \n\033[0m\n");
                break;
            }
            else {
                wallet -= 128000;
                printf("Ȳ�ݺ��⸦ �����Ͽ����ϴ�.\n");
                SellFurniture(2); // �� ��° ���� �Ǹ� �Ϸ�
            }
        }
        else {
            printf("�̹� �Ǹŵ� �����Դϴ�.\n");
        }
        break;
    case 4:
        if (furnitureAvailable[3]) {
            if (wallet < 34000)
            {
                printf("\n\033[0;32m ���� �����ϴ� �����ϼ��� \n\033[0m\n");
                break;
            }
            else {
                wallet -= 34000;
                printf("�˷ϴ޷Ͽ����� �����Ͽ����ϴ�.\n");
                SellFurniture(3); // �� ��° ���� �Ǹ� �Ϸ�
            }
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

void Cash()
{
    tnf = false;
    system("@cls||clear");
    printf("     ���� �� : %d ��\n", wallet);
    printf("     ���� �� : %s\n\n", house[level]);
    printf("          ���ӸӴ� ������ \n");
    printf("       < ������ �ϸ� �ٷ� ����˴ϴ�.  >\n");
    printf("-------------------------------------------\n");
    printf("       �����ݾ�      ���ӸӴ� \n");
    printf("    1. 5,000��    (+ 5,000 ��) \n");//100
    printf("    2. 7,800��    (+ 8,000 ��)\n"); //97
    printf("    3. 12,200��   (+ 12,800 ��)\n");//95
    printf("    4. 20,900��   (+ 22,500 ��)\n");//93
    printf("    5. 35,200��   (+ 40,000 ��)\n "); //88
    printf("    6. 40,000��   (+ 50,000��)\n "); //80
    printf("    7.�������� ���ư��� \n ");
    printf("------------------------------------------\n");
    printf("        �Է� : ");
    scanf_s("%d", &CashBuy);

    switch (CashBuy)
    {
    case 1:
        charge = 5000;
        wallet += 5000;
        printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
        printf("     ���� �� : %d ��\n", wallet);
        break;
    case 2:
        wallet += 8000;
        charge = 7800;
        printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
        printf("     ���� �� : %d ��\n", wallet);
        break;
    case 3:
        wallet += 12800;
        charge = 12200;
        printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
        printf("     ���� �� : %d ��\n", wallet);
        break;
    case 4:
        wallet += 22500;
        charge = 20900;
        printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
        printf("     ���� �� : %d ��\n", wallet);
        break;
    case 5:
        wallet += 40000;
        charge = 35200;
        printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
        printf("     ���� �� : %d ��\n", wallet);
        break;
    case 6:
        wallet += 50000;
        charge = 40000;
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
    charge = 0;

    system("@cls||clear");
    if (wallet <= 0)
    {
        wallet = 0;
        printf("\n\033[0;32m ���� �����ϴ� �����ϼ��� \n\033[0m\n");
    }
    printf("     ���� �� : %d��\n", wallet);
    printf("     ���� �� : %s\n", house[level]);
    printf(" ���� ��ȭ �Ͻðڽ��ϱ� ? \n\n");
    printf("   < ����Ȯ�� : %d %% >\n", Num);
    printf("------------------------------------------\n");
    printf("     1.�� ����      (- %d ��)\n", buy);
    printf("     2.���ӸӴ� ������  \n");
    printf("     3.�� �Ǹ�      (+ %d ��)\n", sell);
    printf("     4.���� ����     \n");
    printf("------------------------------------------\n");
    printf("        �Է� : ");
    scanf_s("%d", &isTry);
    switch (isTry)
    {
    case 1:        // ��ȭ�� ���� �� ���
        choice = 1;
        if (wallet <= 0)
        {
            printf("\n\033[0;32m ���� �����ϴ� �����ϼ��� \n\033[0m\n");
        }
        if (wallet >= 1)
        {
            randNum = rand() % 100;

            // ������ ���� ���� ����Ȯ�� ���� ������ ����
            if (randNum < Num) {
                sellHome = false;
                tnf = true;
                // ����ȭ�� ���
                wallet -= buy;
                printf("\n\n���� : %d ��\n\n", wallet);
                printf("\033[0;32ml������������������������������l\n\033[0m");
                printf("\033[0;32ml����Success����l\n\033[0m");
                printf("\033[0;32ml������������������������������l\n\033[0m");
                printf("\033[0;32m    �� �� ||\n\033[0m");
                printf("\033[0;32m�� ( '��' ||\n\033[0m");
                printf("\033[0;32m�� /����  ��\n\033[0m");
                printf("************* SUCCESS *************\n");
                printf("  %s  -> \033[0;32m%s\n\033[0m", house[level], house[level + 1]);
                printf("************* SUCCESS *************\n");
                nowlevel = level + 1;
                futurelevel = level + 2;
                level++;
            }
            else
            {
                sellHome = false;
                tnf = false;
                // ����ȭ�� ���
                wallet -= buy;
                printf("\033[0;31ml����������������������������������������������l\n\033[0m");
                printf("\033[0;31ml�� �����Ұ��� ������   l\n\033[0m");
                printf("\033[0;31ml����������������������������������������������l\n\033[0m");
                printf("\033[0;31m  ����   ||\n\033[0m");
                printf("\033[0;31m (^��^)  ||\n\033[0m");
                printf("\033[0;31m/ . . . .��\n\033[0m");
                printf("�� '%s' �� �Ҿ����ϴ�.\n", house[level]);
                nowlevel = level + 1;
                futurelevel = level + 2;
                level = 0;

                for (int i = 0; i < MAX_FURNITURE; ++i) {
                    furnitureAvailable[i] = true;
                }
            }
        }
        break;

    case 2:
        choice = 2;
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
        for (int i = 0; i < MAX_FURNITURE; ++i) {
            furnitureAvailable[i] = true; // ���ȸ� �ٽ� ���� �ǸŰ����ϰ�
        }
        sell = 0;
        break;

    case 4:
        choice = 4;
        if (wallet <= 0)
        {
            printf("\n\033[0;32m ���� �����ϴ� �����ϼ��� \n\033[0m\n");
            break;
        }
        else if (wallet >= 1)
        {
            Store();
        }
        break;
    }

}

int login()
{
    system("@cls||clear");
    printf("            �� �� ��\n", wallet);
    printf("---------------------------------------\n\n");
    printf("       id�� �й��� �Է��ϼ���. \n");
    printf("            ID : ");
    scanf_s("%d", &userid);
    printf("\n\n-----------------------------------\n");

    switch (userid)
    {
        int input = 0;
    case 99999:
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
