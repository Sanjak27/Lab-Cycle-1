#include <stdio.h>
struct Student{
    char name[20];
    int rno;
    float mark1,mark2,mark3;
};
int main()
{
    printf("\nEnter the number of students ");
    int n;
    float t[n],temp;
    scanf("%d",&n);
    struct Student s[n],tmp;
    for(int i=0;i<n;i++){
        printf("\nEnter name, roll number and marks of 3 subjects out of 100: ");
        scanf("%s%d%f%f%f",s[i].name,&s[i].rno,&s[i].mark1,&s[i].mark2,&s[i].mark3);
        t[i]=s[i].mark1+s[i].mark2+s[i].mark3;
    }
    for(int i=1;i<n-1;i++){
        for(int j=1;j<=n-i;j++){
            if(t[j-1]>t[j]){
                temp=t[j-1];
                t[j-1]=t[j];
                t[j]=temp;
                tmp=s[j-1];
                s[j-1]=s[j];
                s[j]=tmp;
            }
        }
    }
    printf("\n\t<---------Ranklist-------->");
    for(int i=n-1;i>=0;i--){
        printf("\n\tName: %s Rollno: %d Mark1: %f Mark2: %f Mark3: %f Total: %f Percentage: %f",s[i].name,s[i].rno,s[i].mark1,s[i].mark2,s[i].mark3,t[i],t[i]/3);
    }
    return 0;
}
