#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point to test binary_tree_is_perfect with complex cases.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root, *temp;
    int perfect;
    int level;

    /* Test Case 1: Empty Tree */
    root = NULL;
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect (Empty tree): %d\n\n", perfect);

    /* Test Case 2: Single Node */
    root = binary_tree_node(NULL, 1);
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect (Single node): %d\n\n", perfect);

    /* Test Case 3: Perfect Tree of Height 3 */
    root->left = binary_tree_node(root, 2);
    root->right = binary_tree_node(root, 3);
    root->left->left = binary_tree_node(root->left, 4);
    root->left->right = binary_tree_node(root->left, 5);
    root->right->left = binary_tree_node(root->right, 6);
    root->right->right = binary_tree_node(root->right, 7);
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect (Height 3 perfect tree): %d\n\n", perfect);

    /* Test Case 4: Imbalanced Tree - Missing Node */
    free(root->right->right);
    root->right->right = NULL;
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect (Height 3 missing node): %d\n\n", perfect);

    /* Test Case 5: Perfect Tree of Height 4 */
    root->right->right = binary_tree_node(root->right, 7);
    root->left->left->left = binary_tree_node(root->left->left, 8);
    root->left->left->right = binary_tree_node(root->left->left, 9);
    root->left->right->left = binary_tree_node(root->left->right, 10);
    root->left->right->right = binary_tree_node(root->left->right, 11);
    root->right->left->left = binary_tree_node(root->right->left, 12);
    root->right->left->right = binary_tree_node(root->right->left, 13);
    root->right->right->left = binary_tree_node(root->right->right, 14);
    root->right->right->right = binary_tree_node(root->right->right, 15);
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect (Height 4 perfect tree): %d\n\n", perfect);

    /* Test Case 6: Large Perfect Tree of Height 5 */
    temp = root;
    for (level = 0; level < 2; ++level) /* Declare level outside loop */
    {
        temp = temp->left;
        temp->left = binary_tree_node(temp, level * 10 + 1);
        temp->right = binary_tree_node(temp, level * 10 + 2);
    }
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect (Height 5 perfect tree): %d\n\n", perfect);

    /* Test Case 7: Perfect Tree of Height 6 */
    temp = root->right->right->right;
    for (level = 0; level < 2; ++level) /* Reuse level variable */
    {
        temp->left = binary_tree_node(temp, level * 20 + 1);
        temp->right = binary_tree_node(temp, level * 20 + 2);
        temp = temp->left;
    }
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect (Height 6 perfect tree): %d\n\n", perfect);

    /* Test Case 8: Perfect Tree of Height 8 */
    temp = root->left->left;
    for (level = 0; level < 4; ++level) /* Reuse level variable */
    {
        temp->left = binary_tree_node(temp, level * 30 + 1);
        temp->right = binary_tree_node(temp, level * 30 + 2);
        temp = temp->right;
    }
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect (Height 8 perfect tree): %d\n\n", perfect);

    return (0);
}
