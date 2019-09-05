class Node{
	private:
		int data;
		Node* next;
	public:
		Node(int data,Node* next){
			this->data=data;
			this->next=next;
		}
		int get_data(){
			return data;
		}
		Node* get_next_node(){
			return next;
		}
};
