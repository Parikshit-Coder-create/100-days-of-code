#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;

    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are real and different: %g, %g", r1, r2);
    }
    else if (d == 0) {
        r1 = -b / (2 * a);

        printf("Roots are real and same: %g", r1);
    }
    else {
        printf("Roots are complex");
    }

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> fc5695a46e8d4815fdda52b0c225a93149b9a06f
