#include "linkedlist.h"

int main()
{
        LinkedList<string> head;
        head.insertLast("One");
        head.insertLast("Two");
        head.insertAfter(head.getHead()->next, "Three");
        head.insertAfter(head.getHead()->next->next, "Four");
        head.insertFirst("Zero");

        head.deleteFirst();
        head.deleteAfter(head.getHead()->next->next->next->next);
        head.deleteLast();

        head.printList();

        return 0;
}
