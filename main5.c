// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
int a, b, c;
float ortacha;

    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;

    scanf("%d %d %d", &a, &b, &c);

    ortacha = (*p1 + *p2 + *p3) / 3.0;

    printf("%.2f", ortacha);
    return 0;
}