GCC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
PRINT = binary_tree_print.c
NODE = 0-binary_tree_node.c
LEFT = 1-binary_tree_insert_left.c
RIGHT = 2-binary_tree_insert_right.c
DELETE = 3-binary_tree_delete.c
INSERT = 111-bst_insert.c
BALANCE = 14-binary_tree_balance.c
ARRAY = 112-array_to_bst.c
ROTL = 103-binary_tree_rotate_left
ROTR = 104-binary_tree_rotate_right.c
DEPS = binary_trees.h

0-binary_tree_node: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 0-main.c -o $@

1-binary_tree_insert_left: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 1-main.c ${NODE} -o $@

2-binary_tree_insert_right: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 2-main.c ${NODE} -o $@

3-binary_tree_delete: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 3-main.c ${NODE} ${RIGHT} -o $@

4-binary_tree_is_leaf: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 4-main.c ${NODE} ${RIGHT} -o $@

5-binary_tree_is_root: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 5-main.c ${NODE} ${RIGHT} -o $@

6-binary_tree_preorder: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 6-main.c ${NODE} -o $@

7-binary_tree_inorder: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 7-main.c ${NODE} -o $@

8-binary_tree_postorder: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 8-main.c ${NODE} -o $@

9-binary_tree_height: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 9-main.c ${NODE} ${RIGHT} -o $@

10-binary_tree_depth: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 10-main.c ${NODE} ${RIGHT} -o $@

11-binary_tree_size: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 11-main.c ${NODE} ${RIGHT} -o $@

12-binary_tree_leaves: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 12-main.c ${NODE} ${RIGHT} -o $@

13-binary_tree_nodes: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 13-main.c ${NODE} ${RIGHT} -o $@

14-binary_tree_balance: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 14-main.c ${NODE} ${RIGHT} ${LEFT} -o $@

15-binary_tree_is_full: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 15-main.c ${NODE} ${RIGHT} -o $@

16-binary_tree_is_perfect: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 16-main.c ${NODE} ${RIGHT} -o $@

17-binary_tree_sibling: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 17-main.c ${NODE} -o $@

18-binary_tree_uncle: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 18-main.c ${NODE} -o $@

100-binary_trees_ancestor: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 100-main.c ${NODE} -o $@

101-binary_tree_levelorder: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 101-main.c ${NODE} ${DELETE} -o $@

102-binary_tree_is_complete: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 102-main.c ${NODE} ${DELETE} -o $@

103-binary_tree_rotate_left: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 103-main.c ${NODE} -o $@

104-binary_tree_rotate_right: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 104-main.c ${NODE} -o $@

110-binary_tree_is_bst: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 101-main.c ${NODE} -o $@

111-bst_insert: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 111-main.c ${NODE} -o $@

112-array_to_bst: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 112-main.c ${NODE} ${INSERT} -o $@

113-bst_search: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 113-main.c ${NODE} ${INSERT} -o $@

114-bst_remove: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 114-main.c ${ARRAY} ${NODE} ${INSERT} ${DELETE} ${INSERT} -o $@

120-binary_tree_is_avl: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 120-main.c ${ARRAY} ${NODE} -o $@

121-avl_insert: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 121-main.c ${BALANCE} ${ARRAY} ${ROTL} ${ROTR} ${NODE} -o $@

122-array_to_avl: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 122-main.c ${BALANCE} ${ROTL} ${ROTR} ${NODE} -o $@

123-avl_remove: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 123-main.c ${ROTL} ${ROTR} 122-array_to_avl.c 121-avl_insert.c ${BALANCE} ${DELETE} ${NODE} -o $@

124-sorted_array_to_avl: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 124-main.c ${NODE} -o $@

130-binary_tree_is_heap: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 130-main.c ${NODE} -o $@

131-heap_insert: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 131-main.c ${NODE} -o $@

132-array_to_heap: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 132-main.c 131-heap_insert.c ${NODE} -o $@

133-heap_extract: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 133-main.c 132-array_to_heap.c 131-heap_insert.c ${DELETE} ${NODE} -o $@

134-heap_to_sorted_array: ${DEPS}
	${GCC} $(CFLAGS) ${PRINT} $@.c 134-main.c 133-heap_extract.c 132-array_to_heap.c 131-heap_insert.c ${NODE} -o $@

clean:
	$(RM) *.o
	$(RM) 0-binary_tree_node
	$(RM) 1-binary_tree_insert_left
	$(RM) 2-binary_tree_insert_right
	$(RM) 3-binary_tree_delete
	$(RM) 4-binary_tree_is_leaf
	$(RM) 5-binary_tree_is_root
	$(RM) 6-binary_tree_preorder
	$(RM) 7-binary_tree_inorder
	$(RM) 8-binary_tree_postorder
	$(RM) 9-binary_tree_height
	$(RM) 10-binary_tree_depth
	$(RM) 11-binary_tree_size
	$(RM) 12-binary_tree_leaves
	$(RM) 13-binary_tree_nodes
	$(RM) 14-binary_tree_balance
	$(RM) 15-binary_tree_is_full
	$(RM) 16-binary_tree_is_perfect
	$(RM) 17-binary_tree_sibling
	$(RM) 18-binary_tree_uncle
	$(RM) 100-binary_trees_ancestor
	$(RM) 101-binary_tree_levelorder
	$(RM) 102-binary_tree_is_complete
	$(RM) 103-binary_tree_rotate_left
	$(RM) 104-binary_tree_rotate_right
	$(RM) 110-binary_tree_is_bst
	$(RM) 111-bst_insert
	$(RM) 112-array_to_bst
	$(RM) 113-bst_search
	$(RM) 114-bst_remove
	$(RM) 120-binary_tree_is_avl
	$(RM) 121-avl_insert
	$(RM) 122-array_to_avl
	$(RM) 123-avl_remove
	$(RM) 124-sorted_array_to_avl
	$(RM) 130-binary_tree_is_heap
	$(RM) 131-heap_insert
	$(RM) 132-array_to_heap
	$(RM) 133-heap_extract
	$(RM) 134-heap_to_sorted_array
