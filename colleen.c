#include <stdio.h>
#include <string.h>
#include <unistd.h>
void print_self(char *str[], char q, char n) {
	char comma = ',';
	char pad[2];
	memset(pad, 9, 2);
	for (int i = 0; i < 27; ++i) {
		write(1, pad, 2); write(1, &q, 1); write(1, str[i], strlen(str[i])); write(1, &q, 1); write(1, &comma, 1); write(1, &n, 1);
	}
}
//main function
int main() {
	//string containing program
	char quote = 34;
	char nline = 10;
	char *str[] = {
		"#include <stdio.h>",
		"#include <string.h>",
		"#include <unistd.h>",
		"void print_self(char *str[], char q, char n) {",
		"	char comma = ',';",
		"	char pad[2];",
		"	memset(pad, 9, 2);",
		"	for (int i = 0; i < 27; ++i) {",
		"		write(1, pad, 2); write(1, &q, 1); write(1, str[i], strlen(str[i])); write(1, &q, 1); write(1, &comma, 1); write(1, &n, 1);",
		"	}",
		"}",
		"//main function",
		"int main() {",
		"	//string containing program",
		"	char quote = 34;",
		"	char nline = 10;",
		"	char *str[] = {",
		"	};",
		"	for (int i = 0; i < 17; ++i){",
		"		write(1, str[i], strlen(str[i])); write(1, &nline, 1);",
		"	}",
		"	print_self(str, quote, nline);",
		"	for (int i = 17; i < 27; ++i){",
		"		write(1, str[i], strlen(str[i])); write(1, &nline, 1);",
		"	}",
		"	return 0;",
		"}",
	};
	for (int i = 0; i < 17; ++i){
		write(1, str[i], strlen(str[i])); write(1, &nline, 1);
	}
	print_self(str, quote, nline);
	for (int i = 17; i < 27; ++i){
		write(1, str[i], strlen(str[i])); write(1, &nline, 1);
	}
	return 0;
}
