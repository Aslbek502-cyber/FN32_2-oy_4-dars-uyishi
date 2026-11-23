// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("a = %d  b = %d", a, b);
   
    return 0;
}