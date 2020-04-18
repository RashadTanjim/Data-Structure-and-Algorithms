#ifndef MAXMIN_H
#define MAXMIN_H

template<class ItemType>
class MaxMin
{
    public:
        MaxMin();
        void initializeMaxMin(ItemType*, int);
        ItemType getMax();
        ItemType getMin();

    private:
        ItemType maxElement;
        ItemType minElement;
};

#endif // MAXMIN_H
