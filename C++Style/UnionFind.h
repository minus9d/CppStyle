#pragma once
#include <string>
#include <vector>

class UnionFind
{
public:
    UnionFind();
    ~UnionFind();

    void Init(int num_entries);
    int Find(int x);
    void Unite(int x, int y);
    bool Same(int x, int y);

private:
    int num_entries_;
    std::vector<int> par_;
    std::vector<int> rank_;
};
