#include <stdio.h>
void student (int n);
struct student{
    int roll;
    char nam[20];
}s[25];
 int main(){
    int i,n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", s[i].nam);
        printf("Enter the roll number of student %d: ", i+1);
        scanf("%d", &s[i].roll);
    }
    student(n);
}
 void student(int n){
    int i,j;
    struct student temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(s[i].roll>s[j].roll){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("Students sorted by roll number:\n");
    for(i=0;i<n;i++){
        printf("Name: %s, Roll Number: %d\n", s[i].nam, s[i].roll);
    }
}
