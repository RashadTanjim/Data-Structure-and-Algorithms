#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H

template<class T>
class unsortedtype
{
    struct Node
    {
        T data;
        Node *next;
    };
public:
    unsortedtype();
    ~unsortedtype();

    void addinfornt(T);
    void addinback(T);
    void addinanyplace(int, T);

    void deleteinfornt();
    void deleteinback();
    void deleteinanyplace(int, T);

    bool isFull();
    int getLength();
    void printList();
    void getNextItem(T&);
    void SearchFor(T);
    void ResetList();
    void makeEmpty();

private:
    int length;
    Node *head;
    Node *currentPos;
};

#endif // UNSORTEDTYPE_H
