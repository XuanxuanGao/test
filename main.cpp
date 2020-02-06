// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// int StrToInt(char* string){
//     int number = 0;
//     while(*string != 0){
//         number = number*10 + *string -'0';
//         ++string;
//     }
//     return number;
// }
// struct Node{
//     int val;
//     Node *next;
// };
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) :val(x), next(NULL) {}
// };
// void AddToTail(ListNode** pHead, int value){
//     ListNode* pNew = new ListNode(value);//创建一个结点
//     if(*pHead == nullptr){
//         *pHead = pNew;//如果原链表为空，直接让头指针 等于 指向新创建结点的指针
//     }
//     else{//如果原链表不为空，就要先找到链表的尾部，然后让尾指针（即最后一个结点的next指针） 等于 指向新创建结点的指针
//         ListNode* pNode = *pHead;
//         while(pNode->next != nullptr){
//             pNode = pNode->next;
//         }
//         pNode->next = pNew;
//     }
// }
// vector<int> printListFromTailToHead(ListNode* head) {
//     stack<ListNode*> nodes;
//     ListNode* pNode = head;
//     while(pNode != nullptr){
//         nodes.push(pNode);
//         pNode = pNode->next;
//     }
    
//     vector<int> res;
//     while(!nodes.empty()){
//         res.push_back(nodes.top()->val);
//         nodes.pop();
//     }
//     return res;
// }

// int main(){
//     vector<int> x = {1,2,3,4,5};
//     ListNode** pHead = nullptr;
//     for(int i;i<x.size();i++){
//         AddToTail(pHead, x[i]);
//     }
//     printListFromTailToHead(pHead);

// }