#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i = 1;

struct Node
{
    int data;
    char brand[20];
    char name[20];
    char color[20];
    char type[20];
    float rent;
    int id;
    int year;
    int status;
    struct Node *next;
};

void search_car(struct Node **t_ptr)
{
    int ch;
star:
    printf("\nSearch car on the basis of: ");
    printf("\n1. BRAND\n2. COLOR\n3. RENT \n4. YEAR \n5. Type \n6. Exit\n");
    struct Node *ptr = *t_ptr;
    printf("Enter choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
    {
        char br[20];
        int f = 0;
        printf("Enter the brand: ");
        scanf("%s", br);
        while (ptr != NULL)
        {
            if (strcmp(br, ptr->brand) == 0)
            {
                printf("\n___________________________________________\n");
                printf("CAR BRAND          : %s\n", ptr->brand);
                printf("MODEL NAME         : %s\n", ptr->name);
                printf("CAR TYPE           : %s\n", ptr->type);
                printf("CAR COLOR          : %s\n", ptr->color);
                printf("CAR ID             : %d\n", ptr->id);
                printf("RENT(In Rs)        : %.2f\n", ptr->rent);
                printf("MANUFACTURING YEAR : %d\n", ptr->year);
                printf("\n___________________________________________\n");
                f = 1;
            }
            ptr = ptr->next;
        }
        if (f == 0)
        {
            printf("We couldn't find the car you're looking for!!!");
        }
        goto star;
    }
    case 2:
    {
        char cl[20];
        int f = 0;
        printf("Enter the color: ");
        scanf("%s", cl);
        while (ptr != NULL)
        {
            if (strcmp(cl, ptr->color) == 0)
            {
                printf("\n___________________________________________\n");
                printf("CAR BRAND          : %s\n", ptr->brand);
                printf("MODEL NAME         : %s\n", ptr->name);
                printf("CAR TYPE           : %s\n", ptr->type);
                printf("CAR COLOR          : %s\n", ptr->color);
                printf("CAR ID             : %d\n", ptr->id);
                printf("RENT(In Rs)        : %.2f\n", ptr->rent);
                printf("MANUFACTURING YEAR : %d\n", ptr->year);
                printf("\n___________________________________________\n");
                f = 1;
            }
            ptr = ptr->next;
        }
        if (f == 0)
        {
            printf("We couldn't find the car of %s color!!!", cl);
        }
        goto star;
    }
    case 3:
    {
        float r1, r2;
        int f = 0;
        printf("Enter the starting range: ");
        scanf("%f", &r1);
        printf("Enter the ending range: ");
        scanf("%f", &r2);
        while (ptr != NULL)
        {
            if (ptr->rent <= r2 && ptr->rent >= r1)
            {
                printf("\n___________________________________________\n");
                printf("CAR BRAND          : %s\n", ptr->brand);
                printf("MODEL NAME         : %s\n", ptr->name);
                printf("CAR TYPE           : %s\n", ptr->type);
                printf("CAR COLOR          : %s\n", ptr->color);
                printf("CAR ID             : %d\n", ptr->id);
                printf("RENT(In Rs)        : %.2f\n", ptr->rent);
                printf("MANUFACTURING YEAR : %d\n", ptr->year);
                printf("\n___________________________________________\n");
                f = 1;
            }
            ptr = ptr->next;
        }
        if (f == 0)
        {
            printf("We couldn't find the car in %.2f - %.2f range!!!", r1, r2);
        }
        goto star;
    }
    case 4:
    {
        int y1, y2;
        int f = 0;
        printf("Enter the starting year range: ");
        scanf("%d", &y1);
        printf("Enter the ending year range: ");
        scanf("%d", &y2);
        while (ptr != NULL)
        {
            if (ptr->year <= y2 && ptr->year >= y1)
            {
                printf("\n___________________________________________\n");
                printf("CAR BRAND          : %s\n", ptr->brand);
                printf("MODEL NAME         : %s\n", ptr->name);
                printf("CAR TYPE           : %s\n", ptr->type);
                printf("CAR COLOR          : %s\n", ptr->color);
                printf("CAR ID             : %d\n", ptr->id);
                printf("RENT(In Rs)        : %.2f\n", ptr->rent);
                printf("MANUFACTURING YEAR : %d\n", ptr->year);
                printf("\n___________________________________________\n");
                f = 1;
            }
            ptr = ptr->next;
        }
        if (f == 0)
        {
            printf("We couldn't find the car in %d - %d year range!!!", y1, y2);
        }
        goto star;
    }
    case 5:
    {
        char car_type[20];
        int f = 0;
        printf("Enter type of car you are looking for:  ");
        scanf("%s", car_type);
        while (ptr != NULL)
        {
            if (strcmp(car_type, ptr->type) == 0)
            {
                printf("\n___________________________________________\n");
                printf("CAR BRAND          : %s\n", ptr->brand);
                printf("MODEL NAME         : %s\n", ptr->name);
                printf("CAR TYPE           : %s\n", ptr->type);
                printf("CAR COLOR          : %s\n", ptr->color);
                printf("CAR ID             : %d\n", ptr->id);
                printf("RENT(In Rs)        : %.2f\n", ptr->rent);
                printf("MANUFACTURING YEAR : %d\n", ptr->year);
                printf("\n___________________________________________\n");
                f = 1;
            }
            ptr = ptr->next;
        }
        if (f == 0)
        {
            printf("We couldn't find the car of %s type!!!", car_type);
        }
        goto star;
    }
    case 6:
    {
        system("cls");
        break;
    }
    }
}

void add(struct Node **head_ref)
{
    char t_brand[20], t_name[20], t_color[20], t_type[20];
    int t_year = 2022;
    float t_rent = 20.0;
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    printf("Insert brand of vehicle: ");
    scanf("%s", t_brand);
    printf("Enter name of car: ");
    scanf("%s", t_name);
    printf("Enter type of car: ");
    scanf("%s", t_type);
    printf("Enter color of your car: ");
    scanf("%s", t_color);
    printf("Enter manufacturing year of your car: ");
    scanf("%d", &t_year);
    printf("Enter rent for your car: ");
    scanf("%f", &t_rent);
    new_node->next = NULL;
    if (t_year >= 2000)
    {
        printf("\tYour car has been accepted for rental service.");
        new_node->next = NULL;
        new_node->year = t_year;
        new_node->id = i;
        i++;
        new_node->rent = t_rent;
        strcpy(new_node->brand, t_brand);
        strcpy(new_node->name, t_name);
        strcpy(new_node->type, t_type);
        strcpy(new_node->color, t_color);
        new_node->status = 1;
        if (*head_ref == NULL)
        {
            *head_ref = new_node;
            return;
        }
        while (last->next != NULL)
            last = last->next;
        last->next = new_node;
        return;
    }
    else
    {
        printf("We cannot accept your car for rental service !!!");
    }
}

void rental(struct Node **head_r)
{
    int id_rent = 0, f = 0, day = 0;
    float rent = 0.0;
    char dec[4];
    char fname[20], mname[20], lname[20];
    struct Node *ptr = *head_r;
    printf("Enter the id of car: ");
    scanf("%d", &id_rent);
    while (ptr != NULL)
    {
        if (ptr->id == id_rent && ptr->status == 1)
        {
            printf("CAR BRAND : %s\n", ptr->brand);
            printf("MODEL NAME : %s\n", ptr->name);
            printf("CAR COLOR : %s\n", ptr->color);
            printf("RENT(In Rs) : %.2f\n", ptr->rent);
            printf("MANUFACTURING YEAR : %d\n", ptr->year);
            f = 1;
            printf("You want to rent this car?\nEnter your decision here(yes/no): ");
            scanf("%s", dec);
            if (strcmp(dec, "yes") == 0)
            {
                printf("Enter your first name: ");
                scanf("%s", fname);
                printf("Enter your middle name: ");
                scanf("%s", mname);
                printf("Enter your last name: ");
                scanf("%s", lname);
                printf("Enter no. of days to book car: ");
                scanf("%d", &day);
                rent = (day) * (ptr->rent);
                printf("------------------RECEIPT--------------------\n\n");
                printf("NAME               : %s %s %s \n", fname, mname, lname);
                printf("No. of days        : %d\n", day);
                printf("AMOUNT             : %d x %.2f\n", day, ptr->rent);
                printf("                   : %.2f\n", rent);
                printf("CAR                : %s %s \n", ptr->brand, ptr->name);
                printf("CAR TYPE           : %s \n", ptr->type);
                printf("Car booked!!!\n");
                printf("\n____________________________________________\n");
                ptr->status = 0;
                break;
            }
            else
            {
                printf("Enter valid ID!!");
            }
        }
        ptr = ptr->next;
    }
}

void r_car(struct Node **head_rc)
{
r_start:
    printf("Enter the id of car: ");
    struct Node *ptr = *head_rc;
    int t_idr = 0, flag = 0;
    scanf("%d", &t_idr);
    while (ptr != NULL)
    {
        if (ptr->id == t_idr && ptr->status == 0)
        {
            printf("Details of car is as follows: \n\n");
            printf("\n___________________________________________\n");
            printf("CAR BRAND          : %s\n", ptr->brand);
            printf("MODEL NAME         : %s\n", ptr->name);
            printf("CAR TYPE           : %s\n", ptr->type);
            printf("CAR COLOR          : %s\n", ptr->color);
            printf("CAR ID             : %d\n", ptr->id);
            printf("RENT(In Rs)        : %.2f\n", ptr->rent);
            printf("MANUFACTURING YEAR : %d\n", ptr->year);
            printf("\n___________________________________________\n");
            ptr->status = 1;
            flag = 1;
            break;
        }
        ptr = ptr->next;
    }
    if (flag == 0)
    {
        printf("You have entered wrong id!!\n");
    }
}

void printList(struct Node *ptr)
{
    int flag = 0;
    if (ptr == NULL)
    {
        printf("No car is availble");
        return;
    }
    while (ptr != NULL)
    {
        if (ptr->status == 1)
        {
            printf("\n___________________________________________\n");
            printf("CAR BRAND          : %s\n", ptr->brand);
            printf("MODEL NAME         : %s\n", ptr->name);
            printf("CAR TYPE           : %s\n", ptr->type);
            printf("CAR COLOR          : %s\n", ptr->color);
            printf("CAR ID             : %d\n", ptr->id);
            printf("RENT(In Rs)        : %.2f\n", ptr->rent);
            printf("MANUFACTURING YEAR : %d\n", ptr->year);
            printf("\n___________________________________________\n");
            flag = 1;
        }
        ptr = ptr->next;
    }
    if (flag == 0)
    {
        printf("No car is availble");
        return;
    }
}

int main()
{
    struct Node *head = NULL;
    int choice;
    printf("\t\t\t\t\t\tCAR RENTAL MANAGEMENT SYSTEM\n\n\n");
    printf("\t\t\t\t\t\tGroup members: \n");
    printf("\t\t\t\t\t\t             1.21BCE311\n");
    printf("\t\t\t\t\t\t             2.21BCE312\n");
    printf("\t\t\t\t\t\t             3.21BCE313\n");
    while (1)
    {
        printf("\n\n1. You want to add your car to rental service: \n2. Search a car: \n3. Rent a car \n4. See all available cars: \n5. Return a car \n6. exit:\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            system("cls");
            system("COLOR 9");
            printf("Enter details of your car: \n");
            add(&head);
            break;
        }
        case 2:
        {
            system("cls");
            system("COLOR 5");
            search_car(&head);
            break;
        }
        case 3:
        {
            system("cls");
            system("COLOR A");
            char ans[4];
            printf("Do you know the id of car?\n");
            scanf("%s", ans);
            if (strcmp(ans, "yes") == 0)
            {
                rental(&head);
                break;
            }
            else if (strcmp(ans, "no") == 0)
            {
                printf("Get id of the car by searching!!!");
                break;
            }
        }
        case 4:
        {
            system("cls");
            system("COLOR 3");
            printList(head);
            break;
        }
        case 5:
        {
            system("cls");
            r_car(&head);
            break;
        }
        case 6:
        {
            system("cls");
            system("COLOR F0");
            printf("\n\n\n\n\n\n\t\t\t\t\t  __________________________________\n");
            printf("\t\t\t\t\t | Thank you for using our service. |\n");
            printf("\t\t\t\t\t |        Have a good day!          |\n");
            printf("\t\t\t\t\t  ----------------------------------\n\n\n");
            return 0;
        }
        default:
        {
            printf("Enter valid option!!!");
            break;
        }
        }
    }
}