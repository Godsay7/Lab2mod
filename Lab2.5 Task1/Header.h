#pragma once
// список в зв’язному уявленні
// односпрямований список зі значеннями дійсного типу
struct list
{
	float data;
	list* next;
};
// відкрита підпрограма, що перевіряє значення на те, що вони більше 10
inline bool MTen(list* elem)
{
	bool res = 0;
	if (elem->data > 10)
		res = 1;
	return res;
}