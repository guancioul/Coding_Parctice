#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <sstream>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void trimLeftTrailingSpaces(string &input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
        return !isspace(ch);
    }));
}

void trimRightTrailingSpaces(string &input) {
    input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), input.end());
}

TreeNode* stringToTreeNode(string input) {
    trimLeftTrailingSpaces(input);
    trimRightTrailingSpaces(input);
    input = input.substr(1, input.length() -2);
    if (!input.size()) {
        return nullptr;
    }

    string item;
    stringstream ss;
    ss.str(input);

    getline(ss, item, ',');
    TreeNode* root = new TreeNode(stoi(item));
    queue<TreeNode*>  nodeQueue;
    nodeQueue.push(root);

    while (true) {
        TreeNode* node = nodeQueue.front();
        nodeQueue.pop();

        if(!getline(ss, item, ',')) {
            break;
        }

        trimLeftTrailingSpaces(item);
        if (item != "null") {
            int leftNumber = stoi(item);
            node->left = new TreeNode(leftNumber);
            nodeQueue.push(node->left);
        }

        if(!getline(ss, item, ',')) {
            break;
        }

        trimLeftTrailingSpaces(item);
        if(item != "null") {
            int rightNumber = stoi(item);
            node->right = new TreeNode(rightNumber);
            nodeQueue.push(node->right);
        }
    }
    return root;
}

void prettyPrintTree(TreeNode* node, string prefix = "", bool isLeft = true) {
    if (node == nullptr) {
        cout << "Empty tree";
        return;
    }

    if(node->right) {
        prettyPrintTree(node->right, prefix + (isLeft ? "-   " : "    "), false);
    }

    cout << prefix + (isLeft ? "--- " : "--- ") + to_string(node->val) + "\n";

    if (node->left) {
        prettyPrintTree(node->left, prefix + (isLeft ? "    " : "-   "), true);
    }
}

class Solution {
public:
    // my method
    void travel(TreeNode* root, int low, int high, int& res){
        if(!root) return ;
        if(root->val >=low && root->val <=high) res+=root->val;
        travel(root->left, low, high, res);
        travel(root->right, low, high, res);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int res = 0;
        travel(root, low, high, res);
        return res;
    }
    // Method 1
    int rangeSumBST_M1(TreeNode* root, int low, int high){
        if(!root) return 0;
        if(root->val < low) return rangeSumBST_M1(root->right, low, high);
        if(root->val > high) return rangeSumBST_M1(root->left, low, high);
        return root->val + rangeSumBST_M1(root->left, low, high) + rangeSumBST_M1(root->right, low, high);
    }
};

int main() {
    //string line;
    //while(getline(cin, line)) {
    //    TreeNode* root = stringToTreeNode(line);
    //    //prettyPrintTree(root);
    //}
    Solution sol;
    cout << sol.rangeSumBST_M1(stringToTreeNode("[10,5,15,3,7,null,18]"), 7, 15) << "\n";
    cout << sol.rangeSumBST_M1(stringToTreeNode("[10,5,15,3,7,13,18,1,null,6]"), 6, 10) << "\n";
    return 0;
}