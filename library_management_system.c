#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
    char name[50];
    char author[50];
    int id;
    struct book *next;
};

struct student
{
    char name[50];
    char book[50];
    char a[50];
    int id;
    struct student *next;
};

struct book *start_lib = NULL;
struct student *start = NULL;
struct book *init(struct book *);
struct student *book_issue(struct student *);
struct student *book_return(struct student *);
struct book *delete_book(int);
struct book *add_book(char[], char[], int);
void display(struct student *);
void main_menu();

struct book *init(struct book *start)
{
    struct book *ptr, *new_book1, *new_book2, *new_book3, *new_book4, *new_book5;
    struct book *new_book6, *new_book7, *new_book8, *new_book9, *new_book10;
    struct book *new_book11, *new_book12, *new_book13, *new_book14, *new_book15;

    new_book1 = (struct book *)malloc(sizeof(struct book));
    new_book1->next = NULL;
    start_lib = new_book1;
    strcpy(new_book1->name, "Calculas 14th Edition");
    strcpy(new_book1->author, "George Thomas");
    new_book1->id = 101;
    ptr = new_book1;

    new_book2 = (struct book *)malloc(sizeof(struct book));
    new_book2->next = NULL;
    strcpy(new_book2->name, "Advanced Engineering Mathematics");
    strcpy(new_book2->author, "Erwin Kreyszig");
    new_book2->id = 102;
    ptr->next = new_book2;
    ptr = new_book2;

    new_book3 = (struct book *)malloc(sizeof(struct book));
    new_book3->next = NULL;
    strcpy(new_book3->name, "Concepts of Programming Languages");
    strcpy(new_book3->author, "Robert W. Sebesta");
    new_book3->id = 103;
    ptr->next = new_book3;
    ptr = new_book3;

    new_book4 = (struct book *)malloc(sizeof(struct book));
    new_book4->next = NULL;
    strcpy(new_book4->name, "Programming Languages");
    strcpy(new_book4->author, "Terrence W. Pratt");
    new_book4->id = 104;
    ptr->next = new_book4;
    ptr = new_book4;

    new_book5 = (struct book *)malloc(sizeof(struct book));
    new_book5->next = NULL;
    strcpy(new_book5->name, "The C Programming Language");
    strcpy(new_book5->author, "Dennis M. Ritchie");
    new_book5->id = 105;
    ptr->next = new_book5;
    ptr = new_book5;

    new_book6 = (struct book *)malloc(sizeof(struct book));
    new_book6->next = NULL;
    strcpy(new_book6->name, "Fundamentals of Data Structures");
    strcpy(new_book6->author, "Ellis Horowitz");
    new_book6->id = 106;
    ptr->next = new_book6;
    ptr = new_book6;

    new_book7 = (struct book *)malloc(sizeof(struct book));
    new_book7->next = NULL;
    strcpy(new_book7->name, "Elements of Discrete Mathematics");
    strcpy(new_book7->author, "C. L. Liu");
    new_book7->id = 107;
    ptr->next = new_book7;
    ptr = new_book7;

    new_book8 = (struct book *)malloc(sizeof(struct book));
    new_book8->next = NULL;
    strcpy(new_book8->name, "Discrete Mathematics and Its Applications");
    strcpy(new_book8->author, "Kenneth H. Rosen");
    new_book8->id = 108;
    ptr->next = new_book8;
    ptr = new_book8;

    new_book9 = (struct book *)malloc(sizeof(struct book));
    new_book9->next = NULL;
    strcpy(new_book9->name, "Digital Deign");
    strcpy(new_book9->author, "Morris Mano");
    new_book9->id = 109;
    ptr->next = new_book9;
    ptr = new_book9;

    new_book10 = (struct book *)malloc(sizeof(struct book));
    new_book10->next = NULL;
    strcpy(new_book10->name, "Modern Digital Eletronics");
    strcpy(new_book10->author, "R. P. Jain");
    new_book10->id = 110;
    ptr->next = new_book10;
    ptr = new_book10;

    new_book11 = (struct book *)malloc(sizeof(struct book));
    new_book11->next = NULL;
    strcpy(new_book11->name, "Feedback Control System");
    strcpy(new_book11->author, "Norman Nise");
    new_book11->id = 111;
    ptr->next = new_book11;
    ptr = new_book11;

    new_book12 = (struct book *)malloc(sizeof(struct book));
    new_book12->next = NULL;
    strcpy(new_book12->name, "Man's Search For Meaning");
    strcpy(new_book12->author, "Viktor Frankel");
    new_book12->id = 112;
    ptr->next = new_book12;
    ptr = new_book12;

    new_book13 = (struct book *)malloc(sizeof(struct book));
    new_book13->next = NULL;
    strcpy(new_book13->name, "Wings of Fire");
    strcpy(new_book13->author, "Dr. A. P. J. Abdul Kalam");
    new_book13->id = 113;
    ptr->next = new_book13;
    ptr = new_book13;

    new_book14 = (struct book *)malloc(sizeof(struct book));
    new_book14->next = NULL;
    strcpy(new_book14->name, "Do Epic Shit");
    strcpy(new_book14->author, "Ankur Warikoo");
    new_book14->id = 114;
    ptr->next = new_book14;
    ptr = new_book14;

    new_book15 = (struct book *)malloc(sizeof(struct book));
    new_book15->next = NULL;
    strcpy(new_book15->name, "Atomic Habits");
    strcpy(new_book15->author, "James Clear");
    new_book15->id = 115;
    ptr->next = new_book15;
    return start_lib;
}

struct student *book_issue(struct student *start)
{
    struct book *ptr;
    struct student *ptr2, *new_student;
    int i = 1, id, flag = 0;
    if (start_lib == NULL)
    {
        printf("\n No books left in the library to issue!\n\t\t\t\t Sorry for the inconvenience!\n");
    }
    else
    {
        ptr = start_lib;
        printf("\n************************************************* Books Available *************************************************\n");
        printf("\n_________________________________________________________________________________________________________________\n");
        printf("Book No.            Book Name                                          Author                           Book Id");
        printf("\n_________________________________________________________________________________________________________________\n\n");
        while (ptr != NULL)
        {
            printf(" %03d              ", i);
            printf("%-50s", ptr->name);
            printf("%-38s", ptr->author);
            printf("%03d", ptr->id);
            printf("\n\n");
            ptr = ptr->next;
            i++;
        }
        printf("_________________________________________________________________________________________________________________\n");
        printf("\n\n Enter the Book ID: ");
        scanf("%d", &id);
        ptr = start_lib;
        while (ptr != NULL)
        {
            if (ptr->id == id)
            {
                flag = 1;
                break;
            }
            ptr = ptr->next;
        }
        if (flag == 1)
        {
            ptr = start_lib;
            while (ptr->id != id)
            {
                ptr = ptr->next;
            }
            new_student = (struct student *)malloc(sizeof(struct student));
            printf("\n Enter Student Details:\n ");
            printf("\n Enter your Name: ");
            scanf("%s", &new_student->name);
            strcpy(new_student->book, ptr->name);
            strcpy(new_student->a, ptr->author);
            new_student->id = ptr->id;
            new_student->next = NULL;
            printf("\n Issue of Book ID %d done successfully!\n", new_student->id);
            printf("\n\n*************************************************\n");
            if (start == NULL)
            {
                start = new_student;
            }
            else
            {
                ptr2 = start;
                while (ptr2->next != NULL)
                {
                    ptr2 = ptr2->next;
                }
                ptr2->next = new_student;
            }
            start_lib = delete_book(new_student->id);
        }
    }
    return start;
}

struct student *book_return(struct student *start)
{
    struct student *ptr, *preptr;
    char bookname[50], authorname[50];
    int flag = 0, id, identity, d = 1;
    printf("\n\n*************** Books Submission: ****************\n");
    printf("\n\n Enter your Book ID: ");
    scanf("%d", &identity);
    ptr = start;
    while (ptr != NULL)
    {
        if (ptr->id == identity)
        {
            flag = 1;
            break;
        }
        ptr = ptr->next;
    }
    if (flag == 1)
    {
        ptr = start;
        while (ptr->id != identity)
        {
            d++;
            ptr = ptr->next;
        }
        ptr = start;
        if (d == 1)
        {
            printf("\n_________________________________________________\n");
            printf("\n Student Name: %s", start->name);
            printf("\n Name of Book Issued: %s", start->book);
            printf("\n_________________________________________________\n");
            printf("\n\n Return of Book ID %d done successfully!\n", identity);
            printf("\n\n*************************************************\n");
            strcpy(bookname, start->book);
            strcpy(authorname, start->a);
            id = start->id;
            start = start->next;
            free(ptr);
            add_book(bookname, authorname, id);
        }
        else
        {
            ptr = start;
            while (ptr->id != identity)
            {
                preptr = ptr;
                ptr = ptr->next;
            }
            printf("\n_________________________________________________\n");
            printf("\n Student Name: %s", ptr->name);
            printf("\n Name of Book Issued: %s", ptr->book);
            printf("\n Book ID: %d", ptr->id);
            printf("\n_________________________________________________\n");
            strcpy(bookname, ptr->book);
            strcpy(authorname, ptr->a);
            id = ptr->id;
            preptr->next = ptr->next;
            free(ptr);
            add_book(bookname, authorname, id);
        }
        printf("\n Thank you! \n Do visit again! ");
    }
    return start;
}

struct book *delete_book(int id)
{
    struct book *ptr, *preptr;
    int c = 0;
    ptr = start_lib;
    while (ptr != NULL)
    {
        c++;
        ptr = ptr->next;
    }
    if (c == 1)
    {
        ptr = start_lib;
        start_lib = NULL;
        free(ptr);
    }
    else if (start_lib->id == id)
    {
        ptr = start_lib;
        start_lib = start_lib->next;
        free(ptr);
    }
    else
    {
        ptr = start_lib;
        while (ptr->id != id)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr->next;
        free(ptr);
    }
    return start_lib;
}

struct book *add_book(char bookname[50], char authorname[50], int id)
{
    struct book *ptr, *new_book;
    new_book = (struct book *)malloc(sizeof(struct book));
    strcpy(new_book->name, bookname);
    strcpy(new_book->author, authorname);
    new_book->id = id;
    new_book->next = NULL;
    if (start_lib == NULL)
    {
        start_lib = new_book;
    }
    else
    {
        ptr = start_lib;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_book;
    }
    return start_lib;
}

void display(struct student *start)
{
    struct student *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("\n************* Details of Students: **************\n");
        printf("\n_________________________________________________\n");
        printf("\n Student Name: %s", ptr->name);
        printf("\n Name of Book Issued: %s", ptr->book);
        printf("\n Book ID: %d", ptr->id);
        printf("\n_________________________________________________\n");
        printf("\n\n*************************************************\n");
        ptr = ptr->next;
    }
}

void main_menu()
{
    int choice;
    do
    {
        printf("\n*************************************************\n");
        printf("\n");
        printf("\n     1.ISSUE OF BOOKS ");
        printf("\n     2.RETURN OF BOOKS ");
        printf("\n     3.DISPLAY STUDENT DETAILS ");
        printf("\n     4.DONATE BOOK/s TO THE LIBRARY");
        printf("\n     5.EXIT\n");
        printf("\n");
        printf("\n*************************************************\n");
        printf("\n      Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            start = book_issue(start);
            break;
        }
        case 2:
        {
            start = book_return(start);
            break;
        }
        case 3:
        {
            display(start);
            break;
        }
        case 4:
        {
            char bookname[50];
            char authorname[50];
            int id;
            printf("Enter Book name:- ");
            scanf("%s", &bookname[50]);
            printf("\n");
            printf("Enter Author name:- ");
            scanf("%s", &authorname[50]);
            printf("\n");
            printf("Enter book id:- ");
            scanf("%d", &id);
            add_book(bookname, authorname, id);
            break;
        }
        case 5:
        {
            exit(1);
        }
        }
    } while (choice != 5);
}

int main()
{
    start_lib = init(start_lib);
    printf("\n*************************************************\n");
    printf("\n");
    printf("            Welcome to COEP Library!\n");
    printf("\n");
    printf("\n*************************************************\n");
    main_menu();
    return 0;
}