#include "Stack.h"

template <class item_type>
Stack<item_type>::Stack() : tail(nullptr), anz_items(0) {}

template <class item_type>
Stack<item_type>::~Stack()
{
    while (tail != nullptr)
    {
        node *temp = tail;
        tail = tail->next;
        delete temp;
    }
}

template <class item_type>
void Stack<item_type>::push(item_type &r)
{
    node *newNode = new node;
    newNode->item = r;
    newNode->next = tail;
    tail = newNode;
    anz_items++;
}

template <class item_type>
item_type Stack<item_type>::pop()
{
    if (empty())
    {
        return item_type();
    }

    item_type poppedItem = tail->item;
    tail = tail->next;
    anz_items--;
    return poppedItem;
}

template <class item_type>
item_type Stack<item_type>::top()
{
    if (empty())
    {
        return item_type();
    }

    return tail->item;
}

template <class item_type>
int Stack<item_type>::length()
{
    return anz_items;
}

template <class item_type>
bool Stack<item_type>::empty()
{
    return anz_items == 0;
}

template class Stack<int>;
template class Stack<char>;

