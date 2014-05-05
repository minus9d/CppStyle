#include "UnionFind.h"


UnionFind::UnionFind()
{
}


UnionFind::~UnionFind()
{
}


void UnionFind::Init(int num_entries)
{
    num_entries_ = num_entries;
    par_.resize(num_entries_);
    rank_.resize(num_entries_, 0);
    for (int i = 0; i < num_entries_; ++i)
    {
        par_[i] = i;
    }
}

int UnionFind::Find(int x)
{
    if (par_[x] == x)
    {
        return x;
    }
    else
    {
        return par_[x] = Find(par_[x]);
    }
}


void UnionFind::Unite(int x, int y)
{
    x = Find(x);
    y = Find(y);
    if (x == y) return;

    if (rank_[x] < rank_[y])
    {
        par_[x] = y;
    }
    else
    {
        par_[y] = x;
        if (rank_[x] == rank_[y])
        {
            rank_[x]++;
        }
    }
}


bool UnionFind::Same(int x, int y)
{
    return Find(x) == Find(y);
}
