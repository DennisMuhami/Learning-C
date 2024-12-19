#include <stdio.h>

int main ()
{

    
    FILE *pF = fopen("C:\\Users\\USER\\Desktop\\test.txt", "w");  //w a 

    fprintf(pF, "Patric Star\n");


    fclose(pF);
    

   /*
   if( remove("test.txt") == 0)
   {
        printf("File deleted successfully");
   }
   else
   {
        printf("File was NOT deleted");
   }
    */

    return 0;
}