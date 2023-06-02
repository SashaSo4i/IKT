#include <stdio.h>

struct Coord {
    int x;
    int y;
};

int can_eat(struct Coord horse, struct Coord dummy) {
    int cord_1 = abs(horse.x - dummy.x); 
    int cord_2 = abs(horse.y - dummy.y); 
    return (cord_1 == 1 && cord_2 == 2) || (cord_1 == 2 && cord_2 == 1); 
}

int main() {
    struct Coord horse, dummy;
    scanf("%d", &horse.x);
    scanf("%d", &horse.y);
    scanf("%d", &dummy.x);
    scanf("%d", &dummy.y);
    int result = can_eat(horse, dummy);
    printf("%d", result);
    return 0;
}
