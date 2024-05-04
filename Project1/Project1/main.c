#define _CRT_SECURE_NO_WARNINGS  // sprintf_s 함수를 사용하기 위해 경고 무시
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <stdbool.h>
#define MAX_FURNITURE 4


int main()
{
	int nickname_initial, attempt, success, failure, enhancement_cost, selling_count;
	nickname_initial = 1;
	attempt = 1;
	success = 1;
	enhancement_cost = 1;
	failure = 1;
	selling_count = 1;

	char command[2048];
	sprintf_s(command, sizeof(command), "curl -d \"{\\\"닉네임이니셜\\\":\\\"%d\\\",\\\"시도\\\":\\\"%d\\\",\\\"성공\\\":\\\"%d\\\",\\\"실패\\\":%d,\\\"강화비용\\\":%d,\\\"판매횟수\\\":%d\\\"}\"https://script.google.com/macros/s/AKfycbxz4FjD4bUqIirXaxuS0HfT6e6-bLyCnc1u_9gHYt8ctjB8yrvc157hnNJaL1HYtW9n/exec",
		nickname_initial, attempt, success, failure, enhancement_cost, selling_count);
	system(command);
}