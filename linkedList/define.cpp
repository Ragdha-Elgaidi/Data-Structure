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

int main()
{
	Ragdha

	Node* node1 = new Node(8);
	Node* node2 = new Node(7);
	Node* node3 = new Node(3);

	node1->next = node2;
	node2->next = node3;
	node3->next = nullptr;

	return 0;

}
