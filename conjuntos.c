#include <stdio.h>

#define SET_CAPACITY 10

typedef struct set{
    int data[SET_CAPACITY];
    int size;
}Set;

void setupSet(Set *s);
int addElement(Set *s, int value);
int existElement(Set s, int value);

int main(){
    Set set;
    int r;
    setupSet(&set);

    r= addElement(&set, 10);
    r=addElement(&set, 11);
    r=addElement(&set, 12);
    r=addElement(&set, 13);
    r=addElement(&set, 14);
    r=addElement(&set, 15);
    r=addElement(&set, 16);
    r=addElement(&set, 17);
    r=addElement(&set, 18);
    r=addElement(&set, 19);
    r=addElement(&set, 20);
    r=addElement(&set, 21);
    r=addElement(&set, 22);
    r=addElement(&set, 23);
    r=addElement(&set, 24);

    return 0;
}
int addElement(Set *s, int value)
{
    if(existElement(*s, value)== 0 && s->size < SET_CAPACITY)
    {
        s->data[s->size] = value;
        s->size++;
        return 1;
    }
    return 0;
}
int existElement(Set s, int value)
{
    int found = 0;
    for(int i = 0; i < s.size && !found; i++)
    {
        if(s.data[i] = value)
            found = 1;
    }
    return found;
}
void setupSet(Set *s)
{
    s->size = 0;
}