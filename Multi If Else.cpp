#include <iostream>

int main()
{
    int score1, score2;
    printf("필기 시험 점수 입력하세요: ");
    scanf("%d", &score1);

    printf("실습 시험 점수 입력하세요: ");
    scanf("%d", &score2);

    if (score1 >= 80)
    {
        if (score2 >= 80)
        {
            printf("최종 합격 \n");
        }
        else
            printf("실습 불합격 \n");
    }
    else
        printf("필기 불합격 \n");
}

