#include<stdio.h>
int main() {
    int T,i, a, b, c;
    scanf("%d", &T);

    for ( i = 1; i <= T; i++) {
        scanf("%d %d %d", &a, &b, &c);

        if ((a < c && b > a) || (a > b && b < c)) {
    printf("Case %d: %d\n", i, a);
} else if ((b < a && b >c) || (c > a && b < c)) {
    printf("Case %d: %d\n", i, b);
} else if ((c > a && b < a) || (c > b && a < b)) {
    printf("Case %d: %d\n", i, c);
}

    }

    return 0;
}

