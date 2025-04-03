#include <stdio.h>
#include <math.h>
#define PI 3.14
void dia(float);
void area(float);
void peri(float);
float rad(int,int,int,int);
int main() {
    printf("\nEnter the first coordinates: ");
    int x1,y1,x2,y2;
    float r;
    scanf("%d%d",&x1,&y1);
    printf("\nEnter the second coordinates: ");
    scanf("%d%d",&x2,&y2);
    r=rad(x1,y1,x2,y2);
    dia(r);
    area(r);
    peri(r);
    return 0;
}
float rad(int x1,int y1,int x2,int y2)
{
    float rad=(sqrt(pow((x2-x1),2)+pow((y2-y1),2)))/2;
    return rad;
}
void dia(float r){
    float dia=2*r;
    printf("\nThe radius is %f",r);
    printf("\nThe radius in integer is %d",(int)r);
    printf("\nThe diameter is %f",dia);
}
void area(float r)
{
    float area=PI*pow(r,2);
    printf("\nThe area is %f",area);
}
void peri(float r){
    float peri=2*PI*r;
    printf("\nThe perimeter is %f",peri);
}