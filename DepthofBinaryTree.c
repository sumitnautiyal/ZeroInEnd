typedef struct tnode *treeptr;
struct tnode{
int data;
treeptr left,right;
};
int depth (treeptr root)
{
	int leftdepth=-1, rightdepth=-1;
	if(root == NULL) return(-1);
	if(root -> left != NULL) leftdepth= depth(root->left);
	if(root -> right != NULL) rightdepth= depth(root->right);
	if(leftdepth>=rightdepth) return(1+leftdepth);
	else return(1+rightdepth);
}
