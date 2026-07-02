#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 50
#define HEIGHT 10

int dinoY = HEIGHT - 1;
int isJumping = 0;
int jumpCount = 0;
int score = 0;
int treeX = WIDTH - 1;

void draw()
{
    system("cls");
    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            if (x == 5 && y == dinoY)
                printf("D"); // Dino
            else if (x == treeX && y == HEIGHT - 1)
                printf("|"); // Tree
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("Score: %d\n", score);
}

void logic()
{
    if (isJumping)
    {
        if (jumpCount < 3)
            dinoY--;
        else if (jumpCount < 6)
            dinoY++;
        jumpCount++;
        if (jumpCount >= 6)
        {
            jumpCount = 0;
            isJumping = 0;
        }
    }

    treeX--;
    if (treeX < 0)
    {
        treeX = WIDTH - 1;
        score++;
    }

    // Collision
    if (treeX == 5 && dinoY == HEIGHT - 1)
    {
        system("cls");
        printf("Game Over! Final Score: %d\n", score);
        exit(0);
    }
}

int main()
{
    while (1)
    {
        draw();
        if (_kbhit())
        {
            char ch = _getch();
            if (ch == ' ')
                isJumping = 1;
        }
        logic();
        Sleep(100);
    }
    return 0;
}
