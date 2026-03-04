#include<stdio.h>
void  student (int n);
struct std{
    int roll;
    char nam[20];
    float marks;
}s[25];
int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    student(n);
    return 0;
}
void student(int n)
{
    int i,j;
    struct std temp;
    for(int i=0; i<n; i++){
        printf("Enter details for student %d:\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].nam);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Sorting the students based on marks
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(s[i].marks < s[j].marks){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    // Displaying the sorted student details
    printf("\nStudent details (sorted by marks):\n");
    for(i=0; i<n; i++){
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].nam);
        printf("Marks: %.2f\n", s[i].marks);
    }
    
}