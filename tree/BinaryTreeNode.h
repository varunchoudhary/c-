template <typename T>
class BinaryTreeNode {
	public:
	T data;
	BinaryTreeNode<T>* left;
	BinaryTreeNode<T>* right;

	BinaryTreeNode(T data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}

	~BinaryTreeNode() {
		if (left != NULL) {
			delete left;
		}
		if (right != NULL) {
			delete right;
		}
	}
};
