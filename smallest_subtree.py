def subtreeWithAllDeepest(self, root: TreeNode) -> TreeNode:
        def find_depth(node):
            if not node:
                return 0
            return max(find_depth(node.left), find_depth(node.right)) + 1
        
        # Function to traverse the tree and find deepest nodes
        def dfs(node):
            if not node:
                return None, 0
            left_node, left_depth = dfs(node.left)
            right_node, right_depth = dfs(node.right)
            if left_depth > right_depth:
                return left_node, left_depth + 1
            elif left_depth < right_depth:
                return right_node, right_depth + 1
            else:
                return node, left_depth + 1
        
        deepest_node, _ = dfs(root)
        return deepest_node