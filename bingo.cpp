#include <stdio.h>
#include<stdbool.h>

int main()
{
    //Game:BINGO!!



    /*Here initializing the three arrays I use for the purpose of my project.
    Each array contains the same 5 symbols but in different order*/
    char row1[5]={'#','@','%','&','$'};
    char row2[5]={'%','#','@','$','&'};
    char row3[5]={'@','&','#','%','$'};
    int a,b,c;
    char new_row1[5];
    char new_row2[5];
    char new_row3[5];
    int new_idx;

    /*Here I accept input from the user; 3 numbers in particular. The first number
    specifies the number of right shifts done on the first array, the second number
    on the second array and the third number for the third array.
    A single right shift on an array shifts all the symbols to an immediately higher index 
    in the array; the last element though gets shifted to the first index (wrapping around)”
    printf("write three numbers between 1-10\n");*/

    printf("enter first number:\n");
    scanf("%d",&a);
    printf("enter second number:\n");
    scanf("%d",&b);
    printf("enter third number:\n");
    scanf("%d",&c);

    /*Given the inputs from the user, now performing the right shifts on the input array”*/
    for(int i=0;i<5;i++){
        new_idx=(i+a)%5;
        new_row1[new_idx]=row1[i];
    }
    for(int i=0;i<5;i++){
        new_idx=(i+b)%5;
        new_row2[new_idx]=row2[i];
    }
    for(int i=0;i<5;i++){
        new_idx=(i+c)%5;
        new_row3[new_idx]=row3[i];
    }
    /*Here printing the arrays after the right shifts*/
    for (int i = 0; i < 5; i++) {     
        printf("%c ", new_row1[i]);     
    }    
    printf("\n");
    for (int i = 0; i < 5; i++) {     
        printf("%c ", new_row2[i]);     
    } 
    printf("\n");
    for (int i = 0; i <5; i++) {     
        printf("%c ", new_row3[i]);     
    }   
    printf("\n");

    /*Now checking if for all the three arrays after the right shifts, does any index place,
    for all the arrays considered together, have the same symbol(vertically). If so, the user has won. If not, the user has lost*/
    bool won=false;
    for(int i=0;i<5;i++){
        if(new_row1[i]==new_row2[i] && new_row1[i]==new_row3[i] && new_row2[i]==new_row3[i]){
            printf("Congrats,you won!!\n");
            won=true;
            break;
        }
    }
    if(won==false){
            printf("Sorry,you lost!\n");
        }
    return 0;
}
