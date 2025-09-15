#include<stdio.h>
int main() {
	char msDegree[19];
	char interview[20];
	printf("do you have a MS degree(MS/no)");
	scanf("%s",&msDegree);
	if (strcmp(msDegree,"MS")== 0)  {
	printf("you have a interview");
    printf("did you passed your interview(pass/not passed)\n");
    scanf("%s",&interview);
        if (strcmp(interview,"pass")==0){
        	printf("you are hired\n");
		}else {
			printf("you are not hired\n");
		}
	}else {
		printf("you are not eligible for this job\n");
	}
	return 0;
}
