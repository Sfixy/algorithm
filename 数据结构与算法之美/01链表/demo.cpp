#include<stdio.h>

struct Point
{
	int data;
	struct Point* next;
} point;

int main()
{
	struct Point* head = NULL, *q = head;
	struct Point a;
	a.data = 0;
	a.next = NULL;

	q->next = &a;

	int n = 10;
	while (n--)
	{
		struct Point p;
		p.data = n;
		p.next = NULL;
		q->next = &p;
		q = &p;
	}

	printf("%d\n",head->data);
	printf("hello");
	return 0;
}