#include <stdio.h>
int main(){
   char s[]={"zhang wang li"};
 int count=0,len=sizeof(s),resize;


 //统计空格
 for(int i=0;i<len;i++){
    if (s[i]==' ')
    {
       /* code */
       count++;
    }
 }
 //修改s
 resize=(len+2*count);
 //遍历
 for(int i=len-1,j=resize-1;i<j;i--,j--)
 {
    if (s[i]!=' ')
    {
      s[j]=s[i];
    }
    else{
       s[j-2]='%';
        s[j-1]='2';
         s[j]='0';
         j-=2 ;   }
 }
 printf("%s",s);
};


