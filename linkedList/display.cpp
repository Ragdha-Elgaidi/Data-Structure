#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string.h>
#include <cctype> // for tolower function
#include <cstring>//memset
#include <stack>
#include <queue>
#include <deque>
#include <tuple> 
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <fstream>
#include <sstream>
#include <cassert>


#define ll  long long
#define Ragdha ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

struct Node
{
	int data{};
	Node* next{};

	Node(int data):data(data)
	{

	}
};

void print1(Node* head)
{
	while (head != nullptr)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void print2(Node* head)
{
	if (head == nullptr)
	{
		cout << endl;
		return;
	}

	cout << head->data << " ";
	print2(head->next);
}

void print3_reversed(Node* head)
{		// print backward recursively
	if (head == nullptr)
	{
		return;
	}
	print3_reversed(head->next);
	cout << head->data << " ";
}

int main() 
{

	Node* node1 = new Node(6);
	Node* node2 = new Node(10);
	Node* node3 = new Node(8);
	Node* node4 = new Node(15);

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = nullptr;

	print1(node1);


	print2(node1);
	print3_reversed(node1);

	return 0;
}
