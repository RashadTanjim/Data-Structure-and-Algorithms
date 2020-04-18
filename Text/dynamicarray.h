#ifndef DYNAMICARRAY_H_INCLUDED
#define DYNAMICARRAY_H_INCLUDED
class DynamicArray{
    private:
        int* data;
    public:
        DynamicArray(int);
        ~DynamicArray();
        void insertItem(int, int);
        int getItem(int);


};


#endif // DYNAMICARRAY_H_INCLUDED
