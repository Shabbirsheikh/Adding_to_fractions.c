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
	scanf("%d %d %d %d",&x,&a,&y,&b);//As 1st fraction is x/a and 2nd fraction is y/b//
	int m,n;
	int lcm;
	int i;
	

	lcm=(a*b)/hcf(a,b);
	m=(lcm/a)*x+(lcm/b)*y;
	int p,q;
	p=m/hcf(lcm,m);//it may be possible that m,lcm i.e., desired numerator and denominator may have common multiple so we have to remove them//
	q=lcm/hcf(lcm,m);
	printf("%d/%d+%d/%d=%d/%d",x,a,y,b,p,q);//x/a+y/b=p/q//
	return 0;
}
