// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
void square(int *a){
    *a = (*a) * (*a) * (*a);
    
}
int main() {
    int son;
    printf("son kiriting: ");
    scanf("%d", &son);

    square(&son);

    printf("kvadrati: %d", son);
    return 0;
}