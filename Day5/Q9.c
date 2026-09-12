#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest;

    scanf("%lf %lf %lf", &principal, &rate, &time);

    simpleInterest = (principal * rate * time) / 100;

    compoundInterest = principal * pow(1 + rate / 100, time) - principal;

    printf("Simple Interest=%.0f, Compound Interest=%.2f",
           simpleInterest, compoundInterest);

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> fc5695a46e8d4815fdda52b0c225a93149b9a06f
