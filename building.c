#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define MAX_PROBABILITY 100.0f              // 성공확률 최대치
#define WAIT_TIME 2                         // 강화 대기시간

int main(void)
{
    int isTry = 0;                          // 강화를 할 것인지 선택
    int level = 0;                          // 현재 무기의 레벨
    float probability = MAX_PROBABILITY;    // 현재 강화 성공확률
    time_t retTime = 0;                     // 대기시간 임시저장 변수
    int randNum = 0;                        // 랜덤값을 저장할 변수

    srand((int)time(NULL));                 // 랜덤 시드값 설정

    while (1)
    {
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
        scanf_s("%d", &isTry);

        switch (isTry)
        {
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
            }
            else
            {
                // 실패화면 출력
                printf("아 망했네..\n");
                printf("집 %d 단계.. 돈을 잃었습니다.\n", level);

                // 각종 수치 초기화
                level = 0;
                probability = MAX_PROBABILITY;
            }
            break;

        case 2:
            // 포기를 할 경우 프로그램 종료
            printf("어 나가~\n");
            return -1;
        }

        // 진행상황 확인이 용이 하도록 대기
        printf("\n계속하려면 아무 키나 누르십시오.\n");
        _getch();
    }

    return 0;
}
