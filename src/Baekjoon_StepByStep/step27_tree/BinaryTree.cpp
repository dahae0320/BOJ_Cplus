class BinaryTree 
{
	public:
		BinaryTree();	// 공백 이진 트리 생성
	
		bool IsEmpty();	
	
		BinaryTree(BinaryTree bt1, int item, BinaryTree bt2);
	
		BinaryTree LeftSubtree();
		BinaryTree RightSubtree();
		int RootData();
};