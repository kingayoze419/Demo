#include <stdio.h>
#include <string.h>

int main(){
	int total,i;
	char contact[10];
	char id[10];
	char name[30];
	
	printf("Enter the size of the class : \n");
	scanf("%d",&total);
	getchar();
	
	for(i=1;i<=total;i++){
	printf("Enter your full name \n");
	fgets(name,sizeof(name),stdin);
	
	printf("Enter your index number \n");
	fgets(id,sizeof(id),stdin);
	
	printf("Enter your telephone number \n");
	printf("+233 ");
	fgets(contact,sizeof(contact),stdin);
	printf("\n");
	printf("Student %i details \n",i);
	printf("Name : %s",name);
	printf("Student ID : %s",id);
	printf("Telephone num : +233 %s \n",contact);
	printf("NEXT STUDENT \n");
}
	return 0;
}
