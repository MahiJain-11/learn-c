#include <stdio.h>
#include <string.h>
int main()
{
//mutable and imutable strings
// in mutable we can make changes but in imutable we cannot
// char *p = "Hello mahi";
// char a[100]="hello mahi";
// printf("%s\n",p);
// printf("%s\n",a);
// a[0]='M'; // a[o] mai H ki jgah M daalne ka kaam means mutable
// printf("%s",a);
// p[0]='M';
// printf("%s\n",p); //imutable

// shallow and deep copy
//A shallow copy(char*) means only the address (pointer) is copied, not
//the actual data. it is basically used ... instead of copying thousand times
//you just need to copy address
// char *a = "Hello mahi , you are so lovely";
// char *b = a; //shallow copy
// printf("%s\n",a);
// printf("%s",b);
// puts(a);
// puts(b);
//DEEP copy deep copy means a new copy of the data is created.
//if you want to modify one string without affecting the other.
// char a[] = "Hello mahi jain";
// char b[20];
// strcpy(b, a);
// b[0]='M';
// printf("%s\n",a);
// printf("%s",b);

//string FUNCTIONS 
// | Function    | Purpose                               | Example              
// | ----------- | ------------------------------------- | ---------------------
// | strlen()  | Finds length of a string              | strlen("hello") → 5|
// | strcpy()  | Copies one string to another          | strcpy(b, a);      |
// | strncpy() | Copies first `n` characters           | strncpy(b, a, 3);   |
// | strcat()  | Concatenates (joins) two strings      | strcat(a, b);`      |
// | strncat() | Appends first `n` characters          | strncat(a, b, 2);   |
// | strcmp()  | Compares two strings                  | strcmp(a, b);       |
// | strncmp() | Compares first `n` characters         | strncmp(a, b, 3);   |
// | strchr()  | Finds first occurrence of a character | strchr(a, 'l');     |
// | strrchr() | Finds last occurrence of a character  | strrchr(a, 'l');    |
// | strstr()  | Finds a substring                     | strstr(a, "ell");   |



    return 0;
}