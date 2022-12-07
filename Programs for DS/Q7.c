#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct node
{
    int rollno;
    char name[30];
    struct node *next;
} * start;

void create_list(int data, char str[])
{
    struct node *node, *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->rollno = data;
    strcpy(new_node->name, str);
    new_node->next = NULL;
    if (start == NULL)
    {
        start = new_node;
    }
    else
    {
        node = start;
        while (node->next != NULL)
        {
            node = node->next;
        }
        node->next = new_node;
    }
}

void add_begin(int rn, char sname[])
{
    struct node *node, *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->rollno = rn;
    strcpy(new_node->name, sname);
    node = start;
    new_node->next = start;
    start = new_node;
}
void add_end(int rn, char sname[])
{
    struct node *node, *new_node;
    node = start;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->rollno = rn;
    strcpy(new_node->name, sname);

    while (node->next != NULL)
    {
        node = node->next;
    }
    new_node->next = node->next;
    node->next = new_node;
}

void add_specific(int rn, char sname[], int pos)
{
    struct node *node, *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->rollno = rn;
    strcpy(new_node->name, sname);
    node = start;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        node = node->next;
        cnt++;
    }
    new_node->next = node->next;
    node->next = new_node;
}

void count()
{
    struct node *node = start;
    int cnt = 0;
    while (node != NULL)
    {
        node = node->next;
        cnt++;
    }
    printf("Number of elements are : %d\n", cnt);
    return;
}

void display()
{
    struct node *node;
    if (start == NULL)
    {
        printf("List is empty !");
        return;
    }
    node = start;
    printf("The List is : \n");
    while (node != NULL)
    {
        printf("%d ", node->rollno);
        puts(node->name);
        node = node->next;
    }
    printf("\n");
}

void reverse()
{
    struct node *p1, *p2, *p3;
    if (start->next == NULL)
    {
        return;
    }
    p1 = start;
    p2 = p1->next;
    p3 = p2->next;
    p1->next = NULL;
    p2->next = p1;
    while (p3 != NULL)
    {
        p1 = p2;
        p2 = p3;
        p3 = p3->next;
        p2->next = p1;
    }
    start = p2;
}
void delete_begin()
{
    struct node *node;
    node = start;
    if (node == NULL)
    {
        printf("Underflow !");
        return;
    }
    else
    {
        start = node->next;
    }
}
void delete_end()
{
    struct node *node;
    node = start;
    if (node == NULL)
    {
        printf("Underflow !");
        return;
    }
    while ((node->next)->next != NULL)
    {
        node = node->next;
    }
    node->next = NULL;
}

void delete_specific(int pos)
{
    struct node *node;
    if (start == NULL)
    {
        printf("Underflow !");
        return;
    }
    node = start;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        node = node->next;
        cnt++;
    }
    node->next = (node->next)->next;
}

int main()
{

    int i, m, n, pos, ch, rn;
    char str1[20], sname[25];
    printf("UDAYDEEP SINGH DHIR\tCSE1\t00813202721\n");

    start = NULL;
    while (1)
    {
        printf("\n1. Create List");
        printf("\n2. Add at the beginning");
        printf("\n3. Add at the end");
        printf("\n4. Add at specified location");
        printf("\n5. Display");
        printf("\n6. Count");
        printf("\n7. Reverse");
        printf("\n8. Delete from the beginning");
        printf("\n9. Delete from the end");
        printf("\n10.Delete from specified location");
        printf("\n11.Quit");
        printf("\n\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter the number of nodes : ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("Enter Roll Number = ");
                scanf("%d", &m);
                printf("Enter Name = ");
                scanf("%s", &str1);
                create_list(m, str1);
            }
            break;

        case 2:
            printf("Enter Roll Number = ");
            scanf("%d", &rn);
            printf("Enter Name = ");
            scanf("%s", sname);
            add_begin(rn, sname);
            printf("After Insertion at the beginning ");
            display();
            break;

        case 3:
            printf("Enter Roll Number = ");
            scanf("%d", &rn);
            printf("Enter Name = ");
            scanf("%s", sname);
            add_end(rn, sname);
            printf("After Insertion at the end ");
            display();
            break;

        case 4:
            printf("\nEnter the position at which the element is to be inserted = ");
            scanf("%d", &pos);
            printf("Enter Roll Number = ");
            scanf("%d", &rn);
            printf("Enter Name = ");
            scanf("%s", sname);
            add_specific(rn, sname, pos);
            printf("After Insertion at specific location ");
            display();
            break;

        case 5:
            display();
            break;

        case 6:
            count();
            break;

        case 7:
            reverse();
            printf("After Reversal \n");
            display();
            break;

        case 8:
            delete_begin();
            printf("The element is deleted successfully !\n");
            printf("After Deletion from the beginning ");
            display();
            break;

        case 9:
            delete_end();
            printf("The element is deleted successfully !\n");
            printf("After Deletion from the end ");
            display();
            break;

        case 10:
            printf("\nEnter the position at which the element is to be deleted = ");
            scanf("%d", &pos);
            delete_specific(pos);
            printf("The element is deleted successfully !\n");
            printf("After Deletion from specific location ");
            display();
            break;

        case 11:
            printf("\nExiting the program...");
            exit(1);
            break;

        default:
            printf("Wrong Input !");
            exit(1);
        }
    }
    return 0;
}