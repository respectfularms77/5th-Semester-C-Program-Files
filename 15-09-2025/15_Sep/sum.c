#include <stdio.h>
/* function prototype*/
void draw_circle();
void draw_tri();
void draw_base();
void main(){
   draw_circle();
   draw_base();
   draw_tri();
}
void draw_circle(){
    printf("\nDrawing circle");
}
void draw_tri(){
    printf("\nDrawing triangle");
}
void draw_base(){
    printf("\nDrawing Base");
}