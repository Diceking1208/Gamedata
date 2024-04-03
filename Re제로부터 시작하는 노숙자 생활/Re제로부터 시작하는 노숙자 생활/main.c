#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define MAX_PROBABILITY 100.0f              // 성공확률 최대치
#define MAX_FILE_PATH_LENGTH 20             // 파일 경로의 최대 길이 정의

// 파일 경로 배열 정의
char FILE_PATH[][MAX_FILE_PATH_LENGTH] = { "resultdata1.txt", "resultdata2.txt", "resultdata3.txt" };

void saveToFile(int level, const char* house, int wallet, int index);

int main(void)
{
    int isTry = 0;                          // 강화를 할 것인지 선택
    int level = 0;                          // 현재 무기의 레벨
    time_t retTime = 0;                     // 대기시간 임시저장
    int randNum = 0;                        // 랜덤값을 저장
    int Num = 100;                          // 확률 숫자
    int buy = 0;                            // 집 구매
    int sell = 0;                           // 집 팔때
    int wallet = 50000;                     // 현재 가지고 있는 금액
    int selectedFile;                       // 저장하기 기능 추가

    char* house[] = { "서울역 노숙","반지하원룸","벌레 나오는 원룸", "좁은 원룸","적당한 원룸","넓은 원룸","벌레 가끔 나오는 투룸","층간소음 지리는 투룸","변기 잘 막히는 투룸","적당한 투룸","쩌는 투룸","걍 아파트","그냥 좋은 아파트","멋있는 아파트","호화로운 아파트","마당있는 단독주택","시그니엘" };
    srand((int)time(NULL));                 // 랜덤 시드값 설정

    while (1)
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
        default: Num = 100; buy = 2000; sell = 0;
            break;
        }
        // 화면 정리
        system("@cls||clear");
        printf(" 지갑 : %d 원\n\n", wallet);
        printf(" 현재 집 : %s\n", house[level]);
        printf("   < 성공확률 : %d %% >\n", Num);
        printf(" 집을 강화 하시겠습니까 ? \n\n");
        printf("     1.집 구매      (- %d 원)\n", buy);
        printf("     2.거지로 살기  (게임종료)\n");
        printf("     3.집 판매      (+ %d 원)\n", sell);
        printf("     4.저장하기     (처음부터다시)\n");
        printf("     5.불러오기\n");
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

                // 강화 실패 시 레벨과 집 이름을 파일에 저장
                saveToFile(level, house[level], wallet, 0); // 현재 상황을 파일에 저장

                // 각종 수치 초기화
                level = 0;
            }
            break;
        case 2:
            // 포기를 할 경우 프로그램 종료
            printf("\n         어 나가~\n");
            return -1;
        case 3:
            wallet += sell;
            printf("\n\n지갑 : %d 원\n", wallet);
            printf("  %s  ->  %s    \n\n", house[level], house[0]);
            level = 0;
        case 4:
            // 저장하고 처음부터 다시 시작하는 기능 추가
            while (1) 
            {
                printf("저장할 파일을 선택하세요 (1~3): ");
                if (scanf_s("%d", &selectedFile) != 1 || selectedFile < 1 || selectedFile > 3)
                {
                    printf("잘못된 입력입니다. 1부터 3 사이의 숫자를 입력해주세요.\n");
                    while (getchar() != '\n'); // 입력 버퍼 비우기
                }
                else 
                {
                    break;
                }
            }
            saveToFile(level, house[level], wallet, selectedFile - 1); // 현재 상황을 선택한 파일에 저장
            printf("\n저장되었습니다. 처음부터 다시 시작합니다.\n");
            level = 0; // 레벨 초기화
            wallet = 50000; // 지갑 초기화
            break;
        }
        // 진행상황 확인이 용이 하도록 대기
        printf("\n계속하려면 아무 키나 누르십시오.\n");
        _getch();
    }
    return 0;
}

void saveToFile(int level, const char* house, int wallet, int index) 
{
    FILE* file = fopen(FILE_PATH[index], "w"); // 파일을 쓰기 모드로 열기 (기존 내용 삭제)
    if (file != NULL) 
    {
        fprintf(file, "=======================\n강화 level:%d\n집 이름:%s\n지갑:%d\n=======================\n", level, house, wallet);
        fclose(file); 
    }
}



