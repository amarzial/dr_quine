#include <stdio.h>
#define WRAP(x) #x
#define FNAME WRAP(Grace_kid.c) /*target file name*/
#define PROG(x) char *s = #x;int main()x
PROG({FILE* f = fopen(FNAME, WRAP(w)); if(!f) return 1; fprintf(f, "#include <stdio.h>\n#define WRAP(x) #x\n#define FNAME WRAP(Grace_kid.c) /*target file name*/\n#define PROG(x) char *s = #x;int main()x\nPROG(%s)\n", s); fclose(f);})
