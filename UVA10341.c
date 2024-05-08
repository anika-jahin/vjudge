#include <stdio.h>
#include <math.h>

#define RANGE 1e-9

double equation(double p, double q, double r, double s, double t, double u, double x) {
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

double solve_equation(double p, double q, double r, double s, double t, double u) {
    double left = 0, right = 1;
    double mid, result;

    if (equation(p, q, r, s, t, u, 0) * equation(p, q, r, s, t, u, 1) > 0) {
        return NAN;
    }

    while (right - left > RANGE) {
        mid = (left + right) / 2;
        result = equation(p, q, r, s, t, u, mid);

        if (result > 0) {
            left = mid;
        } else {
            right = mid;
        }
    }

    return left;
}

int main() {
    double p, q, r, s, t, u;

    while (scanf("%lf %lf %lf %lf %lf %lf", &p, &q, &r, &s, &t, &u) != EOF) {
        double result = solve_equation(p, q, r, s, t, u);

        if (isnan(result)) {
            printf("No solution\n");
        } else {
            printf("%.4lf\n", result);
        }
    }

    return 0;
}
