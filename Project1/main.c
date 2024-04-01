#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define MAX_PROBABILITY 100.0f              // 성공확률 최대치
<<<<<<< HEAD
#define WAIT_TIME 2                         // 강화 대기시간
=======

>>>>>>> 2db617296b57a4ac18d6eaad450aba138ad81e23

int main(void)
{
    int isTry = 0;                          // 강화를 할 것인지 선택
    int level = 0;                          // 현재 무기의 레벨
    float probability = MAX_PROBABILITY;    // 현재 강화 성공확률
    time_t retTime = 0;                     // 대기시간 임시저장 변수
    int randNum = 0;                        // 랜덤값을 저장할 변수
<<<<<<< HEAD

=======
    int Num = 100;                          // 확률 숫자

    char* house[] = { "서울역 노숙","반지하원룸","벌레 나오는 원룸", "좁은 원룸","적당한 원룸","넓은 원룸","벌레 가끔 나오는 투룸","층간소음 지리는 투룸","변기 잘 막히는 투룸","적당한 투룸","쩌는 투룸","걍 아파트","그냥 좋은 아파트","멋있는 아파트","호화로운 아파트","마당있는 단독주택","시그니엘"};
>>>>>>> 2db617296b57a4ac18d6eaad450aba138ad81e23
    srand((int)time(NULL));                 // 랜덤 시드값 설정

    while (1)
    {
<<<<<<< HEAD
        // 화면 정리
        system("@cls||clear");

        // 타이틀 화면 출력
        printf("*= Blacksmith With C =*\n");
        printf("  a game by devchanho\n\n");

        // 레벨에 해당하는 이름 출력
        switch (level) {
        case 1:
            printf("이사한 집 : 서울역 노숙자\n");
            break;
        case 2:
            printf("이사한 집 : 반지하 곰팡이 원룸\n");
            break;
        case 3:
            printf("이사한 집 : 벌레 나오는 원룸\n");
            break;
        case 4:
            printf("이사한 집 : 좁은 원룸\n");
            break;
        case 5:
            printf("이사한 집 : 적당한 원룸\n");
            break;
        case 6:
            printf("이사한 집 : 넓은 원룸\n");
            break;
        case 7:
            printf("이사한 집 : 벌레 가끔 나오는 투룸\n");
            break;
        case 8:
            printf("이사한 집 : 층간소음 지리는 투룸\n");
            break;
        case 9:
            printf("이사한 집 : 변기 잘 막히는 투룸\n");
            break;
        case 10:
            printf("이사한 집 : 적당한 투룸\n");
            break;
        case 11:
            printf("이사한 집 : 쩌는 투룸\n");
            break;
        case 12:
            printf("이사한 집 : 걍 아파트\n");
            break;
        case 13:
            printf("이사한 집 : 그냥 좋은 아파트\n");
            break;
        case 14:
            printf("이사한 집 : 멋있는 아파트\n");
            break;
        case 15:
            printf("이사한 집 : 호화로운 아파트\n");
            break;
        case 16:
            printf("이사한 집 : 마당있는 단독주택\n");
            break;
        case 17:
            printf("이사한 집 : 시그니엘\n");
            break;
        default:
            printf("이사한 집 : + %d\n", level);
        }

        printf("성공확률 : %.2f%%\n", probability);
        printf("집을 구매하시겠습니까?\n");
        printf("1.집 구매   2.거지로 살기\n");
=======
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

        printf("  현재 집 : %s\n",house[level]);
        printf("     성공확률 : %d %%\n", Num);
        printf(" 집을 강화 하시겠습니까 ? \n");
        printf("1.집 구매   2.거지로 살기\n");
        printf("---------------------------\n");
        printf("        입력 : ");
>>>>>>> 2db617296b57a4ac18d6eaad450aba138ad81e23
        scanf_s("%d", &isTry);

        switch (isTry)
        {
<<<<<<< HEAD
        case 1:        // 강화에 도전 할 경우
            printf("\n구매중..\n\n");

            // 지정된 시간(초) 만큼 대기
            retTime = time(0) + WAIT_TIME;
            while (time(0) < retTime);

            // 랜덤 값 추출
            randNum = rand() % 100;
            // 추출한 랜덤 값이 성공확률 보다 작으면 성공
            if (randNum < probability) {
                // 성공화면 출력
                printf("***** SUCCESS *****\n");
                printf("*                 *\n");
                printf("*   + %d  ->  + %d  *\n", level, level + 1);
                printf("*                 *\n");
                printf("***** SUCCESS *****\n");

                // 강화에 성공 했을 시, 레벨을 하나 증가 시키고, 성공확률을 보정
                // 이 때, 현재 성공확률의 10%에 현재 레벨로 가중치를 추가로 적용
                level++;
                probability -= (probability / 10.0f) * level;
=======
        case 1:   

            // 랜덤 값 추출
            randNum = rand() % 100+1;
            // 추출한 랜덤 값이 성공확률 보다 작으면 성공
            if (randNum < Num) {
                // 성공화면 출력
                printf("\n\n************* SUCCESS *************\n\n");
                printf("  %s  ->  %s    \n\n", house[level], house[level+1] );
                printf("************* SUCCESS *************\n");

                level++;
>>>>>>> 2db617296b57a4ac18d6eaad450aba138ad81e23
            }
            else
            {
                // 실패화면 출력
<<<<<<< HEAD
                printf("아 망했네..\n");
                printf("집 %d 단계.. 돈을 잃었습니다.\n", level);

                // 각종 수치 초기화
                level = 0;
                probability = MAX_PROBABILITY;
=======
                printf("\n\n아 망했네..\n");
                printf("%s ...  집을 잃었습니다.\n", house[0]);

                // 각종 수치 초기화
                level = 0;
>>>>>>> 2db617296b57a4ac18d6eaad450aba138ad81e23
            }
            break;

        case 2:
            // 포기를 할 경우 프로그램 종료
<<<<<<< HEAD
            printf("어 나가~\n");
=======
            printf("\n         어 나가~\n");
>>>>>>> 2db617296b57a4ac18d6eaad450aba138ad81e23
            return -1;
        }

        // 진행상황 확인이 용이 하도록 대기
        printf("\n계속하려면 아무 키나 누르십시오.\n");
        _getch();
    }

    return 0;
}
