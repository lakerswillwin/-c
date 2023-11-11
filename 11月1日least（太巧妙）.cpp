#include <stdio.h>
int main(){
int a[1000000]={0},i,n,k;
scanf("%d",&n);
int index=0;
for(i=0;i<n;i++){
scanf("%d",&k);
if(a[k]==0){
a[k]=1;
index=i;
}
}
printf("%d",index);
return 0;
}
