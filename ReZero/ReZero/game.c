#include "Re.h"

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
bool sign = true;
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

    sprintf_s(command, sizeof(command), "curl -d \"{\\\"���ӽ�ȣ\\\":\\\"%s\\\",\\\"�÷��̾�ID\\\":\\\"%d\\\",\\\"�����Ͻ�\\\":\\\"%d�� %d��\\\",\\\"������\\\":%d,\\\"����ܰ�\\\":%d,\\\"�����ܰ�\\\":%d,\\\"����\\\":\\\"%d\\\",\\\"��������\\\":\\\"%s\\\", \\\"���Ű���\\\":\\\"%d\\\",\\\"����\\\":%d,\\\"���Ǹ�\\\":\\\"%s\\\",\\\"�����ݾ�\\\":%d,\\\"�ð�\\\":\\\"%d:%d:%d\\\"}\" https://script.google.com/macros/s/AKfycbx_pVfz6yAuDK_Dr4qOEW__PW5_J-TrjDWh3JetRGKZvyxEJwAi1YxgzoA8rJFpENBh/exec",
        sign ? "sign" : " ", userid, local_time->tm_mon + 1, local_time->tm_mday , wallet, nowlevel, futurelevel, choice, tnf ? "success" : "fail", furnitureNum, sell + buyMoney, sellHome ? "Sell" : " ", charge, local_time->tm_hour, local_time->tm_min, local_time->tm_sec);
    system(command);
}


int main(void)
{
    time_t timer = time(NULL);
    t = localtime(&timer);
    srand((unsigned int)time(NULL));
    sign = true;
    while (Isgame == 1)
    {
        if (sign==true)
        {
            PostUser();
            login();
            sign = false;
        }
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
                printf("     1.\033[1;35m�ɹ���\033[0m ����     (- 5200 ��) \n\n");
                break;
            case 1:
                printf("     2.\033[0;33m�����\033[0m �ٴ�     (- 9700 ��)\n\n");
                break;
            case 2:
                printf("     3.\033[0;33mȲ��\033[0m ����     (- 128,000 ��)\n\n");
                break;
            case 3:
                printf("     4.\033[1;35m�˷ϴ޷�\033[0m ����  (- 34,000 ��)\n");
                break;
            }
        }
        else {
            switch (i) {
            case 0:
                printf("     1.�ɹ��� ����     \033[0;31m(�ǸſϷ�)\n\033[0m\n");
                break;
            case 1:
                printf("     2.����� �ٴ�     \033[0;31m(�ǸſϷ�)\n\033[0m\n");
                break;
            case 2:
                printf("     3.Ȳ�� ����     \033[0;31m(�ǸſϷ�)\n\033[0m\n");
                break;
            case 3:
                printf("     4.�˷ϴ޷Ͽ���  \033[0;31m(�ǸſϷ�)\n\033[0m");
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
                furnitureNum = 1;
                printf("    \033[1;35m�ɹ���\033[0m ������ �����Ͽ����ϴ�.\n");
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
                furnitureNum = 2;
                printf("    \033[0;33m�����\033[0m �ٴ��� �����Ͽ����ϴ�.\n");
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
                furnitureNum = 3;
                printf("    \033[0;33mȲ��\033[0m���⸦ �����Ͽ����ϴ�.\n");
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
                furnitureNum = 4;
                printf("    \033[1;35m�˷ϴ޷�\033[0m������ �����Ͽ����ϴ�.\n");
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
    printf("       \033[0;36m ���� �� : %d ��\n", wallet);
    printf("     ���� �� : %s\n\n", house[level]);
    printf("          \033[1;34m���ӸӴ� ������\033[0m \n");
    printf("       < ������ �ϸ� �ٷ� ����˴ϴ�.  >\n");
    printf("-------------------------------------------\n");
    printf("      \033[0;36m �����ݾ�      ���ӸӴ�\033[0m \n\n");
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
        choice = 2;
        printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
        printf("     ���� �� : %d ��\n", wallet);
        break;
    case 2:
        wallet += 8000;
        charge = 7800;
        choice = 2;
        printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
        printf("     ���� �� : %d ��\n", wallet);
        break;
    case 3:
        wallet += 12800;
        charge = 12200;
        choice = 2;
        printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
        printf("     ���� �� : %d ��\n", wallet);
        break;
    case 4:
        wallet += 22500;
        charge = 20900;
        choice = 2;
        printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
        printf("     ���� �� : %d ��\n", wallet);
        break;
    case 5:
        wallet += 40000;
        charge = 35200;
        choice = 2;
        printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
        printf("     ���� �� : %d ��\n", wallet);
        break;
    case 6:
        wallet += 50000;
        charge = 40000;
        choice = 2;
        printf("���Ű� �Ϸ� �Ǿ����ϴ�.");
        printf("     ���� �� : %d ��\n", wallet);
        break;
    case 7:
        choice = 2;
        break;
    default:
        maingame();
        break;
    }
}



int maingame()
{

    charge = 0;
    furnitureNum = 0;

    system("@cls||clear");
    UIChange();
    printf("\n");
    if (wallet <= 0)
    {
        wallet = 0;
        printf("\n\033[0;32m ���� �����ϴ� �����ϼ��� \n\033[0m\n");
    }
    printf("\033[0;36m       ���� �� : %d��\n", wallet);
    printf("     ���� �� : %s\n", house[level]);
    printf("        \033[1;34m< ����Ȯ�� : %d %% >\n\033[0m", Num);
    printf(" ���� ��ȭ �Ͻðڽ��ϱ� ? \n\n");
    printf("\033[0m------------------------------------------\n");
    printf("\033[0;32m      1.�� ����      (- %d ��)\n", buy);
    printf("     2.���ӸӴ� ������  \n");
    printf("     3.�� �Ǹ�      (+ %d ��)\n", sell);
    printf("     4.���� ����     \n");
    printf("\033[0m------------------------------------------\n");
    printf("        �Է� : ");
    scanf_s("%d", &isTry);
    switch (isTry)
    {
    case 1:        // ��ȭ�� ���� �� ���
        choice = 1;
        if (wallet <= 0)
        {
            printf("\n\033[0;32m ���� �����ϴ� �����ϼ��� \n\033[0m\n");
            sellHome = false;
            tnf = false;
        }
        if (wallet >= 1)
        {
            randNum = rand() % 101;

            // ������ ���� ���� ����Ȯ�� ���� ������ ����
            if (randNum <= Num) {
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
        sellHome = false;
        tnf = false;
        break;

    case 3:
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
        choice = 3;
        break;

    case 4:
        choice = 4;
        if (wallet <= 0)
        {
            printf("\n\033[0;32m ���� �����ϴ� �����ϼ��� \n\033[0m\n");
            sellHome = false;
            tnf = false;
            break;
        }
        else if (wallet >= 1)
        {
            sellHome = false;
            tnf = false;
            Store();
        }
        choice = 4;
        break;
    }
    PostUser();

}

int login()
{
    system("@cls||clear");
    loginUI();
    printf("\n\033[0;33m   ����              �� �� ��\n\033[0;33m\n");
    printf("��(o��o)---------------------------------------\n");
    printf("��(_��/������/�� \n");
    printf("�� ��/������/    �й��� �Է����ּ�Yo \n ");
    printf("������������    ID: ");
    scanf_s("%d", &userid);

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
