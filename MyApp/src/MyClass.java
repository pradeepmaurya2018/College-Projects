class Node
{
	int data;
	Node left;
	Node right;
	
	Node(int d)
	{
		data=d;
		left=null;
		right=null;
	}
}

public class MyClass {
	
	Node root= new Node(1);
	root.left=new Node(2);
}
