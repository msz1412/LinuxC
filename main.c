#include <stdlib.h>
#include "chapter3function/list.h"

int main() {
    int i;
    for (int i = 0; i < 5; ++i) {
        if (insert(i) == -1) {
            // 如果插入失败
            exit(1);
        }
    }
    // 打印所有的链表节点
    print();
    // 释放链表
    destroy();
    return 0;
}