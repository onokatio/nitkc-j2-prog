#include <stdio.h>

int main(void){
	char **names;
	int name_num = 0;
	int length;

	printf("input names number > ");
	scanf("%d",&name_num);

	names = (char **)malloc(sizeof(char *) * name_num);
	for(int i=0;i<name_num;i++){
		printf("input name length <%d> ",i);
		scanf("%d",&length);
		names[i] = (char *)malloc(sizeof(char ) * length);
		printf("input name <%d> ",i);
		scanf("%s",names[i]);
	}
}
