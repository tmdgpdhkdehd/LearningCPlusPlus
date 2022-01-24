#include <iostream>

//struct Player {
//    char name[20];
//    int level;
//    int hp;
//};

void test1();

typedef struct Player {
    char name[20];
    int level;
    int hp;
} _Player;


int add(int a, int b);
int sub(int a, int b);

int  main()
{
    FILE* fp; 
    fp = fopen("test1.txt", "w"); 
    if (fp == NULL)
    {
        printf("failed\n");
    }
    else 
    { 
        printf("ok\n"); 
    }

    char name[20]; 
    int level; 
    int hp; 
    double avg_level = 0;
    
    for (int i = 0; i < 2; i++)
    {
        printf("%d  입력 (name, level, hp): \n", i); 
        scanf("%s %d %d", name, &level, &hp); 
        fprintf(fp, "%s %d %d \n", name, level, hp);
    }
    
    fclose(fp);

}

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
