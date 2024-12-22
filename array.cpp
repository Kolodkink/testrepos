#include <iostream>
#include "array.h"

int max(int left,int right)
{
    return left > right ? left : right;
}

int min(int left,int right)
{
    return left < right ? left : right;
}

int min_index(int* massive,int size)
{
    int min = massive[0];
    int index = 0;
    for(int i = 1; i < size; i++)
    {
        if(massive[i] < min)
        {
            min = massive[i];
            index = i;
        }
    }
    return index;
}

int max_index(int* massive,int size)
{
    int max = massive[0];
    int index = 0;
    for(int i = 1; i < size; i++)
    {
        if(massive[i] > max)
        {
            max = massive[i];
            index = i;
        }
    }
    return index;
}
