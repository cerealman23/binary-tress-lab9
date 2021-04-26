#include "treeNode.h"
#include <iomanip>

template <class V>
class tree {
    TreeNode<V> * root;
    int size;
    
    public:
    // default constructor
    // by default, the tree is empty
    tree(){
        root = nullptr;
        size = 0;
    }

    // binary search value x in tree rooted at node t
    bool treeBSearch(V x, TreeNode<V>* t){

      // implement this method
      return false;
    }
    
    // binary search value x in tree
    bool treeBSearch(V x){
        return treeBSearch(x, root);
    }
    
    // check node t is leaf
    bool isLeaf(TreeNode<V>* t){
      //implement this method
      return false;
    }
    
    // find the height of the tree rooted at node t
    int height(TreeNode<V>* t){
      //implement this method
      return 0;
    }
    
    int height(){
        return height(root);
    }
    
    // find the number of nodes of tree rooted at t
    int nNodes(TreeNode<V>* t){
      //implement this method
      return 0;
    }
    
    int nNodes(){
        return nNodes(root);
    }

    // insert value x to the current tree object

    void insertBTree(V x, TreeNode<V>* node) {

      if (x == node->getDatum())
	return;

      if (x < node->getDatum()) {
		
	if (!node->getLeft()) {

	  node->setLeft(new TreeNode<V>(x, nullptr, nullptr));
	  
	  return;
	}
	  
	  insertBTree(x, node->getLeft());
	  
      } if (x > node->getDatum()) {

	

        if (!node->getRight()) {

	  node->setRight(new TreeNode<V>(x, nullptr, nullptr));
	  
	  return;
        }
	
	insertBTree(x, node->getRight());

      }

      
    }
    
  
    void insert(V x){
      // implement this method

      root = !root ? new TreeNode<V>(x, nullptr, nullptr) : root;
      
      insertBTree(x, root);
      
    }

    
    void traverseInorder(TreeNode<V> *x)
    {
        if (x == nullptr)
            return;
        traverseInorder(x->getLeft());
        cout << x->getDatum() << " ";
        traverseInorder(x->getRight());
    }
    void traverseInorder()
    {
        traverseInorder(root);
        cout<<endl;
    }

    void traversePreorder(TreeNode<V> *x){
        if (x == nullptr)
            return;
        cout << x->getDatum() << " ";
        traversePreorder(x->getLeft());
        traversePreorder(x->getRight());
    }
    void traversePreorder(){
        traversePreorder(root);
        cout<<endl;
    }

    void traversePostorder(TreeNode<V> *x){
        if (x == nullptr)
            return;
        
        traversePostorder(x->getLeft());
        traversePostorder(x->getRight());
        cout << x->getDatum() << " ";
    }
    void traversePostorder(){
        traversePostorder(root);
        cout<<endl;
    } 
    
};