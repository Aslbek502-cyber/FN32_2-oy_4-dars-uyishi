// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
int arr[5] = {13, 20, 31, 40, 55};
    int *p = arr;
    for(int i = 0; i < 5; i++){
    if(*(p + i) % 2 == 0){
        printf("%d\n", *(p + i));
    }
    }
    
    return 0;
}