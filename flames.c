#include<stdio.h>
#include<string.h>
char flames(int n);
char s1[100],s2[100];
char a[10]="123456";
void removeChar(char c);
void pop(int n);
void removeSpace();
int main(){
	int i,j,k;
    printf("Enter Your name: ");
    gets(s1);
    strlwr(s1);
    printf("Enter your crush name: ");
    gets(s2);
    strlwr(s2);
    removeSpace();
    int h;
    for(h=0;h<10;h++){
    for(i=0;i<strlen(s1);i++){
        for(j=0;j<strlen(s2);j++){
            if(s1[i]==s2[j]){
                removeChar(s1[i]);
            }
        }
    }}
    k=strlen(s1)+strlen(s2);
    while(strlen(a)>1){
		pop(k);
	}
    char l=a[0];
    if(l=='1'){
    	printf("F: Friends");
	}
	else if(l=='2'){
		printf("L: Lovers");
	}
	else if(l=='3'){
		printf("A: Ancestors");
	}
	else if(l=='4'){
		printf("M: Marriage");
	}
	else if(l=='5'){
		printf("E: Enemies");
	}
	else if(l=='6'){
		printf("S: Sister");
	}
}
void removeChar(char c) {
    int i, j,k;
    int len = strlen(s1);
    int flag1=0,flag2=0;
    for(i=0;i<strlen(s1);i++){
        if((s1[i]==c) && (flag1==0)){
        	for(k=i;k<strlen(s1);k++){
        		s1[k]=s1[k+1];
			}
			flag1=1;
		}
	}
    s1[k-1] = '\0';
    len = strlen(s2);
    for(i=0;i<strlen(s2);i++){
        if((s2[i]==c) && (flag2==0)){
        	for(k=i;k<strlen(s2);k++){
        		s2[k]=s2[k+1];
			}
			flag2=1;
		}
	}
    s2[k-1] = '\0';
}
void pop(int c) {
	int l,i,len;
	if(c>strlen(a)){
		if((c%strlen(a))==0){
			l=strlen(a);
		}
		else
		{
		l=c%strlen(a);	
		}
	}
	else{
	 l=c;
	}
    len = strlen(a);
    for(i=l-1;i<len-1;i++){
    	a[i]=a[i+1];
    }
	a[i]='\0';
}
	
void removeSpace(){
	 int non_space_count1 = 0,non_space_count2=0,i;
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] != ' ')
        {
            s1[non_space_count1] = s1[i];
            non_space_count1++;
        }    
    }
    s1[non_space_count1] = '\0';
    for (i = 0; s2[i] != '\0'; i++)
    {
        if (s2[i] != ' ')
        {
            s2[non_space_count2] = s2[i];
            non_space_count2++;
        }    
    }
    s2[non_space_count2] = '\0';
}
