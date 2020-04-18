//#ifndef "LINKED_LIST_INCLUDED"
//#define "LINKED_LIST_INCLUDED"
template<class ItemType>
class LinkedList
{
    struct Node
    {
        ItemType data;
        Node *next;
    };
public:
    LinkedList();

    int getLength();
    void MakeEmpty();

    void addItemAtFirst(ItemType);
    void addItemAtLast(ItemType);
    void addItemAnywhere(int, ItemType);

    void printList();

    void deleteFirstNode();
    void deleteLastNode();
    void deleteItemAnywhere(int, ItemType);

private:
    int length;
    Node *head;
};
//#endif
