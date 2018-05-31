#include<stdio.h>
int main(){
  int n;
  int a[100]={},b[100]={};
  int i;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
    b[n-i+1]=a[i];
  }
  for(i=1;i<=n;i++){
    printf("%d",b[i]);
    if(i<n)printf(" ");
    if(i==n)printf("\n");
  }
  return 0;
}
