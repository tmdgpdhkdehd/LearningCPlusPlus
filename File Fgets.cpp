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

    char buff[100]; 
    while (fgets(buff, sizeof(buff), fp) != NULL) {
        printf("%s", buff);
        memset(buff, 0, sizeof(buff));
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
