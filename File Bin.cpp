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

    int buff[] = { 10, 20, 30 }; 
    int data[6]; 
    int size, count;

    size = sizeof(int); 
    count = sizeof(buff) / sizeof(int); 
    fwrite(&buff, size, count, fp); 
    fclose(fp);

    fp = fopen("file1.bin", "rb");
    if (fp == NULL) printf("error \n");
    for (int i = 0; i < count; i++)
    {
        fread(&data[i], size, 1, fp);
        printf("%d ", data[i]);
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
