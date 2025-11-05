/* Task description:Removing parts from strings
Visit HP too!

Write the inverse of the previous function: the part delimited 
by the start and end indices should be removed from the original 
text, and the rest is kept! 
The function should not modify the source string received as a 
parameter, a brand new string should be created dynamically, and 
returned by the function.

Write a C program to demonstrate the usage of the function. 
Don't forget to release the memory at the end.


*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *remover(char* original, int first, int second){
  int len = strlen(original);
  char* sho = (char*)malloc(sizeof(char)*(len-(second-first)+1));
  int j = 0;
  for (int i = 0; i < len; i++){
    if ((i < first)|| (i >= second)){
      sho[i + j] = original[i];
    }
    else{
      j--;
    }
  }
  sho[(len-second+first)] = '\0';
  return sho;

}


int main(){
  char string[101] = "idont know what to write";
  char *news = remover(string, 5, 10);
  printf("%s", news);
  free(news);

  return 0;
}
