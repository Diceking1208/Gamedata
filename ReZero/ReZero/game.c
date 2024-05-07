#include "Re.h"

int userid = 0;
int Isgame = 1;
int isTry = 0;
int level = 0;
int randNum = 0;
int Num = 100;
int furnitureNum = 0;
int furnitureBuy = 0;
int buyMoney = 0;                       //가구 가격
int buy = 0;                            // 집 구매
int sell = 0;                           // 집 팔때
int wallet = 30000;                     // 현재 가지고 있는 금액
char* house[] = { "서울역 노숙","반지하원룸","벌레 나오는 원룸", "좁은 원룸","적당한 원룸","넓은 원룸","벌레 가끔 나오는 투룸","층간소음 지리는 투룸","변기 잘 막히는 투룸","적당한 투룸","쩌는 투룸","걍 아파트","그냥 좋은 아파트","멋있는 아파트","호화로운 아파트","마당있는 단독주택","시그니엘" };
int housePrice[] = { 0, 2000, 4000, 6000, 8000, 10000, 12000, 14000, 16000, 18000, 20000, 22000, 24000, 26000, 28000, 30000, 33000, 36000 };// 가구 판매할때는 집값 변동하게 하려고 이렇게 함
int CashBuy = 0;
int nowlevel = 0;
int futurelevel = 0;
char datatime[200];
char datadate[200];
struct tm* t;
int choice = 0; //선택지 저장
int charge = 0; //충전금액
bool tnf = true;
bool furnitureAvailable[MAX_FURNITURE] = { true, true, true, true };// 가구 판매 가능 판단 
bool sellHome = false;
bool sign = true;
//데이터 로그에 들어가는 변수
/*
userid           유저 학번
local_time 관련  날짜,시간
wallet           소지금
nowlevel         현재 단계
futurelevel      도전 단계
tnf              강화 성공여부
furnitureNum     구매한 가구
sell + buyMoney  현재 집값
sellHome         집 판매 여부
*/

void PostUser()
{
    char command[2048];
    time_t now = time(NULL);
    struct tm* local_time = localtime(&now);

    sprintf_s(command, sizeof(command), "curl -d \"{\\\"접속신호\\\":\\\"%s\\\",\\\"플레이어ID\\\":\\\"%d\\\",\\\"접속일시\\\":\\\"%d월 %d일\\\",\\\"소지금\\\":%d,\\\"현재단계\\\":%d,\\\"도전단계\\\":%d,\\\"선택\\\":\\\"%d\\\",\\\"성공여부\\\":\\\"%s\\\", \\\"구매가구\\\":\\\"%d\\\",\\\"집값\\\":%d,\\\"집판매\\\":\\\"%s\\\",\\\"충전금액\\\":%d,\\\"시간\\\":\\\"%d:%d:%d\\\"}\" https://script.google.com/macros/s/AKfycbx_pVfz6yAuDK_Dr4qOEW__PW5_J-TrjDWh3JetRGKZvyxEJwAi1YxgzoA8rJFpENBh/exec",
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
                    sell = (5200 * 2) + housePrice[level]; // 꽃무늬 벽지의 가격은 5200 원
                    break;
                case 2:
                    sell = (9700 * 2) + housePrice[level]; // 노란색 바닥의 가격은 9700 원
                    break;
                case 3:
                    sell = (128000 * 2) + housePrice[level]; // 황금변기의 가격은 128000 원
                    break;
                case 4:
                    sell = (34000 * 2) + housePrice[level]; // 알록달록옷장의 가격은 34000 원
                    break;
                default:
                    break;
                }
            }
            else sell += 10000; break;// 이거 swtich 함수 따로 만들어서 넣었는데 계속 오류나서 일일히 넣음 ㅜㅜ
        case 2:  Num = 90; buy = 6000; if (furnitureBuy) {
            switch (furnitureBuy)
            {
            case 1:
                sell = (5200 * 2) + housePrice[level]; // 꽃무늬 벽지의 가격은 5200 원
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // 노란색 바닥의 가격은 9700 원
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // 황금변기의 가격은 128000 원
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // 알록달록옷장의 가격은 34000 원
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
                sell = (5200 * 2) + housePrice[level]; // 꽃무늬 벽지의 가격은 5200 원
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // 노란색 바닥의 가격은 9700 원
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // 황금변기의 가격은 128000 원
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // 알록달록옷장의 가격은 34000 원
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
                sell = (5200 * 2) + housePrice[level]; // 꽃무늬 벽지의 가격은 5200 원
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // 노란색 바닥의 가격은 9700 원
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // 황금변기의 가격은 128000 원
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // 알록달록옷장의 가격은 34000 원
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
                sell = (5200 * 2) + housePrice[level]; // 꽃무늬 벽지의 가격은 5200 원
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // 노란색 바닥의 가격은 9700 원
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // 황금변기의 가격은 128000 원
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // 알록달록옷장의 가격은 34000 원
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
                sell = (5200 * 2) + housePrice[level]; // 꽃무늬 벽지의 가격은 5200 원
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // 노란색 바닥의 가격은 9700 원
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // 황금변기의 가격은 128000 원
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // 알록달록옷장의 가격은 34000 원
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
                sell = (5200 * 2) + housePrice[level]; // 꽃무늬 벽지의 가격은 5200 원
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // 노란색 바닥의 가격은 9700 원
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // 황금변기의 가격은 128000 원
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // 알록달록옷장의 가격은 34000 원
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
                sell = (5200 * 2) + housePrice[level]; // 꽃무늬 벽지의 가격은 5200 원
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // 노란색 바닥의 가격은 9700 원
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // 황금변기의 가격은 128000 원
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // 알록달록옷장의 가격은 34000 원
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
                sell = (5200 * 2) + housePrice[level]; // 꽃무늬 벽지의 가격은 5200 원
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // 노란색 바닥의 가격은 9700 원
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // 황금변기의 가격은 128000 원
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // 알록달록옷장의 가격은 34000 원
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
                sell = (5200 * 2) + housePrice[level]; // 꽃무늬 벽지의 가격은 5200 원
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // 노란색 바닥의 가격은 9700 원
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // 황금변기의 가격은 128000 원
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // 알록달록옷장의 가격은 34000 원
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
                sell = (5200 * 2) + housePrice[level]; // 꽃무늬 벽지의 가격은 5200 원
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // 노란색 바닥의 가격은 9700 원
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // 황금변기의 가격은 128000 원
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // 알록달록옷장의 가격은 34000 원
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
                sell = (5200 * 2) + housePrice[level]; // 꽃무늬 벽지의 가격은 5200 원
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // 노란색 바닥의 가격은 9700 원
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // 황금변기의 가격은 128000 원
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // 알록달록옷장의 가격은 34000 원
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
                sell = (5200 * 2) + housePrice[level]; // 꽃무늬 벽지의 가격은 5200 원
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // 노란색 바닥의 가격은 9700 원
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // 황금변기의 가격은 128000 원
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // 알록달록옷장의 가격은 34000 원
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
                sell = (5200 * 2) + housePrice[level]; // 꽃무늬 벽지의 가격은 5200 원
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // 노란색 바닥의 가격은 9700 원
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // 황금변기의 가격은 128000 원
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // 알록달록옷장의 가격은 34000 원
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
                sell = (5200 * 2) + housePrice[level]; // 꽃무늬 벽지의 가격은 5200 원
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // 노란색 바닥의 가격은 9700 원
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // 황금변기의 가격은 128000 원
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // 알록달록옷장의 가격은 34000 원
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
                sell = (5200 * 2) + housePrice[level]; // 꽃무늬 벽지의 가격은 5200 원
                break;
            case 2:
                sell = (9700 * 2) + housePrice[level]; // 노란색 바닥의 가격은 9700 원
                break;
            case 3:
                sell = (128000 * 2) + housePrice[level]; // 황금변기의 가격은 128000 원
                break;
            case 4:
                sell = (34000 * 2) + housePrice[level]; // 알록달록옷장의 가격은 34000 원
                break;
            default:
                break;
            }
        }
               else sell += 90000; break;
        default: Num = 100; buy = 2000; sell += 0;     break;
        }
        maingame();
        printf("\n계속하려면 아무 키나 누르십시오.\n");
        _getch();
    }
    return 0;
}
void SellFurniture(int furnitureNum)
{
    furnitureAvailable[furnitureNum] = false;
    printf("'%d'번 가구가 판매되었습니다.\n", furnitureNum + 1);
}

void Store()
{
    system("@cls||clear");
    printf("     가진 돈 : %d 원\n", wallet);
    printf("     현재 집 : %s\n\n", house[level]);
    printf("        인테리어 상점\n");
    printf("       < 오늘의 아이템  >\n");
    printf("-------------------------------\n");

    for (int i = 0; i < MAX_FURNITURE; ++i) {
        if (furnitureAvailable[i]) {
            switch (i) {
            case 0:
                printf("     1.\033[1;35m꽃무늬\033[0m 벽지     (- 5200 원) \n\n");
                break;
            case 1:
                printf("     2.\033[0;33m노란색\033[0m 바닥     (- 9700 원)\n\n");
                break;
            case 2:
                printf("     3.\033[0;33m황금\033[0m 변기     (- 128,000 원)\n\n");
                break;
            case 3:
                printf("     4.\033[1;35m알록달록\033[0m 옷장  (- 34,000 원)\n");
                break;
            }
        }
        else {
            switch (i) {
            case 0:
                printf("     1.꽃무늬 벽지     \033[0;31m(판매완료)\n\033[0m\n");
                break;
            case 1:
                printf("     2.노란색 바닥     \033[0;31m(판매완료)\n\033[0m\n");
                break;
            case 2:
                printf("     3.황금 변기     \033[0;31m(판매완료)\n\033[0m\n");
                break;
            case 3:
                printf("     4.알록달록옷장  \033[0;31m(판매완료)\n\033[0m");
                break;
            }
        }
    }

    printf("-------------------------------\n");
    printf("        입력 : ");
    scanf_s("%d", &furnitureBuy);

    switch (furnitureBuy)
    {
    case 1:
        if (furnitureAvailable[0]) {
            if (wallet < 5200)
            {
                printf("\n\033[0;32m 돈이 없습니다 충전하세요 \n\033[0m\n");
                break;
            }
            else {
                wallet -= 5200;
                furnitureNum = 1;
                printf("    \033[1;35m꽃무늬\033[0m 벽지를 구매하였습니다.\n");
                SellFurniture(0); // 첫 번째 가구 판매 완료
            }

        }
        else {
            printf("이미 판매된 가구입니다.\n");
        }
        break;
    case 2:
        if (furnitureAvailable[1]) {
            if (wallet < 9700)
            {
                printf("\n\033[0;32m 돈이 없습니다 충전하세요 \n\033[0m\n");
                break;
            }
            else {
                wallet -= 9700;
                furnitureNum = 2;
                printf("    \033[0;33m노란색\033[0m 바닥을 구매하였습니다.\n");
                SellFurniture(1); // 두 번째 가구 판매 완료
            }
        }
        else {
            printf("이미 판매된 가구입니다.\n");
        }
        break;
    case 3:
        if (furnitureAvailable[2]) { //3번째 가구 판매
            if (wallet < 128000)
            {
                printf("\n\033[0;32m 돈이 없습니다 충전하세요 \n\033[0m\n");
                break;
            }
            else {
                wallet -= 128000;
                furnitureNum = 3;
                printf("    \033[0;33m황금\033[0m변기를 구매하였습니다.\n");
                SellFurniture(2); // 세 번째 가구 판매 완료
            }
        }
        else {
            printf("이미 판매된 가구입니다.\n");
        }
        break;
    case 4:
        if (furnitureAvailable[3]) {
            if (wallet < 34000)
            {
                printf("\n\033[0;32m 돈이 없습니다 충전하세요 \n\033[0m\n");
                break;
            }
            else {
                wallet -= 34000;
                furnitureNum = 4;
                printf("    \033[1;35m알록달록\033[0m옷장을 구매하였습니다.\n");
                SellFurniture(3); // 네 번째 가구 판매 완료
            }
        }
        else {
            printf("이미 판매된 가구입니다.\n");
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
    printf("       \033[0;36m 가진 돈 : %d 원\n", wallet);
    printf("     현재 집 : %s\n\n", house[level]);
    printf("          \033[1;34m게임머니 충전소\033[0m \n");
    printf("       < 충전을 하면 바로 적용됩니다.  >\n");
    printf("-------------------------------------------\n");
    printf("      \033[0;36m 결제금액      게임머니\033[0m \n\n");
    printf("    1. 5,000원    (+ 5,000 원) \n");//100
    printf("    2. 7,800원    (+ 8,000 원)\n"); //97
    printf("    3. 12,200원   (+ 12,800 원)\n");//95
    printf("    4. 20,900원   (+ 22,500 원)\n");//93
    printf("    5. 35,200원   (+ 40,000 원)\n "); //88
    printf("    6. 40,000원   (+ 50,000원)\n "); //80
    printf("    7.게임으로 돌아가기 \n ");
    printf("------------------------------------------\n");
    printf("        입력 : ");
    scanf_s("%d", &CashBuy);

    switch (CashBuy)
    {
    case 1:
        charge = 5000;
        wallet += 5000;
        choice = 2;
        printf("구매가 완료 되었습니다.");
        printf("     가진 돈 : %d 원\n", wallet);
        break;
    case 2:
        wallet += 8000;
        charge = 7800;
        choice = 2;
        printf("구매가 완료 되었습니다.");
        printf("     가진 돈 : %d 원\n", wallet);
        break;
    case 3:
        wallet += 12800;
        charge = 12200;
        choice = 2;
        printf("구매가 완료 되었습니다.");
        printf("     가진 돈 : %d 원\n", wallet);
        break;
    case 4:
        wallet += 22500;
        charge = 20900;
        choice = 2;
        printf("구매가 완료 되었습니다.");
        printf("     가진 돈 : %d 원\n", wallet);
        break;
    case 5:
        wallet += 40000;
        charge = 35200;
        choice = 2;
        printf("구매가 완료 되었습니다.");
        printf("     가진 돈 : %d 원\n", wallet);
        break;
    case 6:
        wallet += 50000;
        charge = 40000;
        choice = 2;
        printf("구매가 완료 되었습니다.");
        printf("     가진 돈 : %d 원\n", wallet);
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
        printf("\n\033[0;32m 돈이 없습니다 충전하세요 \n\033[0m\n");
    }
    printf("\033[0;36m       가진 돈 : %d원\n", wallet);
    printf("     현재 집 : %s\n", house[level]);
    printf("        \033[1;34m< 성공확률 : %d %% >\n\033[0m", Num);
    printf(" 집을 강화 하시겠습니까 ? \n\n");
    printf("\033[0m------------------------------------------\n");
    printf("\033[0;32m      1.집 구매      (- %d 원)\n", buy);
    printf("     2.게임머니 충전소  \n");
    printf("     3.집 판매      (+ %d 원)\n", sell);
    printf("     4.가구 구매     \n");
    printf("\033[0m------------------------------------------\n");
    printf("        입력 : ");
    scanf_s("%d", &isTry);
    switch (isTry)
    {
    case 1:        // 강화에 도전 할 경우
        choice = 1;
        if (wallet <= 0)
        {
            printf("\n\033[0;32m 돈이 없습니다 충전하세요 \n\033[0m\n");
            sellHome = false;
            tnf = false;
        }
        if (wallet >= 1)
        {
            randNum = rand() % 101;

            // 추출한 랜덤 값이 성공확률 보다 작으면 성공
            if (randNum <= Num) {
                sellHome = false;
                tnf = true;
                // 성공화면 출력
                wallet -= buy;
                printf("\n\n지갑 : %d 원\n\n", wallet);
                printf("\033[0;32ml───────────────l\n\033[0m");
                printf("\033[0;32ml♡♡Success♡♡l\n\033[0m");
                printf("\033[0;32ml───────────────l\n\033[0m");
                printf("\033[0;32m    ∧ ∧ ||\n\033[0m");
                printf("\033[0;32m　 ( 'ω' ||\n\033[0m");
                printf("\033[0;32m　 /　つ  Φ\n\033[0m");
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
                // 실패화면 출력
                wallet -= buy;
                printf("\033[0;31ml───────────────────────l\n\033[0m");
                printf("\033[0;31ml넌 갱생불가능 거지다   l\n\033[0m");
                printf("\033[0;31ml───────────────────────l\n\033[0m");
                printf("\033[0;31m  ∧∧   ||\n\033[0m");
                printf("\033[0;31m (^ㅅ^)  ||\n\033[0m");
                printf("\033[0;31m/ . . . .Φ\n\033[0m");
                printf("집 '%s' 을 잃었습니다.\n", house[level]);
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
        nowlevel = level + 1;      //해당 단계 레벨 저장
        futurelevel = level + 2;
        tnf = false;               //집 판매시 강화성공은 false가 됨.
        wallet += sell;
        printf("\n\n지갑 : %d 원\n", wallet);
        printf("  %s  ->  %s    \n\n", house[level], house[0]);
        level = 0;
        for (int i = 0; i < MAX_FURNITURE; ++i) {
            furnitureAvailable[i] = true; // 집팔면 다시 가구 판매가능하게
        }
        sell = 0;
        choice = 3;
        break;

    case 4:
        choice = 4;
        if (wallet <= 0)
        {
            printf("\n\033[0;32m 돈이 없습니다 충전하세요 \n\033[0m\n");
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
    printf("\n\033[0;33m   ∧∧              로 그 인\n\033[0;33m\n");
    printf("　(oωo)---------------------------------------\n");
    printf("＿(_つ/￣￣￣/＿ \n");
    printf("　 ＼/　　　/    학번을 입력해주세Yo \n ");
    printf("　　￣￣￣￣    ID: ");
    scanf_s("%d", &userid);

    switch (userid)
    {
        int input = 0;
    case 99999:
        wallet = 999999999;
        printf(" 금액은 999,999,999원으로 시작됩니다. \n");
        printf(" 시작할 레벨을 입력하세요 :  ");
        scanf_s("%d", &input);
        level = input;
        break;
    default: level = 0;
        break;
    }
    return 0;
}
