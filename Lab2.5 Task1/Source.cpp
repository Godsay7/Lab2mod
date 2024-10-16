#include <iostream>
#include "Header.h"

// процедура додавання елементів до першого списку (включення до початку списку)
void add(list*& top, float t)
{
	list* temp = new list;
	temp->data = t;
	temp->next = top;
	top = temp;
}
// формування другого списку зі значень першого, які більші 10 та включення їх в кінець
void addNew(list*& secondList, list* firstList)
{
	list* temp = firstList;
	list* last = 0;
	while (temp != 0)
	{
		if (MTen(temp)) // викликаємо відкриту підпрограму!
		{
			list* cur = new (list);
			cur->data = temp->data;
			cur->next = 0;
			if (secondList == 0)
			{
				secondList = cur;
				last = cur;
			}
			else
			{
				last->next = cur;
				last = cur;
			}
		}
		temp = temp->next; // переходимо до наступного елемента першого списку
	}
}

void main()
{
	list* NewList = 0;// створюємо перший список
	add(NewList, 34);
	add(NewList, 5);
	add(NewList, 12.6);
	add(NewList, 9);
	add(NewList, 0.4);
	add(NewList, 25.99);
	add(NewList, 19.2);
	add(NewList, 7);
	add(NewList, 123);
	list* NewList2 = 0;// створюємо другий список
	addNew(NewList2, NewList);// заповнюємо другий список значеннями з першого списка
}