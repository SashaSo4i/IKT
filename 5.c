#include <stdio.h>
#include <stdlib.h>

struct University {
    char name[50];
    int students;
};

struct University* biggestUniversity(struct University data[], int n) {
    int max = 0;
    struct University* biggest = NULL;
    for (int i = 0; i < n; i++) {
        if (data[i].students > max) {
            max = data[i].students;
            biggest = &data[i];
        }
    }
    return biggest;
}

int main() {
    int n;
    scanf("%d", &n);
    struct University* universities = malloc(n * sizeof(struct University));
    if (universities == NULL) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%s", universities[i].name);
        scanf("%d", &universities[i].students);
    }
    struct University* biggest = biggestUniversity(universities, n);
    if (biggest == NULL) {
        free(universities);
        return 0;
    } else {
        printf("%s %d", biggest->name, biggest->students);
    }
    free(universities);
    return 0;
}