#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int uSel;
  if(argc<2){
    printf("Desired multiplication table? "); 
    scanf("%i", &uSel);
  }
  else if(argc==2){ 
   uSel=atoi(argv[1]);
   }
   printf("Multiplication Table -> %d\n", uSel);
   //Declare row double pointer
   int **arr = (int**)malloc(sizeof(int*)*uSel);
   
   //Iteratively declare column pointers, for each row
   for(int i=0; i<uSel; i++){
     arr[i]=(int*)malloc((sizeof(int)*uSel+1));
   }
 
   //Assign values to each individual cell
   for(int i=0; i<uSel; i++){
     for(int j=0; j<uSel; j++){
       arr[i][j]=(i+1)*(j+1);
     }
   }
 
   //print first row, with space as leftmost cell, then newline
   printf("%4c",' ');
   for(int i=0; i<uSel; i++){
     printf("%4d", i+1);
   } printf("\n");
 
   //Print subsequent rows, outer loop is reference column
   //inner loop is the actual multiplication table "arr[i][j]"
   for(int i=0; i<uSel;i++){
     printf("%4d", i+1);
     for(int j=0; j<uSel;j++){
       printf("%4d", arr[i][j]);
     }printf("\n");
   }
 
   //Free all the column pointers
   for(int i=0; i<uSel; i++){
     free(arr[i]);
   }
 
   //Free the double row pointer
   free(arr);
 
  return 0;
}
