//Завдання №1
//Створіть шаблонний клас звичайної черги для роботи
//з цілими значеннями.Потрібно створити реалізації для
//типових операцій над елементами :
//? IsEmpty — перевірка черги на порожнечу;
//? IsFull — перевірка черги на заповнення;
//? Enqueue — додавання елемента в чергу;
//? Dequeue — видалення елемента з черги;
//? Show — відображення всіх елементів черги на екран.
// 
// 
//Завдання №2
//Створіть клас черги з пріоритетами для роботи з цілими
//значеннями.Потрібно створити реалізації для типових
//операцій над елементами черги :
//? IsEmpty — перевірка черги на порожнечу;
//? IsFull — перевірка черги на заповнення;
//? InsertWithPriority — додавання елемента з пріоритетом в чергу;
//? PullHighestPriorityElement — видалення елемента з
//найвищим пріоритетом з черги;
//? Peek — повернення найбільшого за пріоритетом елемента.Звертаємо вашу увагу, що елемент не видаляється з черги;
//Практичні завдання №14
//1
//? Show — виведення всіх елементів черги на екран.
//При показі елемента також необхідно відображати
//пріоритет.
//Завдання №3
//Змініть клас із завдання 2 на шаблонний клас.


#include <iostream>
using namespace std;
#include "Queue.h"
#include "Queue2.h"


int main()
{
	//ЗАДАНИЕ 1
	SimpleQueue<int> queue(5); //создаем очередь на 5 элементов
	cout << "Is empty: " << queue.isEmpty() << endl; // проверяем пустой ли
	queue.enQueue(5);  //добавляем в очередь
	queue.enQueue(10);
	queue.enQueue(15);
	queue.enQueue(20);
	queue.enQueue(25);
	cout << "Is full: " << queue.isFull() << endl; // проверяем полон ли
	queue.show(); // печать очереди
	int num = queue.deQueue(); // достаем из очереди
	queue.show(); // печатаем
	num = queue.deQueue(); // достаем из очереди
	queue.show(); // печатаем

	//ЗАДАНИЕ 2
	cout << "========================================" << endl;
	PrExQueue <int> queue2(5);// очередь с приоритетом на выход
	cout << "Is empty: " << queue2.isEmpty() << endl; //проверка пустой ли
	queue2.insertWithPriority(10, 1);// заполняем
	queue2.insertWithPriority(15, 5);
	queue2.insertWithPriority(20, 3);
	queue2.insertWithPriority(25, 4);
	queue2.insertWithPriority(30, 2);
	cout << "Is full: " << queue2.isFull() << endl; //проверка полон ли
	queue2.show();// печать всей очереди
	num = queue2.pullHighestPriorityElement(); // достаем элемент по приоритету (15)
	queue2.show();// печать всей очереди
	num = queue2.pullHighestPriorityElement();// достаем элемент по приоритету (25)
	queue2.show();// печать всей очереди
	cout << "Next priority el: " << queue2.peek() << endl;// выводим следующий на выход элемент без изятия из очереди
	queue2.show();// печать всей очереди

	return 0;
}