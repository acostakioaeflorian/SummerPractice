#include <stdio.h>
#include <stdlib.h>

typedef struct numbers
{
    int a,b,c,d;
    struct numbers *next;
}   numbers;

void input(numbers **head,int a,int b,int c,int d)
{
    numbers *tmp = *head;
    numbers *new = (numbers *) malloc (sizeof(numbers));

    new -> a = a;
    new -> b = b;
    new -> c = c;
    new -> d = d;

    new -> next = NULL;
    if (tmp == NULL)
        {
            *head = new;
        }
    else 
        {
            while (tmp -> next != NULL)
                tmp = tmp -> next;
            tmp -> next = new; 
        }
    
}

void output(numbers *head)
{
    int i=0;
    if (head == NULL)
        printf ("\n______NO DATA______\n");
    while (head)
        {
            printf ("\nData [%d]\n",i+1);
            printf("A = %d\n",head -> a);
            printf("B = %d\n",head -> b);
            printf("C = %d\n",head -> c);
            printf("D = %d\n",head -> d);
            printf("Sum of 2 last elements = %d\n",head -> c + head -> d);
            head = head -> next;
            i++;
        }
    printf("\n");
}

int even_num(numbers *head)
{
    int count = 0;
    while (head)
        {
            if (head -> a % 2 == 0)
            count++;
            if (head -> b % 2 == 0)
            count++;
            if (head -> c % 2 == 0)
            count++;
            if (head -> d % 2 == 0)
            count++;
            head = head -> next;
        }
    return count;
}

void deleting(numbers **head)
{
    numbers *tmp = *head;
    numbers *prev = (*head) -> next;
    free(tmp);
    *head = prev;
}

void freeinformation(numbers **head)
{
    numbers *tmp = *head;
    while (*head != NULL)
        {
            *head = (*head) -> next;
            free (tmp);
            tmp = *head;
        }
    *head = NULL;
}

int main ()
{
    int a,b,c,d;
    numbers *head = NULL;

        printf ("\nInput four numbers:\n");
        printf ("A = ");  scanf ("%d",&a);
        printf ("B = ");  scanf ("%d",&b);
        printf ("C = ");  scanf ("%d",&c);
        printf ("D = ");  scanf ("%d",&d);

        input(&head,a,b,c,d);

    printf ("\n______________________Even numbers: %d______________________\n",even_num(head));
    output(head);
    deleting(&head);
    printf ("\n______________________First dataa was deleted______________________\n");
    output(head);

    printf ("\n______________________Deleting all data______________________\n");
    freeinformation(&head);
    printf ("\nAdress of list: %p\n",head);

    printf ("\n");
    system ("pause");
    return 0;
}