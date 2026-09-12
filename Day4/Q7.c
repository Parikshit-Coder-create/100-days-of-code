#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: %d %d", a, b);

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> fc5695a46e8d4815fdda52b0c225a93149b9a06f
