// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
int a[5] = {10, 20, 30, 40, 50};
    int *p = a;
    int min = *p;
    
    for(int i = 1; i < 5; i++){
      if(*(p + i) < min){
        min = *(p + i);
    }
    }
    printf("kichik son: %d", min);
  


    return 0;
}