#define _CRT_SECURE_NO_WARNINGS  // sprintf_s 함수를 사용하기 위해 경고 무시
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
char* house[] = { "서울역 노숙", "반지하원룸", "벌레 나오는 원룸", "좁은 원룸", "적당한 원룸", "넓은 원룸", "벌레 가끔 나오는 투룸", "층간소음 지리는 투룸", "변기 잘 막히는 투룸", "적당한 투룸", "쩌는 투룸", "걍 아파트", "그냥 좋은 아파트", "멋있는 아파트", "호화로운 아파트", "마당있는 단독주택", "시그니엘" };
bool tnf = true; //성공여부
bool sellHome = false;
int nowlevel = 0;
int futurelevel = 0;
char datatime[200];
char datadate[200];
struct tm* t;
int choice = 0; //선택지 저장


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

    sprintf_s(command, sizeof(command), "curl -d \"{\\\"플레이어ID\\\":\\\"%d\\\",\\\"접속일시\\\":\\\"%d월 %d일\\\",\\\"소지금\\\":%d,\\\"현재단계\\\":%d,\\\"도전단계\\\":%d,\\\"선택\\\":\\\"%d\\\",\\\"성공여부\\\":%s,\\\"구매가구\\\":\\\"%d\\\",\\\"집값\\\":%d,\\\"집판매\\\":%s,\\\"시간\\\":\\\"%d:%d:%d\\\"}\" https://script.google.com/macros/s/AKfycby-ZPjp6MIQKeZ6Ao46uFZKZAOU9NqnvuWkw6yrnvbp2mQqy_42skd0nwDC2Mm0MDOBgg/exec",
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
        // 화면 정리
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
         printf("\n계속하려면 아무 키나 누르십시오.\n");
         _getch();
    }
    return 0;
}



void Store()
{
   system("@cls||clear");
    printf("     가진 돈 : %d 원\n", wallet);
    printf("     현재 집 : %s\n\n", house[level]);
    printf("        인테리어 상점\n");
    printf("       < 오늘의 아이템  >\n");
    printf("-------------------------------\n");
    printf("     1.꽃무늬 벽지     (- 5200 원) \n");
    printf("     2.노란색 바닥     (- 9700 원)\n");
    printf("     3.황금변기     (- 128,000 원)\n");
    printf("     4.알록달록옷장  (- 34,000 원)\n");
    printf("     5.게임으로 돌아가기 \n ");
    printf("-------------------------------\n");
    printf("        입력 : ");
    scanf_s("%d", &furnitureBuy);


    switch (furnitureBuy)
    {
        case 1:
            wallet -= 5200;
            printf("구매가 완료 되었습니다.");
            printf("     가진 돈 : %d 원\n", wallet);
            break;
        case 2:
            wallet -= 9700;
            printf("구매가 완료 되었습니다.");
            printf("     가진 돈 : %d 원\n", wallet);
            break;
        case 3:
            wallet -= 128000;
            printf("구매가 완료 되었습니다.");
            printf("     가진 돈 : %d 원\n", wallet);
            break;
        case 4:
            wallet -= 34000;
            printf("구매가 완료 되었습니다.");
            printf("     가진 돈 : %d 원\n", wallet);
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
    printf("     가진 돈 : %d 원\n", wallet);
    printf("     현재 집 : %s\n\n", house[level]);
    printf("          현질하셈\n");
    printf("       < 결제 아이템  >\n");
    printf("-------------------------------\n");
    printf("       결제금액      게임머니 \n");
    printf("     1. 4,900원    (+ 5,000 원) \n");
    printf("     2. 9,900원    (+ 10,000 원)\n");
    printf("     3. 14,000원   (+ 12,800 원)\n");
    printf("     4. 35,000원   (+ 32,500 원)\n");
    printf("     5. 65,000원   (+ 65,000 원)\n ");
    printf("    6. 99,000원   (+ 100,000원)\n ");
    printf("    7.게임으로 돌아가기 \n ");
    printf("-------------------------------\n");
    printf("        입력 : ");
    scanf_s("%d", &CashBuy);

    switch (CashBuy)
    {
        case 1:
            wallet += 5000;
            printf("구매가 완료 되었습니다.");
            printf("     가진 돈 : %d 원\n", wallet);
            break;
        case 2:
            wallet += 10000;
            printf("구매가 완료 되었습니다.");
            printf("     가진 돈 : %d 원\n", wallet);
            break;
        case 3:
            wallet += 12800;
            printf("구매가 완료 되었습니다.");
            printf("     가진 돈 : %d 원\n", wallet);
            break;
        case 4:
            wallet += 32500;
            printf("구매가 완료 되었습니다.");
            printf("     가진 돈 : %d 원\n", wallet);
            break;
        case 5:
            wallet += 65000;
            printf("구매가 완료 되었습니다.");
            printf("     가진 돈 : %d 원\n", wallet);
            break;
        case 6:
            wallet += 100000;
            printf("구매가 완료 되었습니다.");
            printf("     가진 돈 : %d 원\n", wallet);
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
        printf("     가진 돈 : %d 원\n", wallet);
        printf("     현재 집 : %s\n", house[level]);
        printf(" 집을 강화 하시겠습니까 ? \n\n");
        printf("   < 성공확률 : %d %% >\n", Num);
        printf("-------------------------------\n");
        printf("     1.집 구매      (- %d 원)\n", buy);
        printf("     2.과금 하기  \n");
        printf("     3.집 판매      (+ %d 원)\n", sell);
        printf("     4.가구 구매     \n");
        printf("     5.저장하기     (처음부터다시)\n");
        printf("-------------------------------\n");
        printf("        입력 : ");
        scanf_s("%d", &isTry);

        switch (isTry)
        {
            case 1:        // 강화에 도전 할 경우
                randNum = rand() % 100 + 1;
                choice = 1;

            // 추출한 랜덤 값이 성공확률 보다 작으면 성공
            if (randNum < Num) {
                sellHome = false;
                tnf = true;
                // 성공화면 출력
                wallet -= buy;
                printf("\n\n지갑 : %d 원\n\n", wallet);
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
                // 실패화면 출력
                wallet -= buy;
                printf("\n\n지갑 : %d 원\n", wallet);
                printf("         아 망했네...\n");
                printf("집 '%s' 을 잃었습니다.\n", house[level]);
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
                nowlevel = level + 1;      //해당 단계 레벨 저장
                futurelevel = level + 2;
                tnf = false;               //집 판매시 강화성공은 false가 됨.
                wallet += sell;
                printf("\n\n지갑 : %d 원\n", wallet);
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
    printf("            로 그 인\n", wallet);
    printf("---------------------------------------\n\n");
    printf("       id는 학번을 입력하세요. \n");
    printf("         개발자모드 : 1234  \n");
    printf("            ID : ");
    scanf_s("%d", &userid);
    printf("\n\n-----------------------------------\n");

    switch (userid)
    {
        int input=0;
        case 1234:
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
