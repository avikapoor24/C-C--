#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
struct student{
    int rollnum;
    char name[50];
    struct student *next;
} *start;
 
void create_list(int);
void add_at_beg(int);
void add_at_end(int);
void add_at_specified(int);
void delete_beg();
void delete_end();
void delete_specified();
void display();
void count();
void reverse();
 
int main() {
    int ch, n, m, pos, i, choice, roll;
    start = NULL;
    printf("you want to continue operation? 1 for yes ");
    scanf("%d", &choice);
 
    while(choice == 1){
        printf("\n1. create list of student\n");
        printf("2. add at begining\n");
        printf("3. add at end\n");
        printf("4. add at specified position\n");
        printf("5. delete from begining\n");
        printf("6. delete from end\n");
        printf("7. delete from specified position\n");
        printf("8. display\n");
        printf("9. count\n");
        printf("10. reverse\n");
        printf("11. quit\n");
 
        scanf("%d", &ch);
 
        switch (ch){
            case 1:
                printf("enter number of students ");
                scanf("%d", &n);
 
                for(i = 0; i < n; i++){
                    printf("enter roll number ");
                    scanf("%d", &roll);
 
                    create_list(roll);   
                }
                break;
 
            case 2:
                printf("enter roll number ");
                scanf("%d", &roll);
 
                add_at_beg(roll);
                break;
            
            case 3:
                printf("enter roll number ");
                scanf("%d", &roll);
 
                add_at_end(roll);
                break;
 
            case 4:
                printf("enter roll number ");
                scanf("%d", &roll);
 
                add_at_specified(roll);
                break;
            
            case 5:
                delete_beg();
                break;
 
            case 6:
                delete_end();
                break;
 
            case 7:
                delete_specified();
                break;
 
            case 8:
                display();
                break;
 
            case 9:
                count();
                break;
 
            case 10:
                reverse();
                break;
 
            case 11:
                exit(0);
        }
    }
    printf("\n");
    return 0;
}
 
void create_list(int roll){
    struct student *student, *new_student;
    new_student = (struct student*)malloc(sizeof(struct student));
    new_student->rollnum = roll;
    printf("enter name of student ");
    scanf("%s", &new_student->name);
    new_student->next = NULL;
 
    if(start == NULL){
        start = new_student;
    }
 
    else{
        student = start;
 
        while(student->next != NULL){
            student = student->next;
        }
        student->next = new_student;
    } 
}
 
void add_at_beg(int roll){
    struct student *new_student;
    new_student = malloc(sizeof(struct student));
    new_student->rollnum = roll;
    printf("enter name of student ");
    scanf("%s", &new_student->name);
    new_student->next = start;
    start = new_student;
}
 
void add_at_end(int roll){
    struct student *student, *new_student;
    student = start;
    new_student->rollnum = roll;
    printf("enter name of student ");
    scanf("%s", &new_student->name);
 
    while(student->next != NULL){
        student = student->next;
    }
 
    new_student->next = student->next;
    student->next = new_student;
}
 
void add_at_specified(int roll){
    int position;
    int count = 1;
    printf("enter position");
    scanf("%d", &position);
 
    struct student *student, *new_student;
    student = start;
 
    new_student->rollnum = roll;
    printf("enter name of student ");
    scanf("%s", &new_student->name);
    
    while(count < position-1){
        student = student->next;
        count++;
    }
    new_student->next = student->next;
    student->next = new_student;
}
 
void display(){
    struct student *student;
    if(start == NULL){
        printf("list is empty\n");
        return;
    }
    else{
        student = start;
        while(student != NULL){
            printf("roll number %d   name %s \n", student->rollnum, student->name);
            student = student->next;
        }
    }
}
 
void delete_beg(){
    struct student *student;
    student = start;
    if(student == NULL){
        printf("empty list");
    }
    else{
        start = student->next;
    }
}
 
void delete_end(){
    struct student *student;
    student = start;
    if(student == NULL){
        printf("empty list");
    }
    else{
        while(student->next->next != NULL){
            student = student->next;
        }
 
        student->next = NULL;
    }
}
 
void count(){
    struct student *student;
    int counter = 0;
    if(start == NULL){
        printf("list is empty");
    }
 
    else{
        student = start;
        
        while(student != NULL){
            student = student->next;
            counter ++;
        }
        printf("\n");
    }
 
    printf("number of nodes = %d", counter);
}
 
void reverse(){
    struct student *p1, *p2, *p3;
    if(start->next == NULL){
        return;
    }
    p1 = start;
    p2 = p1->next;
    p3 = p2->next;
 
    p1->next = NULL;
    p2->next = p1;
 
    while(p3 != NULL){
        p1 = p2;
        p2 = p3;
        p3 = p3->next;
        p2->next = p1;
    }
    start = p2;
}
 
void delete_specified(){
    struct student *student;
    student = start;
    int count = 1;
    int position;
    printf("enter position to be deleted");
    scanf("%d", &position);
 
    if(student == NULL){
        printf("empty list");
        return;
    }
 
    while(count < position-1){
        student = student->next;
        count++;
    }
 
    student->next = student->next->next;
}
