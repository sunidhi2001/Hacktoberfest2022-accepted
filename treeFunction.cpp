#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL, *temp;

// Functions :
void create();
void search2(struct node);
void pre_order(struct node);
void in_order(struct node);
void post_order(struct node);


int main()
{

    int choice;
    while (true)
    {
        cout << "\n.........MENU........." << endl;
        cout << "1. Create - Create a node" << endl;
        cout << "2. Pre Order - Traversal" << endl;
        cout << "3. In Order - Traversal" << endl;
        cout << "4. Post Order - Traversal" << endl;
        cout << "5. Exit - Exit from the program. \n"
             << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            pre_order(*root);
            break;
        case 3:
            in_order(*root);
            break;
        case 4:
            post_order(*root);
            break;
        case 5:
            cout << "Exit Successfully...";
            exit(1);
            break;
        default:
            cout << "Please enter valid option." << endl;
        }
    }
    return 0;
}

void create()
{
    int item;
    temp = (struct node *)malloc(sizeof(struct node*));

    cout << "Enter the value to be added : ";
    cin >> item;

    temp->data = item;
    temp->left = NULL;
    temp->right = NULL;

    if (root == NULL)
    {
        root == temp;
    }
    else
    {
        search2(root);
    }
}

void search2(struct node *t_root)
{
    if ((temp->data > t_root->data) && (t_root->right != NULL))
    {
        search2(t_root->right);
    }
    else if ((temp->data > t_root->data) && (t_root->right == NULL))
    {
        t_root->right = temp;
    }

    if ((temp->data < t_root->data) && (t_root->left != NULL))
    {
        search2(t_root->left);
    }
    else if ((temp->data < t_root->data) && (t_root->left == NULL))
    {
        t_root->left = temp;
    }
}

void pre_order(struct node *t_root)
{
    if (t_root != NULL)
    {
        cout << t_root->data << endl;
        pre_order(t_root->left);
        pre_order(t_root->right);
    }
}

void in_order(struct node *t_root)
{
    if (t_root != NULL)
    {
        in_order(t_root->left);
        cout << t_root->data << endl;
        in_order(t_root->right);
    }
}

void post_order(struct node *t_root)
{
    if (t_root != NULL)
    {
        post_order(t_root->left);
        post_order(t_root->right);
        cout << t_root->data << endl;
    }
}
