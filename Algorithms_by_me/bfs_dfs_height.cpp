// C++ implementation of BFS, DFS and height of a binary tree


//Definition of Node for Binary tree

// struct BstNode {
//	 int data; 
//	 BstNode* left;
//	 BstNode* right;
// };

int BFS(BstNode* root, int x){
	queue<BstNode*> Q;
	Q.push(root);
	while(!Q.empty()){
		BstNode* a = Q.front();
		Q.pop();
		if(x == a->data) return 1;
		if(a->left != NULL) Q.push(a->left);
		if(a->right != NULL) Q.push(a->right);
	}
	return 0;
}

int DFS(BstNode* root, int x){
	if(root == NULL) return 0;
	if(root->data == x) return 1;
	
	return (DFS(root->left,x) || DFS(root->right,x)) ;
	
}

int height(BstNode* root){
	if(root == NULL) return -1;
	return max(height(root->left),height(root->right))+1;
}