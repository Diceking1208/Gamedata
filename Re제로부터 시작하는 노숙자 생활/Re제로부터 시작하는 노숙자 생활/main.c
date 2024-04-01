#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define MAX_PROBABILITY 100.0f              // 성공확률 최대치


int main(void)
{
    int isTry = 0;                          // 강화를 할 것인지 선택
    int level = 0;                          // 현재 무기의 레벨
    float probability = MAX_PROBABILITY;    // 현재 강화 성공확률
    time_t retTime = 0;                     // 대기시간 임시저장 변수
    int randNum = 0;                        // 랜덤값을 저장할 변수
    int Num = 100;                          // 확률 숫자

    char* house[] = { "서울역 노숙","반지하원룸","벌레 나오는 원룸", "좁은 원룸","적당한 원룸","넓은 원룸","벌레 가끔 나오는 투룸","층간소음 지리는 투룸","변기 잘 막히는 투룸","적당한 투룸","쩌는 투룸","걍 아파트","그냥 좋은 아파트","멋있는 아파트","호화로운 아파트","마당있는 단독주택","시그니엘" };
    srand((int)time(NULL));                 // 랜덤 시드값 설정

    while (1)
    {
        switch (level)
        {
        case 0: Num = 100; break;
        case 1: Num = 95; break;
        case 2: Num = 90; break;
        case 3: Num = 87; break;
        case 4: Num = 85; break;
        case 5: Num = 83; break;
        case 6: Num = 80; break;
        case 7: Num = 77; break;
        case 8: Num = 75; break;
        case 9: Num = 73; break;
        case 10: Num = 70; break;
        case 11: Num = 68; break;
        case 12: Num = 65; break;
        case 13: Num = 63; break;
        case 14: Num = 60; break;
        case 15: Num = 58; break;
        case 16: Num = 55; break;
        default:
            break;
        }

        // 화면 정리
        system("@cls||clear");

        printf("  현재 집 : %s\n", house[level]);
        printf("     성공확률 : %d %%\n", Num);
        printf(" 집을 강화 하시겠습니까 ? \n");
        printf("1.집 구매   2.거지로 살기\n");
        printf("---------------------------\n");
        printf("        입력 : ");
        scanf_s("%d", &isTry);

        switch (isTry)
        {
        case 1:

            // 랜덤 값 추출
            randNum = rand() % 100 + 1;
            // 추출한 랜덤 값이 성공확률 보다 작으면 성공
            if (randNum < Num) {
                // 성공화면 출력
                printf("\n\n************* SUCCESS *************\n\n");
                printf("  %s  ->  %s    \n\n", house[level], house[level + 1]);
                printf("************* SUCCESS *************\n");

                level++;
            }
            else
            {
                // 실패화면 출력
                printf("\n\n아 망했네..\n");
                printf("%s ...  집을 잃었습니다.\n", house[0]);

                // 각종 수치 초기화
                level = 0;
            }
            break;

        case 2:
            // 포기를 할 경우 프로그램 종료
            printf("\n         어 나가~\n");
            return -1;
        }

        // 진행상황 확인이 용이 하도록 대기
        printf("\n계속하려면 아무 키나 누르십시오.\n");
        _getch();
    }

    return 0;
}
