#include<stdio.h>
#include <string.h>

int score[30];
char name[30][20];
int student_count;

int add_student(){

    printf("----- taking names and scores ----- \n");

    for (int i = 0; i<30;i++){
        student_count = i;
        printf("Enter a name: ");
        scanf("%s",name[i]);

        if(strcmp(name[i],"end") == 0){

            printf("-----imput end ----\n\n\n");
            return 0;
        }

        printf("Enter the score: ");
        scanf("%d",&score[i]);
    }
}


void print_array(){

    for(int i = 0; i<student_count;i++){
        printf("%s's score = %d\n",name[i],score[i]);

    }

}


int main(){

add_student();

print_array();

}
