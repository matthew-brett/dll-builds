/* show_add.c
*/

#include <stdlib.h>
#include <stdio.h>

__declspec(dllimport) int __cdecl use_add(int a, int b);

int main(int argc, char** argv)
{
  printf("%d\n", use_add(6, 23));

  return EXIT_SUCCESS;
}
