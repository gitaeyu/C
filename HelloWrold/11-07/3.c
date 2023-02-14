#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int team;
    int n = 1;

    int a, b, t;

    int win1 = 0, win2 = 0, tie = 0;

    float winrate1 = 0;
    float winrate2 = 0;

    srand(time(NULL));

    // 팀 정하기
    team = rand() % 2;
    if (team == 0)
    {
        printf("재일 연재팀\n성일 의용팀\n");
    }
    if (team == 1)
    {
        printf("재일 의용팀\n성일 연재팀\n");
    }

    // 가위바위보
    for (; win1 != 10 && win2 != 10;) // && 모두 참일 때 참, win이 둘중 한개가 10이 되면 != 거짓되어 for문 나올수 있음.
    {
        // printf("숫자 입력시 실행\n");
        // scanf("%d", &t);
        printf("%d번째 가위 바위 보\n", n);

        a = rand() % 3; // 재일 가위바위보
        if (a == 0)
        {
            printf("재일 가위\n");
        }
        if (a == 1)
        {
            printf("재일 바위\n");
        }
        if (a == 2)
        {
            printf("재일 보\n");
        }

        b = rand() % 3; // 성일 가위바위보
        if (b == 0)
        {
            printf("성일 가위\n");
        }
        if (b == 1)
        {
            printf("성일 바위\n");
        }
        if (b == 2)
        {
            printf("성일 보\n");
        }

        // 가위바위보 승자 확인
        if (a > b)
        {
            printf("재일 승\n");
            win1++;
        }
        if (a < b)
        {
            printf("성일 승\n");
            win2++;
        }
        if (a == b)
        {
            printf("무승부\n");
            tie++;
        }
        
        // 승률 계산
        winrate1 = (float)win1 / (win1 + win2) * 100;
        winrate2 = (float)win2 / (win1 + win2) * 100;

        printf("재일 승률 : %.0f%%, 성일 승률 : %.0f%%\n", winrate1, winrate2);
        n++;
    }

    // 최종 승리
    if (win1 == 10)
    {
        printf("재일 10번 승");
    }
    if (win2 == 10)
    {
        printf("성일 10번 승");
    }

    return 0;
}
