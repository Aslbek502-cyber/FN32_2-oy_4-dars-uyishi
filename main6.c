// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
int arr[5] = {10, 20, 30, 40, 50};
    int *p = &arr[0];
    printf("%d\n", *p);
    *p++;
    printf("%d\n", *p);
    *p++;
    printf("%d\n", *p);
    *p++;
    printf("%d\n", *p);
    *p++;
    printf("%d\n", *p);
    return 0;
}