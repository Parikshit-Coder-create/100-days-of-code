#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("Equilateral");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles");
    }
    else {
        printf("Scalene");
    }

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> fc5695a46e8d4815fdda52b0c225a93149b9a06f
