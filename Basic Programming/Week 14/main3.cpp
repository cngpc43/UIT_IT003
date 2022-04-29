/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
strlen
strcat
string
strcmp
strcpy
memmove
strstr
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrcmp (char s1[], char s2[]);

int
main ()
{
  char s1[MAX], s2[MAX];
  cin.getline (s1, 254);
  cin.getline (s2, 254);
  int kt = myStrcmp (s1, s2);
  cout << kt << endl;
  return 0;
}
//###INSERT CODE HERE -
int myStrcmp(char s1[], char s2[])
{
    int n = 0;
	while (s1[n] != '\0' || s2[n] != '\0')
	{
		if (s1[n] > s2[n])
			return 1;
		else if (s1[n] < s2[n])
			return -1;
		n++;
	};
	return 0;
}
