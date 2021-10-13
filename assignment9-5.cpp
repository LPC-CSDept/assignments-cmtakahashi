#include <iostream>

struct Node{
int num;
struct Node* next;
};

void printNodes(Node *, Node *);

int main()
{
    Node *new_node, *head, *ptr, *prev;

    head = nullptr;

    int numNodes = 5;

    for(int i=0; i<numNodes;i++)
    {
        new_node = new Node;
        std::cout << "Enter your num : " ;
        std::cin >> new_node->num;
        new_node->next = nullptr;

        if ( head == nullptr)
        {
            head = new_node;
        }
        else
        {
            prev = nullptr;
            ptr = head ;
            while( ptr != nullptr)
            {
                if( new_node->num < ptr->num)
                        break;
                else
                {
                    prev = ptr;
                    ptr = ptr->next;
                }
            }

            if ( prev == nullptr) 
            {
                head = new_node;
                new_node->next = ptr;
            }
            else
            {
                new_node->next = prev->next;
                prev->next = new_node;
            }
        }
    }

    printNodes(ptr, head);


}


void printNodes(Node *ptr, Node *head){
    ptr = head;
    int i = 1;
    while(ptr != nullptr)
    {
        std::cout << "Node " << i++ << "'s value: " << ptr->num << std::endl;     
        ptr = ptr->next;
    }   


}