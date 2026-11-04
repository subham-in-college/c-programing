#include<stdio.h>

void main(){

int grid[3][3][3] = {

{
    {1,2,3},
    {4,5,6},
    {7,8,9}
},
{
    {11,22,33},
    {44,55,66},
    {77,88,99}
},
};


for(int x = 0;x<3;x++ ){
    for(int y = 0;y<3;y++){
        grid[2][x][y] = grid[1][x][y] + grid[0][x][y];

    }
}

for(int x = 0;x<3;x++){
    for(int y = 0;y<3;y++){
        printf("%d ",grid[2][x][y]);
    }
    printf("\n");
}
}
