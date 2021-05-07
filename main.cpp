#include <iostream>
#include </home/george/Documents/Course_work/rbtree.h>

using namespace std;

int main()
{
    cout << "Test #1:\n";
    RBTree<int> tree;
    tree.print();

    cout << "\n\nTest #2:\n";
    tree.add(10);
    tree.add(3);
    tree.add(12);
    tree.add(56);
    tree.add(5);
    tree.add(-20);
    tree.add(5);
    tree.add(110);
    tree.add(-20);
    tree.add(25);
    tree.add(39);
    tree.add(5);
    tree.add(-32);
    tree.add(-20);
    tree.add(-2);
    tree.print();

    cout << "\n\nTest #3:\n";
    tree.remove(-2);
    tree.remove(-2);
    tree.remove(10);
    tree.remove(5);
    tree.remove(-2);
    tree.print();

    cout << "\n\nTest #4:\n";
    tree.delete_tree();
    tree.remove(5);
    tree.remove(-10);
    tree.remove(39);
    tree.print();

    cout << "\n\nTest #5:\n";
    tree.add(-17);
    tree.add(55);
    tree.add(83);
    tree.add(-23);
    tree.add(0);
    tree.add(11);
    tree.add(24);
    tree.print();

    cout << "\n\nTest #6:\n";
    for(Iterator<int> it = tree.begin(); it != tree.end(); it++)
        cout << *it << endl;

    cout << "\n\nTest #7:\n";
    int arr[] = {4, 8, -2, -15, 26, 12, -16, 0, 21};
    RBTree<int> tree2(arr, 9);
    tree2.print();

    return 0;
}