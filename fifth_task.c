/* Task description:Inserting strings into strings

This task is similar to the previous ones: the function receives a string, and creates a new one.

This time, however, the task is not to remove/cut something from a string,
but to insert another string to somewhere into the original string.
For instance, the result of insertstring("hello!", 5, ", world") is a new string
containing hello, world!: the second string has been inserted between letters "o" and "!".
*/

#include <stdio.h> //don't forget to include the required libraries

char *insert(char* original, int first, char* news){
  int len1 = strlen(original);
  int len2 =  strlen(news);
  char* reworked = (char*)malloc(sizeof(char)*(len1+len2+1));
  int j = 0;
  for (int i = 0; i < (len1+len2+first); i++){
    if (i < first){
      reworked[i] = original[i];
    }
    if ((i >= first) && (i < first + len2)){
      reworked[i] = news[j];
      j++;
    }
    if ((i >= first +len2) && (i < len1 + len2)){
      reworked[i] = original[i-len2];
    }
    reworked[len1+len2] = '\0';
    return reworked;

}



int main()
{

  return 0;
}
