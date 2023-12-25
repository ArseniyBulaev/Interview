#pragma once

#include <cstddef>

struct AVLNode{
    int item;
    size_t height = 0;
    AVLNode * left = nullptr;
    AVLNode * right = nullptr;
    AVLNode * parent = nullptr;
    AVLNode(int item):item(item) {
         height = 1;
    };
};


class AVLTree{
public:
    void insert(int item);
private:
    AVLNode * head;
    AVLNode * insert(AVLNode * node, int item);
    static size_t get_height(AVLNode * node);
    static int calc_balance_factor(AVLNode * node);
    static void fix_height(AVLNode * node);
    static AVLNode * rotate_left(AVLNode * node);
    static AVLNode * rotate_right(AVLNode * node);
    static AVLNode * balance(AVLNode * node);
};