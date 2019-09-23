#pragma once

struct node
{
	int data;
	node* next;
};

class LLL
{
private:
	node* head;
	node* tail;

public:
	LLL();
	~LLL();
	void insert_head(int);
	void display();
};

