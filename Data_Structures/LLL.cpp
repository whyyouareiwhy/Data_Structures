#include "LLL.h"
#include<iostream>
using std::cout;
using std::endl;

LLL::LLL()
	: head(nullptr), tail(nullptr)
{}

LLL::~LLL()
{
	tail = nullptr;
	while (head)
	{
		node* current = head;
		head = head->next;
		delete current;
	}
}

void LLL::insert_head(int n)
{
	node* temp = new node;
	temp->data = n;
	temp->next = nullptr;
	if (!head)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		temp->next = head;
		head = temp;
	}
}

void LLL::display()
{
	while (head != nullptr)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
