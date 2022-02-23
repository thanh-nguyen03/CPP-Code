#include<stdio.h>
#include<math.h>
int main(){
	float a ,b ,c;
	scanf("%f%f%f", &a, &b, &c);
	float delta = b*b- 4*a*c;
	if(a!=0){
		if(delta>0){
			delta = sqrt(delta);
			float x1 = (-b+delta)/(2*a);
			float x2 = (-b-delta)/(2*a);
			
				if(x1>x2){
					printf("%.2f ",x1);
					printf("%.2f",x2);
				}
				else{
					printf("%.2f ",x2);
					printf("%.2f", x1);
				}
			
		} else if(delta==0){
			printf("%.2f", -b/(2*a));
		} else {
			printf("NO");
		}
	}
}