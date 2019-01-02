#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stack>

using namespace std;

char str1[100], str2[100];
struct Node {
	Node *rchild;
	Node *lchild;
	int data;
};
Node *create() {
	Node *bt = new Node();
	bt->rchild = bt->lchild = nullptr;
	return bt;
}

Node *build(int s1, int e1, int s2, int e2) {
	Node *T = create();
	T->data = str1[s1];
	int idx;
	for (int i = s2; i <= e2; i++) {
		if (str2[i] == str1[s1]) {
			idx = i;
			break;
		}
	}
	if (idx != s2) {
		T->lchild = build(s1 + 1, s1 + (idx - s2), s2, idx - 1);
	}
	if (idx != e2) {
		T->rchild = build(s1 + (idx - s2) + 1, e1, idx + 1, e2);
	}
	return T;
}

void PreOrder(Node *bt) {
	stack <Node*> pre;
	Node *T = bt;
	while (!pre.empty() || T != nullptr) {
		while (T != nullptr) {
			printf("%d", T->data);
			pre.push(T);
			T = T->lchild;
		}
		if (!pre.empty()) {
			T = pre.top();
			pre.pop();
		}
	}
}
void InOrder(Node *bt) {
	stack <Node*> In;
	Node *T = bt;
	while (!In.empty() || T != nullptr) {
		while (T != nullptr) {
			In.push(T);
			T = T->lchild;
		}
		if (!In.empty()) {
			T = In.top();
			In.pop();
			printf("%d", T->data);
			T = T->rchild;
		}
	}
}

void PostOrder(Node *bt) {
	stack<Node*> post;
	Node *cur;
	Node *pre = nullptr;
	post.push(bt);
	while (!post.empty()) {
		cur = post.top();
		if ((cur->lchild == nullptr&&cur->rchild == nullptr) || pre != nullptr && (pre == cur->rchild || pre == cur->lchild)) {
			printf("%d", cur->data);
			post.pop();
			pre = cur;
		}
		else {
			if (cur->rchild != nullptr) {
				post.push(cur->rchild);
			}
			if (cur->lchild != nullptr) {
				post.push(cur->lchild);
			}
		}
	}
}

// int main() {
// 	while(scanf("%s",str1)!=EOF){
//         scanf("%s",str2);
//     }
// 	int len1 = strlen(str1);
// 	int len2 = strlen(str2);
// 	if (len1 != len2) {
// 		printf("InputError");
// 		system("pause");
// 		return 0;
// 	}
// 	else {
// 		PreOrder(build(0, len1 - 1, 0, len2 - 1));
// 	}
// 	system("pause");
// 	getchar();
// 	return 0;
// }