class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def inorderTraversal(root: TreeNode):
    res = []
    def helper(node):
        if not node:
            return
        helper(node.left)   # Visit Left
        res.append(node.val) # Visit Node
        helper(node.right)  # Visit Right
    
    helper(root)
    return res