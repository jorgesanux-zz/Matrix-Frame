#include <stdio.h>
#define altura 26 //Height
#define anchura 90 //Weight
void tablero();

int main(){
    //Call to function tablero
    tablero();
    return 0;
}

// Fill in and show the board
void tablero(){
    int i,j;
    char tabla[altura][anchura];
    // Check if the array is already filled
    if(tabla[0][0]!='#'){
        // Create the frame with '#' and fill it with spaces
        for(i=0;i<altura;i++){
            for(j=0;j<anchura;j++){
                // Check if it is in row 0 to fill all complete
                if(i<1 || i==altura-1){
                    tabla[i][j]='#';
                }else{
                    / * Check if the row is different from the first and also, 
                    it also verifies if it is the column 0 to only fill the sides * /
                    if(i>0 && j<1){
                        tabla[i][0]='#';
                        tabla[i][anchura-1]='#';
                    }else{
                        // Fill in all non-borders with spaces
                        tabla[i][j]=' ';
                        / * Ends the cycle when the column reaches an anterior position of the right edge * /
                        if(j==anchura-2){
                            break;
                        }
                    }
                }
            }
        }
    }
    //Show the Matrix
    for(i=0;i<altura;i++){
        for(j=0;j<anchura;j++){
            printf("%c",tabla[i][j]);
        }
        printf("\n");
    }
}
