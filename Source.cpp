//�������� �1
//������� ��������� ���� �������� ����� ��� ������
//� ������ ����������.������� �������� ��������� ���
//������� �������� ��� ���������� :
//? IsEmpty � �������� ����� �� ���������;
//? IsFull � �������� ����� �� ����������;
//? Enqueue � ��������� �������� � �����;
//? Dequeue � ��������� �������� � �����;
//? Show � ����������� ��� �������� ����� �� �����.
// 
// 
//�������� �2
//������� ���� ����� � ����������� ��� ������ � ������
//����������.������� �������� ��������� ��� �������
//�������� ��� ���������� ����� :
//? IsEmpty � �������� ����� �� ���������;
//? IsFull � �������� ����� �� ����������;
//? InsertWithPriority � ��������� �������� � ���������� � �����;
//? PullHighestPriorityElement � ��������� �������� �
//�������� ���������� � �����;
//? Peek � ���������� ���������� �� ���������� ��������.�������� ���� �����, �� ������� �� ����������� � �����;
//�������� �������� �14
//1
//? Show � ��������� ��� �������� ����� �� �����.
//��� ����� �������� ����� ��������� ����������
//��������.
//�������� �3
//����� ���� �� �������� 2 �� ��������� ����.


#include <iostream>
using namespace std;
#include "Queue.h"
#include "Queue2.h"


int main()
{
	//������� 1
	SimpleQueue<int> queue(5); //������� ������� �� 5 ���������
	cout << "Is empty: " << queue.isEmpty() << endl; // ��������� ������ ��
	queue.enQueue(5);  //��������� � �������
	queue.enQueue(10);
	queue.enQueue(15);
	queue.enQueue(20);
	queue.enQueue(25);
	cout << "Is full: " << queue.isFull() << endl; // ��������� ����� ��
	queue.show(); // ������ �������
	int num = queue.deQueue(); // ������� �� �������
	queue.show(); // ��������
	num = queue.deQueue(); // ������� �� �������
	queue.show(); // ��������

	//������� 2
	cout << "========================================" << endl;
	PrExQueue <int> queue2(5);// ������� � ����������� �� �����
	cout << "Is empty: " << queue2.isEmpty() << endl; //�������� ������ ��
	queue2.insertWithPriority(10, 1);// ���������
	queue2.insertWithPriority(15, 5);
	queue2.insertWithPriority(20, 3);
	queue2.insertWithPriority(25, 4);
	queue2.insertWithPriority(30, 2);
	cout << "Is full: " << queue2.isFull() << endl; //�������� ����� ��
	queue2.show();// ������ ���� �������
	num = queue2.pullHighestPriorityElement(); // ������� ������� �� ���������� (15)
	queue2.show();// ������ ���� �������
	num = queue2.pullHighestPriorityElement();// ������� ������� �� ���������� (25)
	queue2.show();// ������ ���� �������
	cout << "Next priority el: " << queue2.peek() << endl;// ������� ��������� �� ����� ������� ��� ������ �� �������
	queue2.show();// ������ ���� �������

	return 0;
}