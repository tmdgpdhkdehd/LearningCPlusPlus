#include <iostream>

//struct Player {
//    char name[20];
//    int level;
//    int hp;
//};

typedef struct Player {
    char name[20];
    int level;
    int hp;
} _Player;

Player* p1 = NULL;

int  main()
{

    {
        Player p2;
        p1 = (Player*)malloc(sizeof(Player));
        if (p1 != NULL)
        {
            strcpy(p1->name, "hong gil dong");
            p1->level = 10;
        }

        printf("%s \n", p1->name);
        printf("%d \n", p1->level);
    }

    printf("%s \n", p1->name);

    free(p1);
}
