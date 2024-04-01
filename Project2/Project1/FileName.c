#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int custom(double probability) {
	// 0에서 1 사이의 난수 생성
	double randomValue = (double)rand() / RAND_MAX;

	// 특정 이벤트가 발생할 확률과 비교
	if (randomValue < probability ) {
		// 특정 이벤트가 발생하는 경우
		return 1;
	}
	else {
		// 특정 이벤트가 발생하지 않는 경우
		return 0;
	}
}


	int main()
	{
		int a = 0;//1,2번 선택 변수
		int b = 5000;//금액
		int hu = 0;//반복문 실행
		printf("복권을 구매하시겠습니까?\n");
		printf("    현재 돈 : 5천원   \n");
		printf("1.yes\n");
		scanf_s("%d", &a);
		while (hu < 3) {
			srand(time(NULL));
			int random;

			double event = 1; //100% 확률로 이벤트 발생
			int c, d, e, f, g, h;//복권번호 입력
			printf("1에서 50사이의 복권번호를 입력하세요:");
			scanf_s("%d %d %d %d %d %d", &c, &d, &e, &f, &g, &h);
			int rest = c == d && d == e && e == f && f == g && g == h;

			for (int i = 0; i < 6; i++) {
				random = rand() % 50 + 1;//1에서 50사이의 랜덤
				printf("%d ", random);
			}
			if (custom(event)) {
				
			
				if (random == rest) {
					printf("복권당첨!");
					b += 30000;
					printf("현재 돈 :%d", b);
					//printf("복권을 구매하시겠습니까? 1:yes" ,a);
					//scanf_s("1 : %d", &a);
				}
				else {
					printf("복권 당첨 ㄴㄴ");
					break;
				}
			}
			else {
				printf("이벤트가 발생하지 않았습니다.\n");
			}
			hu ++;
		}
		return 0;
	}