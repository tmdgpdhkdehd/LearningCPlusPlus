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
    fp = fopen("test1.txt", "r"); 
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
    
    float avg_level = 0; 
    for (int i = 0; i < 3; i++) {
        fscanf(fp, "%s %d %d ", name, &level, &hp);
        avg_level += (float)level;
    }
    printf("avg level : %f \n", (float)avg_level / 3.0f);

    
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
