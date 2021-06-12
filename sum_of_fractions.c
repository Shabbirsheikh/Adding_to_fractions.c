#include<stdio.h>
int hcf(int a,int b){
	int i,h;
		for(i=1;i<=a||i<=b;i++){
		if((a%i==0)&&(b%i==0)){
			h=i;
		}
	}
	return h;
}
int main(){
	int a,b,x,y;
	scanf("%d %d %d %d",&x,&a,&y,&b);
	int m,n;
	int lcm;
	int i;
	

	lcm=(a*b)/hcf(a,b);
	m=(lcm/a)*x+(lcm/b)*y;
	int p,q;
	p=m/hcf(lcm,m);
	q=lcm/hcf(lcm,m);
	printf("%d/%d+%d/%d=%d/%d",x,a,y,b,p,q);
	return 0;
}
