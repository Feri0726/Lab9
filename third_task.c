/* Task description:Substrings of strings
Please visit the homepage for more detail and visuals
Write a function that receives a string and copies only
a part of it, specified by a starting and an ending index!
(The received string must be intact.)
The start index is the position of the first character
to keep and the end index is the position of the first character
that it not to keep. (Hence, the interval is closed from
the left and open from the right).
When the start index is less than 0, or the end index is
 greater than the length of the string, write an error
 message to the screen before returning with invalid pointer!
The function should return with the address of a dynamically
 allocated string containing the substring to keep.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *substring(char *original, int start, int end)
{
  int len = strlen(original);
  if (start < 0)
  {
    printf("Starter less than 0");
    return NULL;
  }
  if (end > len)
  {
    printf("End bigger than lenght");
    return NULL;
  }
  char *newss = (char *)malloc(sizeof(char) * (end - start + 1));
  for (int i = start; i < end; i++)
  {
    newss[i - start] = original[i];
  }
  newss[end] = '\0';

  return newss;
  /*
   * Creates a new string from "orig" consisting of characters
   * between positions start and end. The caller is responsible
   * to release the memory behind the result of the function.
   */
}

int main()
{
  char string[101] = "This is a text not containing anything rude or harsh"; // this is an array on the stack, mutable!
  char *substr = substring(string, 5, 15);
  printf("%s", substr);
  // Deallocate!!
  free(substr);

  return 0;
}
