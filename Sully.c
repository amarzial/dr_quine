#include <stdio.h>
#define NAME "Sully_%d.c"
#define BUILD(x) char* s=#x;x
#define N 5
BUILD(int main(){char name[30];int i = N - 1;if (i < 0) return 0;sprintf(name, NAME, i);FILE* f = fopen(name, "w");if (!f) return 1;fprintf(f, "#include <stdio.h>\n#define NAME \"Sully_%%d.c\"\n#define BUILD(x) char* s=#x;x\n#define N %d\nBUILD(%s)\n", i, s);fclose(f);})
