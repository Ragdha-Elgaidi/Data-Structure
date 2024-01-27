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

class LinkedList
{
private:
	Node* head {};
	Node* tail {};
	int length = 0;
public:
	void print()
	{
		for (Node* cur = head; cur; cur = cur->next)
		{
			cout << cur->data << " ";
		}
		cout << "/n";
	}
	void insert_end(int value)
	{
		Node* item = new Node(value);

		if (!head)
		{
			head = tail = item;
		}
		else
		{
			tail->next = item;
			tail = item;
		}
		length++;
	}
	Node* get_nth(int n)
	{
		int cnt = 0;
		for (Node* cur = head; cur; cur = cur->next)
		{
			if (++cnt == n)
			{
				return cur;
			}
		}
		return nullptr;
	}
	int search(int value)
	{
		int indx = 0;
		for (Node* cur = head; cur; cur = cur->next, indx++)
		{
			if (cur->data == value)
			{
				return indx;
			}
		}
		return -1;
	}
	int search_improved(int value) 
	{
		int indx = 0;
		Node* prv = nullptr;	

		for (Node* cur = head; cur; cur = cur->next, indx++)
		{
			if (cur->data == value) 
			{
				if (!prv)
					return indx;

				swap(prv->data, cur->data);

				return indx - 1;
			}
			prv = cur;
		}
		return -1;
	}

	int search_improved_v2(int value) 
	{
		int indx = 0;

		for (Node* cur = head, *prv = nullptr; cur; prv = cur, cur = cur->next) 
		{
			if (cur->data == value) 
			{
				if (!prv)
					return indx;

				swap(prv->data, cur->data);

				return indx - 1;
			}
			++indx;
		}
		return -1;
	}
};
int main() 
{
	Ragdha


	return 0;
}
