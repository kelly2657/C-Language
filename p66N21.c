#include <stdio.h>
#define WHITE 0
#define BLACK 1
#define YELLOW 2
int screen[10][10] = {{2,2,2,2,2,2,2,2,2,2},
           {2,2,2,2,2,2,2,2,2,2},
           {2,2,2,0,0,0,0,2,2,2},
           {2,2,2,2,0,0,0,2,2,2},
           {2,2,2,2,0,0,0,2,2,2},
           {2,2,2,2,0,0,0,0,2,2},
           {2,2,2,2,0,2,2,2,2,2},
           {2,2,2,2,0,2,2,2,2,2},
           {2,2,2,2,0,2,2,2,2,2},
           {2,2,2,2,2,2,2,2,2,2}};
           
char read_pixel(int x,int y){
	return screen[x][y];
}

void write_pixel(int x,int y,int color){
	screen[x][y] = color;
}

void flood_fill(int x,int y){
	if(read_pixel(x,y)==WHITE){
		write_pixel(x,y,BLACK);
		flood_fill(x-1,y);
		flood_fill(x+1,y);
		flood_fill(x,y-1);
		flood_fill(x,y+1);
	}
}

void result_print(){
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d",screen[i][j]);
		}
		printf("\n");
	}
}

int main(){
	result_print();
	printf("\n");
	flood_fill(5,5);
	result_print();
	return 0;
}
