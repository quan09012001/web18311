#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 40
#define HEIGHT 20

int main(void) {
    int x = WIDTH / 2;
    int y = HEIGHT / 2;
    int foodX = rand() % WIDTH;
    int foodY = rand() % HEIGHT;

    srand(time(NULL));

    while (1) {
        system("clear");
        for (int i = 0; i < HEIGHT; i++) {
            for (int j = 0; j < WIDTH; j++) {
                if (i == y && j == x) {
                    printf("O");
                } else if (i == foodY && j == foodX) {
                    printf("X");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        if (x == foodX && y == foodY) {
            foodX = rand() % WIDTH;
            foodY = rand() % HEIGHT;
        }
        x++;
        if (x >= WIDTH) {
            break;
        }
    }
    return 0;
}

