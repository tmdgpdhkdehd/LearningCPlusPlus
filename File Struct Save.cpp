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
    fp = fopen("file1.bin", "wb"); 
    if (fp == NULL)
    {
        printf("failed\n");
    }
    else 
    { 
        printf("ok\n"); 
    }

    _Player A;
    strcpy(A.name, "bbb");
    A.level = 10;
    A.hp = 100;

    int size = sizeof(Player); 
    fwrite(&A, size, 1, fp); 
    fclose(fp);
    
    fp = fopen("file1.bin", "rb");
    if (fp == NULL) printf("error \n");
    
    _Player B; 
    fread(&B, size, 1, fp); 
    printf("%s ", B.name);
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
