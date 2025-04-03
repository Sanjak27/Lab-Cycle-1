#include <stdio.h>
void sine();
void cosine();
void cube();
int main() {
    sine();
    cosine();
    cube();
    return 0;
}
void sine(){
    printf("\n\tEnter the x value: ");
    int t;
    double x;
    double sinx=0;
    scanf("%lf",&x);
    double s=x;
    printf("\n\tEnter the no of terms: ");
    scanf("%d",&t);
    for(int i=1;i<=(2*t-1);i+=2){
        sinx+=s;
        s=(s*x*x*(-1))/((i+1)*(i+2));
    }
    printf("\nSin(%lf) = %lf",x,sinx);
}
void cosine(){
    printf("\n\tEnter the x value: ");
    int t;
    double x;
    double cosx=0;
    scanf("%lf",&x);
    double c=1;
    printf("\n\tEnter the no of terms: ");
    scanf("%d",&t);
    for(int i=0;i<=(2*t);i+=2){
        cosx+=c;
        c=(c*x*x*(-1))/((i+1)*(i+2));
    }
    printf("\nCos(%lf) = %lf",x,cosx);
}
void cube(){
    printf("\n\tEnter the no. of terms:\n ");
    int t;
    int i=0;
    int sum=0;
    scanf("%d",&t);
    do{
        i++;
        sum+=i*i*i;
        printf("%d^3 ",i);
        if(i==t){
            break;
        }
        printf(" + ");
    }while(i<t);
    printf("= %d",sum);
    }
