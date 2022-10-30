#include <iostream>
using namespace std;

struct node
{
  int data;
  struct node *next;
};

struct node *head = NULL;

void insert_at_beg(int);
void create_list(int);
void traverse();

int main()
{

  create_list(10);
  create_list(20);
  create_list(30);

  cout << "list before insert function :" << endl;
  traverse();
  cout << "\n\n";

  // inserting two nodes in the list
  insert_at_beg(1);
  insert_at_beg(2);

  cout << "list after insert function :" << endl;
  traverse();
  cout << endl;

  return 0;
}

void create_list(int x)
{
  struct node *new_node, *temp;
  temp = head;

  new_node = (struct node *)malloc(sizeof(struct node));

  new_node->data = x;
  new_node->next = NULL;

  if (head == NULL)
  {
    head = new_node;
    head->next = NULL;
  }
  else
  {
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = new_node;
  }
}

void insert_at_beg(int x)
{
  struct node *new_node;

  new_node = (struct node *)malloc(sizeof(struct node));

  new_node->data = x;
  new_node->next = NULL;

  if (head == NULL)
  {
    head = new_node;
    return;
  }
  else
  {
    new_node->next = head;
    head = new_node;
  }
}

void traverse()
{
  struct node *temp;

  temp = head;

  if (temp == NULL)
  {
    cout << "Linked list is empty" << endl;
    return;
  }

  // while(temp != NULL)
  while (temp->next != NULL)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  // Print last node
  cout << temp->data << "-> NULL";
}
