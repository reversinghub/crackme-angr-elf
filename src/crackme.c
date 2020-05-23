#include <stdio.h>
#include <string.h>

char password[] = "a0dfbc837e";

/* Input data (correct flag is 6241570398) */
char flag[10] = {0};

typedef struct myNode{
  char idx;
  struct myNode *ptr;
} myNode;

myNode v[10] = {
	{'a', &v[6]}, /* v[0] */
	{'0', &v[3]}, /* v[1] */
	{'d', &v[1]}, /* v[2] */
	{'f', &v[7]}, /* v[3] */
	{'b', &v[2]}, /* v[4] */
	{'c', &v[4]}, /* v[5] */
	{'8', &v[0]}, /* v[6] */
	{'3', &v[5]}, /* v[7] */
	{'7', &v[9]}, /* v[8] */
	{'e', &v[8]}  /* v[9] */
};

char str[10] = {0};

int main( void )
{
	int i;
	int pos;

	printf("[*] Hello! Please enter the password: ");
	scanf("%10s", flag);
	
	for( i = 0; i < 10; i++ ) {		
		myNode *n;
		
		pos = flag[i] - '0';
		/* printf("Idx:%d char:%c pos:%d\n", i, p[i], pos); */
		
		if (pos<0 || pos>9)
			continue;
			
		n = v[pos].ptr;
		str[i] = (*n).idx;
		/* printf("%c \n", (*n).idx);	*/
	}
	
	if(!strcmp(str, password)){
		printf("[*] Congratulations! You have found the flag.\n");
	} else {
		printf("[-] Invalid flag! Try again...\n");
	}	
}
