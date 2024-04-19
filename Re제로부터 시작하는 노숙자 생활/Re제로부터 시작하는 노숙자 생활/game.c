#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int userid=0;
int Isgame = 1;
int isTry = 0;                          // 강화를 할 것인지 선택
int level = 0;                          // 현재 무기의 레벨
int randNum = 0;                        // 랜덤값을 저장
int Num = 100;                          // 확률 숫자
int furnitureNum = 0;                   // 가구 번호
int furnitureBuy = 0;
int buyMoney = 0;                       //가구 가격
int buy = 0;                            // 집 구매
int sell = 0;                           // 집 팔때
int wallet = 50000;                     // 현재 가지고 있는 금액
char* house[] = { "서울역 노숙","반지하원룸","벌레 나오는 원룸", "좁은 원룸","적당한 원룸","넓은 원룸","벌레 가끔 나오는 투룸","층간소음 지리는 투룸","변기 잘 막히는 투룸","적당한 투룸","쩌는 투룸","걍 아파트","그냥 좋은 아파트","멋있는 아파트","호화로운 아파트","마당있는 단독주택","시그니엘" };
    

int main(void)
{
    srand((int)time(NULL));                 // 랜덤 시드값 설정

    while (Isgame)
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
        login();
         maingame();
         // 진행상황 확인이 용이 하도록 대기
         printf("\n계속하려면 아무 키나 누르십시오.\n");
         _getch();
    }
    return 0;
}


int Store()
{
   system("@cls||clear");
    printf("     가진 돈 : %d 원\n", wallet);
    printf("     현재 집 : %s\n\n", house[level]);
    printf("        인테리어 상점\n");
    printf("       < 오늘의 아이템  >\n");
    printf("-------------------------------\n");
    BuyMoney();
    printf("     1.꽃무늬 벽지     (- 5200 원) \n");
    BuyMoney();
    printf("     2.노란색 바닥     (- 9700 원)\n");
    BuyMoney();
    printf("     3.황금변기     (- 128,000 원)\n");
    BuyMoney();
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


int maingame()
{
        system("@cls||clear");
        printf("     가진 돈 : %d 원\n", wallet);
        printf("     현재 집 : %s\n", house[level]);
        printf(" 집을 강화 하시겠습니까 ? \n\n");
        printf("   < 성공확률 : %d %% >\n", Num);
        printf("-------------------------------\n");
        printf("     1.집 구매      (- %d 원)\n", buy);
        printf("     2.거지로 살기  (게임종료)\n");
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

            // 추출한 랜덤 값이 성공확률 보다 작으면 성공
            if (randNum < Num) {
                // 성공화면 출력
                wallet -= buy;
                printf("\n\n지갑 : %d 원\n\n", wallet);
                printf("************* SUCCESS *************\n");
                printf("  %s  ->  %s    \n", house[level], house[level + 1]);
                printf("************* SUCCESS *************\n");
                level++;
            }
            else
            {
                // 실패화면 출력
                wallet -= buy;
                printf("\n\n지갑 : %d 원\n", wallet);
                printf("         아 망했네...\n");
                printf("집 '%s' 을 잃었습니다.\n", house[level]);
                level = 0;
            }
            break;

            case 2:
                // 포기를 할 경우 프로그램 종료
                printf("\n         어 나가~\n");
                Isgame = 0;
                return -1;
                break;

            case 3:
                wallet += sell;
                printf("\n\n지갑 : %d 원\n", wallet);
                printf("  %s  ->  %s    \n\n", house[level], house[0]);
                level = 0;
                break;

            case 4:
                Store();
                break;
        }
}

int login()
{
    system("@cls||clear");
    printf("            로 그 인\n", wallet);
    printf("-------------------------------\n\n");
    printf("       id는 학번을 입력하세요. \n");
    printf("       개발자모드 : 1234 / 가입 : 0 \n");
    printf("            ID : ");
    scanf_s("%d", &userid);
    printf("\n\n-------------------------------\n");

    switch (userid)
    {
        case 1234:
            wallet = 999999999;
            break;
        default:
            break;
    }
    return 0;
}