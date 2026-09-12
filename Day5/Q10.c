#include <stdio.h>

int main() {
    int seconds, hours, minutes;

    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds = seconds % 3600;

    minutes = seconds / 60;
    seconds = seconds % 60;

    printf("%d:%d:%d", hours, minutes, seconds);

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> fc5695a46e8d4815fdda52b0c225a93149b9a06f
