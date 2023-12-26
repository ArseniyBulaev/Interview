#pragma once

#include <cstddef>
#include <vector>

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
    AVLTree(const std::vector<int> & values);
    AVLTree(const AVLTree & tree);
    ~AVLTree();
    void insert(int item);
    bool is_invariant_satisfied();
    void traverse(void (*operation)(AVLNode * node));
private:
    AVLNode * head;
    AVLNode * insert(AVLNode * node, int item);
    void traverse(void (*operation)(AVLNode * node), AVLNode * node);
    void is_invariant_satisfied(AVLNode * node, bool & is_sat);
    static size_t get_height(AVLNode * node);
    static int calc_balance_factor(AVLNode * node);
    static void fix_height(AVLNode * node);
    static AVLNode * rotate_left(AVLNode * node);
    static AVLNode * rotate_right(AVLNode * node);
    static AVLNode * balance(AVLNode * node);
    static void delete_tree(AVLNode * node);
    static AVLNode * create_from(AVLNode * node);
};