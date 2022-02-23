#include <stdio.h>


int main()
{
    char s[100];
    scanf("%s",s);
    int i=0,l=0,u=0,n=0,sp=0;
    while(s[i]!='\0'){
        if(s[i]=='_' || s[i]=='@' || s[i]=='%' || s[i]=='#' || s[i]=='$'){
            if(i==0){
                printf("Invalid password");
                return 0;
            }
            else{
                sp+=1;
            }
        
        }
        else if(s[i]>='a' && s[i]<='z'){
            l+=1;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            u+=1;
        }
        else if(s[i]>='0' && s[i]<='9'){
            n+=1;
            if(i==0)
            {
            printf("Invalid Password");
            return 0;
            }
        }
        i+=1;
    }
    if(l>0 && u>0 && n>0 && sp>0 && i>=8 && i<=12){
        printf("Accepted");
    }
    else{
        printf("Invalid password");
    }
}
