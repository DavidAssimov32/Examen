    #include <stdio.h>
    #include <ctype.h>
     
    int main()
    {
       char cadena[50];
       int i;
     
       printf("\nEscribe un usuario: ");
       scanf("%s", &cadena);
     
       for(i = 0; cadena[i]; i++) 
          cadena[i] = toupper(cadena[i]);
     
       printf("\n%s\n", cadena);




   for(i = 0; cadena[i]; i++) 
      cadena[i] = tolower(cadena[i]);
 
 
   printf("\n%s\n", cadena);
   

   }
