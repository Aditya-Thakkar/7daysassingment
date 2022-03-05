#include<stdio.h>
#include<string.h>


struct library
{
	int an;
	char title[50];
	char author[30];
	int price;
	int flag;
}book[50];

int count()
{
	int i = 0;
	while (book[i].an)
	{
		i++;
	}
	return i;
}

void display(int i)
{
	i--;
	printf("Accession Number : %d\n", book[i].an);
	printf("Title : %s\n", book[i].title);
	printf("Author : %s\n", book[i].author);
	printf("Price : %d\n", book[i].price);
	if (book[i].flag)
		printf("\nStatus : Issued");
	else
		printf("\nStatus : Available");
}

void giv_author(char *author)
{
	int i = 0;
	printf("\nBooks of \"%s\" are following : \n\n", author);
	while (book[i].an)
	{
		if (!(strcmp(author, book[i].author)))
			display(book[i].an);
		i++;
	}
}

void addbook()
{
	int next = count();
	book[next].an = next + 1;

	
	while (getchar() != '\n');
	printf("\nEnter the title of the book : ");
	gets(book[next].title);
	printf("\nEnter the author name of the book : ");
	gets(book[next].author);
	printf("\nEnter the price of the book : ");
	scanf("%d", &book[next].price);
	printf("\nEnter the status :");
	scanf("%d",&book[next].flag);
	book[next].flag = 1;
}

void which1(int an)
{
	int i = 0;
	while (book[i].an)
	{
		if (book[i].an == an)
		{
			printf("\n\nTitle of the book : %s\n", book[i].title);
			return;
		}
	}
	printf("No any book found found\n");
}

void allbook()
{
	int i = 0;
	while (book[i].an)
	{
		display(i + 1);
		i++;
	}
}
int main()
{
	int ans = 1, an;
	char auth[30];
	while (ans != 7)
	{
		
		printf("\nYou are in menu section\n");
		printf("\n1. Add Book Information");
		printf("\n2. Display Book Information");
		printf("\n3. List all books of given author");
		printf("\n4. List the title of specified book");
		printf("\n5. List the counts of the books in library");
		printf("\n6. List the books in order of accession number");
		printf("\n7. Exit");
		printf("\n\n\t\tEnter you choice : ");
		scanf("%d", &ans);
		switch (ans)
		{
		case 1:
			addbook();
			getch();
			break;
		case 2:
			printf("\nEnter the accession number of the book : ");
			scanf("%d", &an);
			display(an);
			getch();
			break;
		case 3:
			while (getchar() != '\n');
    		printf("Enter the name of the author (case sensitive) : ");
			gets(auth);
			giv_author(auth);
			getch();
			break;
		case 4:
			printf("\nEnter the accession number of book : ");
			scanf("%d", &an);
			which1(an);
			getch();
			break;
		case 5:
			printf("\nTotal Number of books : %d", count());
			getch();
			break;
		case 6:
			allbook();
			getch();
			break;
		case 7:
			return 0;
		default:
			printf("\nWrong choice, Try Again!!");
			getch();

		}
	}
	getch();
	return 0;
}
