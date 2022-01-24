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
    char fnType; 
    int n1, n2; 
    int (*fp)(int, int) = NULL;

    printf("함수 종류(a,s), 수자 2개 입력 : ");
    scanf("%c %d %d", &fnType, &n1, &n2);

    switch (fnType) {
    case 'a': fp = add; break; 
    case 's': fp = sub; break;
    }

    printf("\n%d \n", fp(n1, n2));
}

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
