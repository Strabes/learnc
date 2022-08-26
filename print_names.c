#include <stdio.h>


const int MAX = 4;
 
int main () {

   char names[4] = {'A','B','C','D'};
   char *pt_names = names;
   /*char *names[] = {
      "Zara Ali",
      "Hina Ali",
      "Nuha Ali",
      "Sara Ali"
   };*/
   
   int i = 0;

   printf("Value of names = %p, the address of it's first element.\n", names);
   printf("Value of &names = %p, the address of the entire array\n", &names);
   printf("sizeof(names) = %d\n",sizeof(names));
   printf("sizeof(&names) = %d\n",sizeof(&names));
   for ( i = 0; i < MAX; i++) {
      printf("Value of names[%d] = %c\n", i, names[i] );
      printf("Value of &names[%d] = %p\n", i, &names[i] );
      printf("Value of pt_names[%d] = %c, the dereferenced pointer\n", i, pt_names[i]);
      printf("Value of &pt_names[%d] = %p, the address of the dereferenced pointer\n", i, &pt_names[i] );
      printf("Value of *(pt_names+%d) = %c, the dereferenced pointer\n", i, *(pt_names+i) );
   }

   i=0;
   for ( i = 0; i < MAX; i++){
    printf("Value of pt_names++ = %p\n", pt_names++);
   }
   
   return 0;
}


/*
const int MAX = 3;
 
int main () {

   int  var[] = {10, 100, 200};
   int i, *ptr[MAX];
 
   for ( i = 0; i < MAX; i++) {
      ptr[i] = &var[i]; // assign the address of integer.
   }
   
   for ( i = 0; i < MAX; i++) {
      printf("Value of var[%d] = %d\n", i, *ptr[i] );
   }
   
   return 0;
}
*/