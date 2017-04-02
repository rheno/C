#include "bst.h"

int main(){

        struct BSTree* root = NULL;

        root = insertRec(root, 4);
        root = insertRec(root, 2);
        root = insertRec(root, 5);
        root = insertRec(root, 7);
        root = insertRec(root, 6);
        root = insertRec(root, 1);

        /* Delete Root */
        root = delete(root, 4);

        reverse(root);
        printPreorder(root);


        if(isBST(root, INT_MIN, INT_MAX)){
                printf("Binary Search Tree\n");
        }else{

                printf("Not Binary Search Tree\n");
        }


        return 0;
}
