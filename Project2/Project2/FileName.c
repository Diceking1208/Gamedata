#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int custom(double probability) {
	// 0���� 1 ������ ���� ����
	double randomValue = (double)rand() / RAND_MAX;

	// Ư�� �̺�Ʈ�� �߻��� Ȯ���� ��
	if (randomValue < probability ) {
		// Ư�� �̺�Ʈ�� �߻��ϴ� ���
		return 1;
	}
	else {
		// Ư�� �̺�Ʈ�� �߻����� �ʴ� ���
		return 0;
	}
}


	int main()
	{
		int a = 0;//1,2�� ���� ����
		int b = 5000;//�ݾ�
		int hu = 0;//�ݺ��� ����
		printf("������ �����Ͻðڽ��ϱ�?\n");
		printf("    ���� �� : 5õ��   \n");
		printf("1.yes\n");
		scanf_s("%d", &a);
		while (hu < 3) {
			srand(time(NULL));
			int random;

			double event = 1; //100% Ȯ���� �̺�Ʈ �߻�
			int c, d, e, f, g, h;//���ǹ�ȣ �Է�
			printf("1���� 50������ ���ǹ�ȣ�� �Է��ϼ���:");
			scanf_s("%d %d %d %d %d %d", &c, &d, &e, &f, &g, &h);
			int rest = c == d && d == e && e == f && f == g && g == h;

			for (int i = 0; i < 6; i++) {
				random = rand() % 50 + 1;//1���� 50������ ����
				printf("%d ", random);
			}
			if (custom(event)) {
				
			
				if (random == rest) {
					printf("���Ǵ�÷!");
					b += 30000;
					printf("���� �� :%d", b);
					//printf("������ �����Ͻðڽ��ϱ�? 1:yes" ,a);
					//scanf_s("1 : %d", &a);
				}
				else {
					printf("���� ��÷ ����");
					break;
				}
			}
			else {
				printf("�̺�Ʈ�� �߻����� �ʾҽ��ϴ�.\n");
			}
			hu ++;
		}
		return 0;
	}