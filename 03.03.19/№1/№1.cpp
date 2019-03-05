#include <iostream>

using namespace std;

class double_stack
{
	Node* head;
public:
	double_stack() :head(NULL) {}

	void push(double x)
	{
		Node* temp = new Node;
		temp->data = x;
		temp->next = head;
		head = temp;
	};

	double pop() {
		if (head == NULL)
        {
			cout << "Stack is empty";
			return 0;
		};
		Node* temp = head;
		head = head->next;
		double x = temp->data;
		delete temp;
		return x;
	};

	~double_stack()
	{
		while (head != NULL)
        {
			Node* temp = head;
			head = head->next;
			delete temp;
		};
	};
};

int main()
{
    double_stack A;
    A.push(45);
    A.push(9.54);
    cout << A.pop();
}
