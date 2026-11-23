// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int findMax(int *a, int *b){
    if(*a > *b){
        return *a;
    } else {
        return *b;
        
    }
}
int main() {
   int a, b;
    printf("2ta son kiriting: ");
    scanf("%d %d", &a, &b);

    printf("katta son: %d",  findMax(&a, &b));
    return 0;
}