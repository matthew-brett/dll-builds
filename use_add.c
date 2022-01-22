/* use_add.c
*/

int do_add(int a, int b);

__declspec(dllexport) int __cdecl use_add(int a, int b)
{
  return do_add(a, b);
}
