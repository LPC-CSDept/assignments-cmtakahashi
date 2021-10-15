#include <iostream>

struct Node{
int num;
struct Node* next;
};

void printFormatting();
void printNodes(Node *, Node *);

int main()
{
    Node *new_node, *head, *ptr, *prev;

    head = nullptr;

    int numNodes = 5;
    std::cout << "We need " << numNodes << " numbers." << std::endl;

    for(int i=0; i<numNodes;i++)
    {
        new_node = new Node;
        std::cout << "Please enter number " << i+1 << ": " ;
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
    printFormatting();
    printNodes(ptr, head);

}

void printFormatting()
{
    std::cout << std::endl;
    std::cout << "-----------------------" << std::endl;
}

void printNodes(Node *ptr, Node *head){
    ptr = head;
    int i = 1;
    std::cout << "Here are your values: " << std::endl;
    while(ptr != nullptr)
    {
        std::cout << "Node " << i++ << ": " << ptr->num << std::endl;     
        ptr = ptr->next;
    }   


}