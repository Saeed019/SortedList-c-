#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

template<class ItemType>
class SortedType
{
struct NodeType
{

ItemType info;
NodeType*next = nullptr;
};
public:
     SortedType();
    ~ SortedType();
    bool IsFull();
    int GetLength();
    void MakeEmpty();
    ItemType GetItem(ItemType,bool&);
    bool PutItem(ItemType);
    bool DeleteItem(ItemType);
    void ResetList();
    ItemType GetNextItem();
    void print();
private:
    NodeType * listData = nullptr;
    int length = 0;
    NodeType *currentPos = nullptr;

};


#endif // UNSORTEDTYPE_H_INCLUDED



